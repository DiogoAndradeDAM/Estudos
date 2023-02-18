function love.load()
    shape1 = {
        x = 0,
        y = 0,
        xsize = 100,
        ysize = 100,
    }

    function shape1:getCollision(outer)
        if (self.x < outer.x + outer.xsize)
        and (self.x + self.xsize > outer.x)
        and (self.y < outer.y + outer.ysize)
        and (self.y + self.ysize > outer.y) then 
            return true
        else 
            return false
        end
    end

    shape2 = {
        x = 300,
        y = 300,
        xsize = 200,
        ysize = 200
    }
end

function love.update(dt)
    if love.keyboard.isDown("d") then
        shape1.x = shape1.x + 5
    end
    if love.keyboard.isDown("a") then
        shape1.x = shape1.x - 5
    end
    if love.keyboard.isDown("s") then
        shape1.y = shape1.y + 5
    end
    if love.keyboard.isDown("w") then
        shape1.y = shape1.y - 5
    end
end

function love.draw()
    if shape1:getCollision(shape2) then
        love.graphics.setColor(0,0,1)
        --shape1.x = shape1.x - 5
        --shape1.y = shape1.y - 5
    else 
        love.graphics.setColor(0,1,0)
    end
    love.graphics.rectangle("fill", shape1.x, shape1.y, shape1.xsize, shape1.ysize)
    love.graphics.setColor(1,0,0)
    love.graphics.rectangle("fill", shape2.x, shape2.y, shape2.xsize, shape2.ysize)
end