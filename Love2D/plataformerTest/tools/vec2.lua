local Vec2 = {}

function Vec2:new(x, y)
    local vec2 = {}

    vec2.x = x or 0
    vec2.y = y or 0


    function vec2:move(newX, newY, dt)
        local delta = dt or 1
        self.x = self.x + newX * delta
        self.y = self.y + newY * delta
    end

    function vec2:newPosition(newX, newY)
        self.x = newX or 0
        self.y = newY or 0
    end


    return vec2
end

return Vec2