let content = [1,2,3,4,5,6]

while(content.every((value) => value%2 === 0))
{
	content.slice(content.findIndex(content.find((value) => value%2 == 0)))
	console.log(content)
}

console.log(3%2 === 0)
