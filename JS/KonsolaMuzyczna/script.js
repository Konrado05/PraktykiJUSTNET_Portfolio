//oddworzenie gaslamp.mp3
function gaslampPlayer(){
    if (GaslampID.classList.contains("played"))
    {
        GaslampID.classList.toggle("played")
        gaslamp.pause()
        gaslamp.currentTime = "0"
    }
    else
    {
        GaslampID.classList.toggle("played")
        gaslamp.play()
    }
}

//oddworzenie evanKing.mp3
function kingPlayer(){
    if (KingID.classList.contains("played"))
    {
        KingID.classList.toggle("played")
        king.pause()
        king.currentTime = "0"
    }
    else
    {
        KingID.classList.toggle("played")
        king.play()
    }
}

//oddworzenie piano.mp3
function pianoPlayer(){
    if (PianoID.classList.contains("played"))
    {
        PianoID.classList.toggle("played")
        piano.pause()
        piano.currentTime = "0"
    }
    else
    {
        PianoID.classList.toggle("played")
        piano.play()
    }
}

//oddworzenie journey.mp3
function journeyPlayer(){
    if (JourneyID.classList.contains("played"))
    {
        JourneyID.classList.toggle("played")
        journey.pause()
        journey.currentTime = "0"
    }
    else
    {
        JourneyID.classList.toggle("played")
        journey.play()
    }
}

//oddworzenie spice.mp3
function spicePlayer(){
    if (SpiceID.classList.contains("played"))
    {
        SpiceID.classList.toggle("played")
        spice.pause()
        spice.currentTime = "0"
    }
    else
    {
        SpiceID.classList.toggle("played")
        spice.play()
    }
}

//reset muzyki
function reset(){
    GaslampID.classList.remove("played")
    gaslamp.pause()
    gaslamp.currentTime = "0"
    KingID.classList.remove("played")
    king.pause()
    king.currentTime = "0"
    PianoID.classList.remove("played")
    piano.pause()
    piano.currentTime = "0"
    JourneyID.classList.remove("played")
    journey.pause()
    journey.currentTime = "0"
    SpiceID.classList.remove("played")
    spice.pause()
    spice.currentTime = "0"
}


//pies
function dog(){
    new Audio('sound/dog.mp3').play()
}

//kot
function cat(){
    new Audio('sound/cat.mp3').play()
}

//kura
function chicken(){
    new Audio('sound/chicken.mp3').play()
}

//krowa
function cow(){
    new Audio('sound/cow.mp3').play()
}

//kaczka
function duck(){
    new Audio('sound/duck.mp3').play()
}



//melodie
let gaslamp = new Audio('sound/Gaslamp.mp3')
let king = new Audio('sound/EvanKing.mp3')
let piano = new Audio('sound/Piano.mp3')
let journey = new Audio('sound/Journey.mp3')
let spice = new Audio('sound/Spice.mp3')

let GaslampID = document.getElementById("gaslamp")
let KingID = document.getElementById("king")
let PianoID = document.getElementById("piano")
let JourneyID = document.getElementById("journey")
let SpiceID = document.getElementById("spice")

GaslampID.addEventListener("click", gaslampPlayer)
KingID.addEventListener("click", kingPlayer)
PianoID.addEventListener("click", pianoPlayer)
JourneyID.addEventListener("click", journeyPlayer)
SpiceID.addEventListener("click", spicePlayer)
document.getElementById("reset").addEventListener("click", reset)

//zwierzęta
document.getElementById("dog").addEventListener("click", dog)
document.getElementById("cat").addEventListener("click", cat)
document.getElementById("chicken").addEventListener("click", chicken)
document.getElementById("cow").addEventListener("click", cow)
document.getElementById("duck").addEventListener("click", duck)