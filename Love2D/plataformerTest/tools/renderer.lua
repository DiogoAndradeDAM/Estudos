Renderer = {}

local NUM_OF_LAYERS = 5
local insert = table.insert
local remove = table.remove

function Renderer:create()
    local renderer = {}

    renderer.drawers = {}
    for i = 0, NUM_OF_LAYERS do
        renderer.drawers[i] = {}
    end

    function renderer:addRenderer(obj, layer)
        local l = layer or 0
        insert(self.drawers[l], obj)
    end
    
    function renderer:draw()
        for layer = 0, #self.drawers do
            for draw = 0, #self.drawers[layer] do
                local obj = self.drawers[layer][draw]
                if obj ~= nil then
                    obj:draw()
                end
            end
        end
    end

    return renderer
end

return Renderer

