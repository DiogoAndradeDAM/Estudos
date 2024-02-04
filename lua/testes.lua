local Person = {}
Person.__index = Person

function Person.new(params)
    local o = setmetatable({}, Person)
    o.name = params.name
    o.age = params.age
    return o
end

function Person:print()
    print(string.format("My name is %s and I have %d years old", self.name, self.age))
end


local Student = {}
Student.__index = Student
setmetatable(Student, Person)

function Student.new(params)
    local o = setmetatable({}, Student)
    o.name = params.name
    o.age = params.age
    o.room = params.room
    return o
end

function Student:print()
    print(string.format("My name is %s I have %d years old and I'm from %d room", self.name, self.age, self.room))
end

local TeamLeader = {}
TeamLeader.__index = TeamLeader
setmetatable(TeamLeader, Student)

function TeamLeader.new(params)
    local o = setmetatable({}, TeamLeader)
    o.name = params.name
    o.age = params.age
    o.room = params.room
    o.teamJob = params.teamJob
    return o
end

function TeamLeader.print()
    print("Hi! I'm Milena I'm a fire in team leader of my school!")
end

local milena = TeamLeader.new({name = "Milena", age = 19, room = 5, teamJob = "Fire"})
-- milena:print()
-- print(getmetatable(milena) == Student)

local diogo = Student.new({name = "Diogo", age = 18, room = 15})
-- print(getmetatable(diogo) == Student)
-- diogo:print()