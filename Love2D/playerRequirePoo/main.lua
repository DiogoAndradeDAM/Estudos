local Player = require("player")

function love.load()
    myPlayer = Player:new(nil, "Diogo", 100, 100, 50, 50, nil, 5)
end

function love.update(dt)
    myPlayer:moviment()
end

function love.draw()
    myPlayer:draw()
end