Anim8   = require("libs/anim8")

function love.load()
    love.graphics.setDefaultFilter("nearest", "nearest")

    pingo = {}
    pingo.sprite = love.graphics.newImage("assets/pingo_spritesheets.png")
    pingo.grid = Anim8.newGrid(16,16, pingo.sprite:getWidth(), pingo.sprite:getHeight())
    pingo.position = {x= 100, y=100}
    pingo.velocity = {x=0, y=0}
    pingo.animations = {}
    pingo.animations.down = Anim8.newAnimation(pingo.grid('1-4', 1),0.2)
    pingo.animations.left = Anim8.newAnimation(pingo.grid('1-4',2),0.2)
    pingo.animations.right = Anim8.newAnimation(pingo.grid('1-4',3),0.2)
    pingo.animations.up = Anim8.newAnimation(pingo.grid('1-4',4),0.2)
    pingo.animationCurrent = pingo.animations.down
end

function love.update(dt)
    
    if love.keyboard.isDown("right") then
        pingo.velocity.x = 80
        pingo.velocity.y = 0
        pingo.animationCurrent = pingo.animations.right
    elseif love.keyboard.isDown("left") then
        pingo.velocity.x = -80
        pingo.velocity.y = 0
        pingo.animationCurrent = pingo.animations.left
    elseif love.keyboard.isDown("down") then
        pingo.velocity.y = 80
        pingo.velocity.x = 0
        pingo.animationCurrent = pingo.animations.down
    elseif love.keyboard.isDown("up") then
        pingo.velocity.y = -80
        pingo.velocity.x = 0
        pingo.animationCurrent = pingo.animations.up
    else
        pingo.velocity.y = 0
        pingo.velocity.x = 0
    end

    if pingo.velocity.x ~= 0 or pingo.velocity.y ~= 0 then
        pingo.position.x = pingo.position.x + pingo.velocity.x * dt
        pingo.position.y = pingo.position.y + pingo.velocity.y * dt
        pingo.animationCurrent:resume()
    else
        pingo.animationCurrent:pause()
    end

    pingo.animationCurrent:update(dt)
end

function love.draw()
    love.graphics.setBackgroundColor({0.4,0.43,1,1})
    love.graphics.scale(3)
    pingo.animationCurrent:draw(pingo.sprite, pingo.position.x, pingo.position.y)

end