local Vec2 = require "tools/vec2"

local Rect = {}

function Rect:new(x,y,w,h)
    local rect = {}

    rect.pos = Vec2:new(x, y)
    rect.size = Vec2:new(w, h)

    return rect
end


return Rect 