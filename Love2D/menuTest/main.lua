function love.load()
    -- define as propriedades do botão
    button = { x = 100, y = 100, w = 200, h = 50, text = "Clique aqui!" }
  end
  
  function love.update(dt)
    -- verifica se o botão foi clicado
    if love.mouse.isDown(1) and CheckCollision(button, love.mouse.getX(), love.mouse.getY()) then
      button.text = "botão clicado"
    end
  end
  
  function love.draw()
    -- desenha o botão
    love.graphics.setColor(0.4, 0.4, 0.4)
    love.graphics.rectangle("fill", button.x, button.y, button.w, button.h)
    
    -- desenha o texto centralizado no botão
    love.graphics.setColor(1, 1, 1)
    love.graphics.printf(button.text, button.x, button.y + (button.h - love.graphics.getFont():getHeight())/2, button.w, "center")
  end
  
  function CheckCollision(rectangle, x, y)
    -- verifica se o ponto (x, y) está dentro do retângulo
    return x > rectangle.x and
           x < rectangle.x + rectangle.w and
           y > rectangle.y and
           y < rectangle.y + rectangle.h
  end
  