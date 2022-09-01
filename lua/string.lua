local str = "Hello World"

print(string.upper(str))
print(string.lower(str))
print(string.len(str))
print(string.byte(str, 1, #str))
print(string.sub(str, 7, #str))
print(string.match(str, "orl", 7))
print(string.reverse(str))
print(string.find(str, "o"))
print(string.find(str, "o", 7))
print(string.rep(str, 5, "-"))