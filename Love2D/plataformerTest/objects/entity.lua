local Rect = require "objects/rect"
local Vec2 = require "tools/vec2"

local Entity = {}

function Entity:new(x,y,w,h, id, renderer, gameLoop)
    local entity = Rect:new(x,y,w,h)

    entity.id = id or "none"

    entity.vel   = Vec2:new(0,0)
    entity.dir   = Vec2:new(0,0)
    entity.speed = Vec2:new(0,0)

    function entity:load()
        renderer:addRenderer(self)
        gameLoop:addLoop(self)
    end

    function entity:tick(dt)
        print(self.id)
    end

    function entity:draw()
        love.graphics.rectangle("fill", self.pos.x, self.pos.y, self.size.x, self.size.y)
    end

    return entity
end

return Entity