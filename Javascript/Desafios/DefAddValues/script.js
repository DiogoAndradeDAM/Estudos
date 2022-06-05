const rmv = document.querySelector("#remove")
const sbmt = document.querySelector("#submit")
const items = document.querySelector(".items")
const uName = document.querySelector("#name")
const uOcupation = document.querySelector("#ocupation")
const uAge = document.querySelector("#age")


sbmt.addEventListener("click", (event) => {
    event.preventDefault()
    
    let uNameValue = uName.value
    let uOcupationValue = uOcupation.value
    let uAgeValue = uAge.value

    if(isEmpty(uNameValue) || isEmpty(uOcupationValue)){
        window.alert("Um dos espaços está vazio ou nulo");
    } else if(isNan(uAgeValue)){
        window.alert("Idade está vazia ou não é um número")
    } else {
        let li = document.createElement("li")
        li.innerHTML = `<p>${uNameValue}</p> <p>${uOcupationValue}</p> <p>${uAgeValue}</p>`
        li.classList.add("item")
        var rmv2 = document.createElement("input")
        rmv2.type = "button"
        rmv2.value = "X"
        rmv2.addEventListener("click", () => {
            rmv2.parentElement.remove()
        })
        li.appendChild(rmv2)
        items.appendChild(li)

    }
})

rmv.addEventListener("click", () => {
    if(items.lastElementChild !== items.children[0])
        items.lastElementChild.remove()
})



function isEmpty(element){
    if(element === "" || element === null){
        return true
    } else {
        return false
    }
}

function isNan(element){
    if(isEmpty(element) || element === NaN){
        return true
    } else 
        return false
}