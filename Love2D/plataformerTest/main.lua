local Renderer  = require "tools/renderer"
local GameLoop  = require "tools/gameLoops"
local Vec2      = require "tools/vec2"
local Rect      = require "objects/rect"
local Entity    = require "objects/entity"

renderer = Renderer:create()
gameLoop = GameLoop:create()

g_GameTime = 0

--Create Player
local ent = Entity:new(32,32, 64,64, "Player", renderer, gameLoop)

 
function love.load()
    ent:load()
end

function love.update(dt)
    g_GameTime = g_GameTime + dt

    gameLoop:update(dt)

end

function love.draw()
    renderer:draw()
end