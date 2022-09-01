local function bubbleSort(vet)
    local aux
    for i=1, #vet do
        for j=1, #vet -i do
            if vet[j] > vet[j+1] then
                aux = vet[j+1]
                vet[j+1] = vet[j]
                vet[j] = aux
            end
        end
    end
end

local function quickSort(vet)
    if #vet == 1 then
        return vet
    else
        local smaller, bigger, equals = {}, {}, {}

        for i=1, #vet do
            if vet[i] > vet[1] then
                bigger[i] = vet[i]
            elseif vet[i] < vet[1] then
                smaller[i] = vet[i]
            else
                equals[1] = vet[i]
            end
        end

        
    end
end

vetor = {2, 1, 4, 3, 10, 7}
bubbleSort(vetor)

for c=1, #vetor do
    io.write(string.format("%d ", vetor[c]))
end