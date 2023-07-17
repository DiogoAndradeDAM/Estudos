# case 10 do
#    1 -> IO.puts "1"
#   _ -> IO.puts "none"
# end

# case {1, 2, 3} do
  # {1,x,3} when x > 0 -> IO.puts "Values correct"
  # _ -> IO.puts "Error"
# end


f = fn
  x, y when x > 0 -> x + y
  x, y -> x * y
end
IO.puts f.(2,3)
IO.puts f.(-2,3)

#Throw a error
# f2 = fn
#   x, y when x > 0 -> x + y
#   x, y, z -> x * y * z
# end

cond do
  2 + 2 == 5 -> IO.puts "2+2=5"
  2 * 2 * 2 == 5 -> IO.puts "2x2x2=5"
  2 + 3 == 5 -> IO.puts "2+3=5"
end

if true do
  IO.puts "This need true"
end

unless false do
  IO.puts "This need false"
end
