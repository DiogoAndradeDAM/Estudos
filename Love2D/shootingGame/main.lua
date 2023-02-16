function love.load()
    target = {x = 100, y = 100, radius = 50}

    score = 0
    timer = 0

    gameFont = love.graphics.newFont(40)
end

function love.update(dt)

end

function love.draw()
    love.graphics.setColor(1,0,0)
    love.graphics.circle("fill", target.x, target.y, target.radius)
    love.graphics.setColor(1,1,1)
    love.graphics.setFont(gameFont)
    love.graphics.print(score, 0, 0)
end