/*
.innerHTML (vulneravel a ataques de XSS)
.textContent (mais seguro)
*/

/*
const nameTag = document.createElement("h1");
nameTag.innerHTML = window.prompt("Enter your name");
document.body.append(nameTag);
*/

const myList = document.querySelector("body ul");
const listItem = document.createElement("li");
listItem.textContent = "mango";

//myList.append(listItem);//Adiciona no final
//myList.prepend(listItem);//Adiciona no começo

myList.insertBefore(listItem, myList.children[2]);
//myList.insertBefore(listItem, myList.getElementsByTagName("li")[2]);