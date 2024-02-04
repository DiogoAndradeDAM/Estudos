--[[
.	all characters
%a	letters
%c	control characters
%d	digits
%l	lower case letters
%p	punctuation characters
%s	space characters
%u	upper case letters
%w	alphanumeric characters
%x	hexadecimal digits
%z	the character with representation 0

Upper case represents the complement of the class
]]

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