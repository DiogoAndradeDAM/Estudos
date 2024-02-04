class Person
    def initialize(_name, _age, _tall)
        @name = _name
        @age = _age
        @tall = _tall
    end

    #Getters
    def get_name
        return @name
    end
    def get_age
        return @age
    end
    def get_tall
        return @tall
    end
    #Setters
    def name=(value)
        @name = value
    end
    def age=(value)
        @age = value
    end
    def tall=(value)
        @tall = value
    end

    #Methods
    def to_s
        return "(Name: #{@name}, Age: #{@age}, Tall: #{@tall})"
    end
end

diogo = Person.new("Diogo", 18, 1.70)
puts diogo.get_name
puts diogo.to_s