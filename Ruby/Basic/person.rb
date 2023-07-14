class Person

    attr_accessor :age
    def initialize(name, age, sex)
        @name = name
        @age = age
        @sex = sex
    end

    def print_person
        puts "(Name: #@name | Age: #@age | Sex: #@sex)"
    end
end

class Student < Person
    attr_accessor :name, :age, :sex, :room, :course

    def initialize(name, age, sex, room, course)
        @name = name
        @age = age
        @sex = sex
        @room = room
        @course = course
    end

    def print_student()
        puts "(Name: #@name | Age: #@age | Sex: #@sex | Room: #@room | Course: #@course)"
    end

    def return_student()
        return "(Name: #@name | Age: #@age | Sex: #@sex | Room: #@room | Course: #@course)"
    end
end

=begin
diogo = Person.new("Diogo", 17, 'm')
douglas = Person.new("Douglas", 25, 'm')
ziza = Person.new("Ziza", 52, 'f')

persons = [diogo, douglas, ziza]
=end

diogo_student = Student.new("Diogo", 17, 'm', 14, "Digital Games Development")
douglas_student = Student.new("Douglas", 25, 'm', 0, "Fisic Education")

diogo_student.print_student

file_students = File.open("file_students.txt", "r+")

file_students.write(douglas_student.return_student)

