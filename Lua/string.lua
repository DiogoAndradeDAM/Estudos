local name = "Diogo"

io.write(string.format("%s\n", name))
io.write(string.len(name).."\n")
io.write(string.gsub(name,"Diogo", "Andrade").."\n")
io.write(string.lower(name).."\n")
io.write(string.upper(name).."\n")
io.write(string.find(name, "ogo").."\n")
