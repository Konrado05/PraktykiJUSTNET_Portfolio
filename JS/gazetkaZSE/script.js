//funkcje
function themeChange(){
    motywSwitch.classList.toggle("brightTheme")
    body.classList.toggle("brightTheme")
    main.classList.toggle("brightTheme")

    //"sesja"
    if (localStorage.getItem("theme") == "dark") {
        localStorage.setItem("theme", "light")
        console.log("jasno")
    } else if (localStorage.getItem("theme") == "light") {
        localStorage.setItem("theme", "dark")
        console.log("ciemno")
    } else {
        localStorage.setItem("theme", "dark")
    }
}


//obiekty
let motywRamka = document.getElementById("motywRamka")
let motywSwitch = document.getElementById("motywSwitch")
let body = document.getElementById("body")
let main = document.getElementById("main")


//nasłuchiwacze
motywRamka.addEventListener("click", themeChange)


//ciągłość "sesji"
if (localStorage.getItem("theme") == "dark" && motywSwitch.getAttribute("class") != "brightTheme") {
    motywSwitch.setAttribute("transition", "0")
    body.setAttribute("transition", "0")
    main.setAttribute("transition", "0")

    motywSwitch.classList.add("brightTheme")
    body.classList.add("brightTheme")
    main.classList.add("brightTheme")

    motywSwitch.removeAttribute("transition")
    body.removeAttribute("transition")
    main.removeAttribute("transition")
    
}