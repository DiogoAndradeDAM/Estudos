-- Classe Button
Button = {}
Button.__index = Button

function Button.new(x, y, width, height, text, onClick)
  local self = setmetatable({}, Button)
  self.x = x
  self.y = y
  self.width = width
  self.height = height
  self.text = text
  self.onClick = onClick
  self.isHovered = false
  return self
end

function Button:draw()
  -- Desenha o botão com base na posição, largura e altura
  love.graphics.setColor(1, 1, 1) -- Define a cor do botão
  love.graphics.rectangle("line", self.x, self.y, self.width, self.height) -- Desenha o retângulo do botão
  love.graphics.printf(self.text, self.x, self.y + (self.height / 2), self.width, "center") -- Desenha o texto centralizado no botão

  if self.isHovered then
    love.graphics.setColor(0.8, 0.8, 0.8, 0.5) -- Define a cor do botão quando estiver sendo hoverado
    love.graphics.rectangle("fill", self.x, self.y, self.width, self.height) -- Desenha um retângulo preenchido sobre o botão
  end
end

function Button:update(dt)
  -- Verifica se o mouse está sobre o botão
  local mouseX, mouseY = love.mouse.getPosition()
  self.isHovered = mouseX >= self.x and mouseX <= self.x + self.width and
                   mouseY >= self.y and mouseY <= self.y + self.height
end

function Button:mousePressed(x, y, mouseButton)
  -- Verifica se o botão foi clicado
  if self.isHovered and mouseButton == 1 and self.onClick then
    self.onClick()
  end
end

-- Função para criar um novo botão
function createButton(x, y, width, height, text, onClick)
  return Button.new(x, y, width, height, text, onClick)
end

-- Funções love2d
function love.load()
  button = createButton(100, 100, 200, 50, "Clique aqui", function()
    print("Botão clicado!")
  end)
end

function love.update(dt)
  button:update(dt)
end

function love.draw()
  button:draw()
end

function love.mousepressed(x,y, button)
  button:mousePressed(x, y, button)
end

