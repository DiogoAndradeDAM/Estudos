function openMenu()
{
    const principalMenu = document.getElementById("principal-menu");
    const mainMenu = document.getElementById("main-menu");
    mainMenu.classList.toggle("menu-active");

    principalMenu.forEach((values, index) => {
        mainMenu.append(values);
    });
}