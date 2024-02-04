local function div(a, b)
    return a/b
end

local function myErrorFunction(err)
    print("I make a mistake hehe " .. err)
end

local a = 10
local b = 2

local status, err = pcall(div(a,b))
if not status then
    print("sucess")
else
    error(error)
end

print(div(a,b))
