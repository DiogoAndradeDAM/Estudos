local str = "Diogo Andrade"
print(str:lower())
print(str:upper())
print(str:find("o", 4))
print(str:len())
print(str:rep(10, " - "))
print(str:reverse())
local init = str:find(" ")
if(init ~= nil) then
    print(str:sub(init+1))
end
print(string.format("My name is %s and have %d years old", "Diogo", 18))