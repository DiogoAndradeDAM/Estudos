#operadores
# <> Concatenação de strings
# not, and e or são operadores booleanos(só podem ser usados por valores booleanos e atoms)
# !, && e || são operadores booleanos(podem ser usados por qualquer tipos)(false && nil -> true)
# == e === (como no javascript)

#div e rem são respectivamente / e %(nao existe), mas as funções retornam int, / e % retornam sempre float

IO.puts div 10,3
IO.puts 10/3

IO.puts rem 10,3
IO.puts("\n\n")

#Atoms
IO.puts is_atom(:diogo)
IO.puts is_atom(false)
IO.puts is_atom(nil)
IO.puts is_atom("Diogo")
IO.puts :diogo == :diogo
IO.puts :diogo == :andrade
IO.puts :diogo == "diogo"

IO.puts("\n\n")
#strings

str = "Diogo"

IO.puts byte_size(str)
IO.puts is_binary str
IO.puts String.length str
IO.puts String.upcase str
IO.puts String.downcase str

#anonymous function

add = fn x,y -> x+y end

IO.puts add.(10, 5)

IO.puts is_function(add)
IO.puts is_function(add, 2) #O segundo argumento avalia a quantiade de argumentos

IO.puts (fn -> 10 end).()

IO.puts("\n\n")

#linked list

arr = [1,2,3, true, 0]
# IO.puts arr
# IO.puts length arr
# arr ++ [false, true]
# IO.puts arr
# arr -- [true, false]
# IO.puts arr

IO.puts hd(arr)
#IO.puts lt(arr)

IO.puts [95, 96, 97, 98, 99, 100]

#IO.puts i ~c"hello"

IO.puts 'Diogo' == "Diogo"
IO.puts 'Diogo' == ~c"Diogo"

IO.puts("\n\n")

#Tuples
tuple = {:ok, "hello"}
IO.puts elem tuple,1
#IO.puts tuple_size tuple
#IO.puts put_elem tuple,1,"diogo"
#IO.puts put_elem tuple,2,"diogo"
