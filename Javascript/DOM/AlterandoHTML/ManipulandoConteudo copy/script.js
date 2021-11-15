const element = document.querySelector("body")

element.classList.add('active', 'green')
console.log(element.classList)
//element.classList.remove('active')
element.classList.toggle('active') // toggle desliga ou liga a classe dependeno do estado dela
