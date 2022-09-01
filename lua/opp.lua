local function Human(_name)
    local name=_name or "none"

    return {
        getName = function ()
            return name
        end,

        setName = function (_newName)
            name=_newName
        end
    }
end

local diogo = Human("Diogo")
print(diogo.getName())

diogo.setName("Andrade")
print(diogo.getName())