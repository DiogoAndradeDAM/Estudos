name = "Diogo Andrade de Moura"

puts name.count("aeiou")
puts name.count("^aeiou")
puts name.rjust(30, "-")
puts name.ljust(30, "-")
puts name.center(30, "-")

puts name.downcase
puts name.upcase
puts name.swapcase
puts name.capitalize

puts name.rstrip
puts name.lstrip
puts name.strip

puts name.include? "Dio"
puts name.index "Andrade"
puts name.start_with? "Dio"
puts name.size

puts name.delete("o")
puts name.chop
puts name.chomp("oura")

arr = name.split(/ /)

arr.each do |word| 
    puts word
end