function love.load()
    pingo = {
        x = 0,
        y = 0,
        sprite = love.graphics.newImage("sprites/pingo_front_tilesheet.png"),
        animation = {
            direction = "right",
            idle = true,
            frame = 1,
            maxFrames = 4,
            speed = 2,
            timer = 0
        }
    }

    SPRITE_WIDTH, SPRITE_HEIGHT = 96, 24
    QUAD_WIDTH, QUAD_HEIGHT = 24, 24

    quads = {}

    for i = 1, pingo.animation.maxFrames do
        quads[i] = love.graphics.newQuad(QUAD_WIDTH * (i - 1), 0, QUAD_WIDTH, QUAD_HEIGHT, pingo.sprite)
    end
end

function love.update(dt)
    if love.keyboard.isDown("d") then
        pingo.animation.idle = false 
        pingo.x = pingo.x + pingo.animation.speed
    elseif love.keyboard.isDown("a") then
        pingo.animation.idle = false
        pingo.x = pingo.x - pingo.animation.speed
    elseif love.keyboard.isDown("s") then
        pingo.animation.idle = false
        pingo.y = pingo.y + pingo.animation.speed
    elseif love.keyboard.isDown("w") then
        pingo.animation.idle = false
        pingo.y = pingo.y - pingo.animation.speed
    else
        pingo.animation.idle = true
        pingo.animation.frame = 1
    end

    if not pingo.animation.idle then
        pingo.animation.timer = pingo.animation.timer + dt

        if pingo.animation.timer > 0.2 then
            pingo.animation.timer = 0

            pingo.animation.frame = pingo.animation.frame + 1

            if pingo.animation.frame > pingo.animation.maxFrames then
                pingo.animation.frame = 1
            end
        end
    end

end

function love.draw()
    love.graphics.setBackgroundColor(0.8, 0.8, 1)
    love.graphics.scale(3)

    love.graphics.draw(pingo.sprite, quads[pingo.animation.frame], pingo.x, pingo.y)
end