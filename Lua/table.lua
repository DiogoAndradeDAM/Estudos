local aTable = {}

for i = 1, 10 do
    aTable[i] = i
end

io.write(#aTable.."\n")
io.write("First: "..aTable[1].."\n")
table.insert(aTable, 1, 0)
io.write("First: "..aTable[1].."\n")

io.write(table.concat(aTable, ",").."\n")

table.remove(aTable, 1)
io.write(table.concat(aTable, ",").."\n")

