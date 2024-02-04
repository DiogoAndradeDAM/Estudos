let content = [1,2,3,4,5,6]
while content.find((value) => value%2 == 0)
{
	content.remove(content.findIndex(content.find(value) => value%2 == 0))
}

console.log(content)
