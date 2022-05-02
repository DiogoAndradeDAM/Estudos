const name = document.querySelector("input#name-user");
let email = document.querySelector("input#email-user");
let age = document.querySelector("input#age-user");
let height = document.querySelector("input#height-user");
let btn = document.querySelector("input#button");
let space = document.querySelector("input#space");

btn.addEventListener("click", write(name, space));

function isNull(input){
    if(input.value.trim() == "" || input.value == null || input.value == undefined){
        alert(`${input.value} é nulo ou vazio`);
        return false;
    } else {
        return true;
    }
}

function write(input, space){
    space.appendChild(input.value);
}