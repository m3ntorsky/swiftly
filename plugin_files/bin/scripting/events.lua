local eventHandlers = {}
local msgpack_unpack = msgpack.unpack
local msgpack_pack = msgpack.pack
local table_unpack = table.unpack

AddGlobalEvents(function(event, eventSource, eventName, eventData)
    if not eventHandlers[eventName] then return EventResult.Continue end
    if #eventHandlers[eventName] <= 0 then return EventResult.Continue end

    local data = msgpack_unpack(eventData)
    if not data then return end
    if type(data) ~= "table" then return end

    for i=1,#eventHandlers[eventName] do
        local handle = eventHandlers[eventName][i].handle
        if type(handle) == "function" then
            local result = (handle(event, table_unpack(data)) or EventResult.Continue)
            if result ~= EventResult.Continue then return result end
        end
    end

    return EventResult.Continue
end)

local eventRegistryIndex = 50

function AddEventHandler(eventName, cb)
    if not eventHandlers[eventName] then eventHandlers[eventName] = {} end

    eventRegistryIndex = eventRegistryIndex + 1
    table.insert(eventHandlers[eventName], { eventRegistryIndex = eventRegistryIndex, handle = cb })

    RegisterEventHandlerPlugin(eventName)

    return { key = eventRegistryIndex, name = eventName }
end

function RemoveEventHandler(eventData)
    if not eventData.key or not eventData.name then
        print("Error: Invalid event data passed to RemoveEventHandler.")
        return
    end
    if not eventHandlers[eventData.name] then eventHandlers[eventData.name] = {} end

    for i=1,#eventHandlers[eventData.name] do
        if eventHandlers[eventData.name].eventRegistryIndex == eventData.key then
            table.remove(eventHandlers[eventData.name], i)
            break
        end
    end

    if #eventHandlers[eventData.name] == 0 then
        RemoveEventHandlerPlugin(eventData.name)
    end
end

function TriggerEvent(eventName, ...)
    local encodedData = msgpack_pack({...})

    local eventResult, eventData, _ = table_unpack(TriggerEventInternal(eventName, encodedData))
    return eventResult, eventData
end