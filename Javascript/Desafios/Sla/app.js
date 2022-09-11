/*
const elementBtnWrite = document.querySelector("#formBtnSubmit");
const elementFieldOrigin = document.querySelector("#formText");
const elementFieldDestiny = document.querySelector("#containerText");

elementBtnWrite.addEventListener("click", () => {
    console.log("fuufando")
    elementFieldDestiny.textContent = elementFieldOrigin.value
    console.log(elementFieldDestiny.textContent)
});
*/

class SubmitText
{
    constructor(origin, destiny, btnSubmit, indentationLevel){
        this.elementOrigin = document.querySelector(origin);
        this.elementDestiny = document.querySelector(destiny);
        this.elementBtnSubmit = document.querySelector(btnSubmit);
        this.elementIndentation = document.querySelector(indentationLevel);

        this.textOrigin = this.elementOrigin.value;

        this.writeText = this.writeText.bind(this);
    }

    addIndentation(){
        let text = document.createElement("p");
        text.textContent = this.elementOrigin.value;
        text.style.marginLeft = `${this.elementIndentation.value*2}rem`;
    }

    writeText(){
        this.elementDestiny.textContent = this.elementOrigin.value;
    }

    addClickEvent(){
        this.elementBtnSubmit.addEventListener("click", this.writeText)
    }

    init(){
        this.addClickEvent();
    }
}

const manipulateText = new SubmitText("#formText","#containerText","#formBtnSubmit", "#selectLevelText");
manipulateText.init();