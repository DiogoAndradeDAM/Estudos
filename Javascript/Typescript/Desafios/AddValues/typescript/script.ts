const nameHtml = document.querySelector("input#name") as HTMLElement;
const emailHtml = document.querySelector("input#email") as HTMLElement;
const agesHtml = document.querySelector("input.ages") as HTMLElement;
const btnSubmit = document.querySelector("buton#button-submit") as HTMLElement;

btnSubmit.addEventListener("click", () => {
    const uName = nameHtml.textContent as string;
    const uEmail = emailHtml.textContent as string;
    const uAge = agesHtml.textContent;

    console.log(uName, uEmail.replace, uAge)
})