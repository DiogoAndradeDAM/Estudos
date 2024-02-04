Person = {}
Person.__index = Person

function Person.new(params)
    local o = setmetatable({}, Person)
    o.name = params.name or "None"
    o.age = params.age or 0
    o.tall = params.tall or 0.0 
    o.male = params.male or true
    o.print_function = params.print_function or nil
    return o
end

function Person:print()
    self.print_function(self.name, self.age, self.tall, self.male)
end

local diogo = Person.new({
    name="Diogo", 
    age=18, 
    tall=1.70, 
    male=true, 
    print_function=function(name, age, tall, male) print(string.format("Name: %s\nAge: %d\nTall: %.2f", name, age, tall)) end}
)
diogo:print()
