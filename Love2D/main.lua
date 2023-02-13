function love.load()
    target = {}
    target.x = 300
    target.y = 200

    Sprite = love.graphics.newImage("ragozineHead.png")

    Movex = 0
    Movey = 0

    Spd = 5

    love.window.setFullscreen(true, "desktop")
end

function love.update(dt)
    Movex = ( bool_to_number(love.keyboard.isDown("right")) - bool_to_number(love.keyboard.isDown("left")) )
    Movey = ( bool_to_number(love.keyboard.isDown("down")) - bool_to_number(love.keyboard.isDown("up")) )

    target.x = target.x + Movex * Spd
    target.y = target.y + Movey * Spd
end

function love.draw()
    love.graphics.setBackgroundColor(0.500,0.700,1)
    love.graphics.setColor(1,0,0)
    love.graphics.rectangle("fill", target.x, target.y, 100, 100)
    love.graphics.setColor(1,1,1)
    love.graphics.draw(Sprite, 100, 100, 0, 3, 3)
    
end

function bool_to_number(value)
    return value and 1 or 0
end
