const btn1 = document.querySelector("button#btn1");
const btn2 = document.querySelector("button#btn2");

btn1.addEventListener("click", () =>{
    const conteudo = document.getElementById("content1");
    conteudo.classList.toggle("section-disable");
})

btn2.addEventListener("click", () =>{
    const conteudo = document.getElementById("content2");
    conteudo.classList.toggle("section-disable");
})