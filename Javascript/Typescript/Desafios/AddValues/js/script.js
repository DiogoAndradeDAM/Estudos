"use strict";
const nameHtml = document.querySelector("input#name");
const emailHtml = document.querySelector("input#email");
const agesHtml = document.querySelector("input.ages");
const btnSubmit = document.querySelector("buton#button-submit");
btnSubmit.addEventListener("click", () => {
    const uName = nameHtml.textContent;
    const uEmail = emailHtml.textContent;
    const uAge = agesHtml.textContent;
    console.log(uName, uEmail.replace, uAge);
});
