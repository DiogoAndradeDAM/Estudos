const rmv = document.querySelector("#remove")
const sbmt = document.querySelector("#submit")
const table = document.querySelector("#table")

sbmt.addEventListener("click", () => {
    const uName = document.querySelector("#name")
    const uAge = document.querySelector("#age")

    let linha = document.createElement("tr")
    let cellName = document.createElement("td")
    let cellAge = document.createElement("td")

    cellName.classList.add("cell")
    cellAge.classList.add("cell")

    cellName = uName.value
    cellAge = uAge.value

    linha.appendChild(cellName)
    linha.appendChild(cellAge)

    table.appendChild(linha)

})