class registre{
    constructor(nameUserId, emailUserId, passwordUserId, buttonId){
        this.name = document.getElementById(nameUserId).value.trim();
        this.email = document.getElementById(emailUserId).value.trim();
        this.passwordUser = document.getElementById(passwordUserId).value.trim();
        this.button = document.getElementById(buttonId).value.trim();
        this.handleClicker.bind();
    }

    valueNull(value){
        if(value.value == ""){
            return false;
        } else {
            return true;
        }
    }

    register(){
        this.init();
    }

    handleClicker(){
        this.button.addEventListener("click", this.register);
    }

    init(){
        console.log("Hey");
    }
}