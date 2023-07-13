Person = {_name = "", _age = 0, _height = 0}

function Person:new(o, name, age, height)
    o = o or {}
    setmetatable(o, {__index = self})
    self._name = name or ""
    self._age = age or 0
    self._height = height or 0.0
    return o
end

function Person:toString()
    return "(Name: "..self._name..") - ".."(Age:"..tostring(self._age)..") - ".."(Height: "..tostring(self._height)..")"
end

function Person:getName()
    return self._name
end

function Person:getAge()
    return self._age
end

function Person:setAge()
    self._age = self._age + 1
end

function Person:getHeight()
    return self._height
end

function Person:setHeight(value)
    self._height = value
end

local diogo = Person:new(nil, "Diogo", 17, 1.69)

print(diogo:toString())
diogo:setAge()
print(diogo:toString())
diogo:setHeight(1.70)
print(diogo:toString())

io.write(diogo:getName())