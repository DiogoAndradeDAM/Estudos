function Pet(name)
    return {
        name = name or "nonamed",
        happiness = false,

        say = function()
            return "What's I should say? I am nothing"
        end,
        feed = function(self)
            self.happiness = true
        end,
        isHappy = function(self)
            return self.happiness and "happy" or "sad"
        end
    }
end

function Dog(name, breed)
    local dog = Pet(name)
    dog.breed = breed or "vira-lata"

    dog.say = function()
        return "bark!"
    end

    dog.isLoyal = function(self)
        return self.happiness and "loyal" or "abandoned"
    end 

    return dog
end

local dongo = Dog("Dongo", "Goldretriever")

print(dongo.name)
print(dongo:isHappy())
print(dongo:isLoyal())
dongo:feed()
print(dongo:isHappy())
print(dongo:isLoyal())
print(dongo.say())
