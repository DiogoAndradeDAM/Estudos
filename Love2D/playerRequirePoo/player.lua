local Globals = require("globals")

Player = {name = "", x=0, y=0, xsize=0, ysize=0, color={1,0,0}, hsdp=0, vspd=0, spd=1}

function Player:new(o, name, x, y, xsize, ysize, color, spd)
    o = o or {}
    setmetatable(o, {__index = self})
    --self.__index = self
    self.name = name or "none"
    self.x = x or 0
    self.y = y or 0
    self.xsize = xsize or 0
    self.ysize = ysize or 0
    self.color = color or {1,0,0}
    self.spd = spd or 1
    self.hspd = 0
    self.vspd = 0
    return o
end

function Player:drawName()
    love.graphics.print(self.name, self.x+10, self.y-20)
end

function Player:draw()
    love.graphics.setColor(1,1,1)
    Player:drawName()
    love.graphics.setColor(self.color)
    love.graphics.rectangle("fill", self.x, self.y, self.xsize, self.ysize)
end

function Player:setPosition(newx, newy)
    self.x = self.x + ( newx or 1 )
    self.y = self.y + ( newy or 1 )
end

function Player:newPosition(newx, newy)
    self.x = newx or self.x
    self.y = newy or self.y
end

function Player:getKeyboardMoviment()
    self.hspd = ( Globals.btonum(love.keyboard.isDown("right", "d")) - Globals.btonum(love.keyboard.isDown("left", "a")) )
    self.vspd = ( Globals.btonum(love.keyboard.isDown("down", "s")) - Globals.btonum(love.keyboard.isDown("up", "w")) )
end

function Player:moviment()
    Player:getKeyboardMoviment()
    Player:setPosition(self.hspd*self.spd, self.vspd*self.spd)
end
 
return Player