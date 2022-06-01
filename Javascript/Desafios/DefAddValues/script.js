const rmv = document.querySelector("#remove")
const sbmt = document.querySelector("#submit")
const items = document.querySelector(".items")
const uName = document.querySelector("#name")
const uAge = document.querySelector("#age")

sbmt.addEventListener("click", (event) => {
    event.preventDefault()

    let uNameValue = uName.value
    let uAgeValue = uAge.value
    if(!isEmpty(uNameValue)){
        var li = document.createElement("li")
        li.innerHTML = `<p><strong>${uNameValue}</strong></p>`

    } else {
        window.alert("Invalid Name")
        return
    }

    if(!isEmpty(uNameValue) || !isANan(Number(uAgeValue))){
        li.innerHTML += `<p><strong>${uAgeValue}</strong></p>`
        items.appendChild(li)
    } else {
        window.alert("Invalid age")
        return
    }

    uName.value = ''
    uAge.value = ''

})

function isEmpty(element){
    return (element === "" || element === " ") ? true : false
}

function isANan(element){
    return (element === NaN) ? true : false
}