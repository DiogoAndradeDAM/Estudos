local tab = {
    ["Diogo"] = "Andrade",
    ["Tico"] = "Wilson",
    ["Ricardo"] = "Campos",
    ["Jose"] = "Bezerra",
}

for k,v in pairs(tab) do
    print(string.format("%s - %s", k, v))
end

local vet = {1,2,3,5,8,13,21}

for i=1, #vet do
    io.write(string.format("%d ", vet[i]))
end

print("\n")

local mat = {
    {1,2,3,4,5},
    {10,11,12,13,14},
    {100,110,120,130,140},
}
for i=1, #mat do
    for j=1, #mat[i] do
        io.write(string.format("%d ", mat[i][j]))
    end
    print()
end