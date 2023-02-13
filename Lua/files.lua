-- r: Read only (default)
-- w: Overwrite or create a new file
-- a: Append or create a new file
-- r+: Read & write existing file
-- w+: Overwrite read or create file
-- a+: Append read or create file

file = io.open("test.lua", "w+")

file:write("Random String of text\n")
file:write("Some more text\n")

file:seek("set",0)

print(file:read("*a"))

file:close()

file = io.open("text.lua", "a+")

file:write("Even more text\n")

file:seek("set", 0)

print(file:read("*a"))

file:close()