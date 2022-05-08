const navList = document.querySelector("a#button");
const contentMenu = document.querySelector("div#content-menu");

navList.addEventListener("click", () => {
    if(contentMenu.style.display == "none"){
        contentMenu.style.display = "flex";
    } else {
        contentMenu.style.display = "none";
    }
});