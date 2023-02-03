io.write("math.random() : ", math.random(), "\n")
io.write("math.random(10): ", math.random(10), "\n")
io.write("math.random(100): ", math.random(100), "\n")

math.randomseed(os.time())

print(string.format("Pi = %.10f", math.pi))

