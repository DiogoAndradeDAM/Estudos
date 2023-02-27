local Renderer  = require "tools/renderer"
local GameLoop  = require "tools/gameLoops"
local Vec2      = require "tools/vec2"
local Rect      = require "objects/rect"
local Entity    = require "objects/entity"
local Sti       = require "libs/sti"
--local tlm       = require "tiles/tlm"
local camera    = require "tools/camera"

renderer = Renderer:create()
gameLoop = GameLoop:create()

GameTime = 0


 
function love.load()
    camera:setBounds(0,0, love.graphics.getWidth(), love.graphics.getHeight())


    gamemap = Sti("assets/maps/level_1.lua")
    player = 10
end

function love.update(dt)
    GameTime = GameTime + dt
    gameLoop:update(dt)
    if love.keyboard.isDown("d") then player = player + 10 * dt end


    camera:setPosition(player,0)

end

function love.draw()
    camera:set()
    gamemap:draw()
    renderer:draw()
    camera:unset()
end

function math.clamp(x, min, max)
    return x < min and min or (x > max and max or x)
end