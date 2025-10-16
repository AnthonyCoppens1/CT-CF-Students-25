let randomGetal = Math.floor(Math.random()*1000000)+1;
let gokjes = 0;

const gok = document.getElementById("gok");
const submit = document.getElementById("submit");
const tip = document.getElementById("tips");
const beurten = document.getElementById("beurten");

submit.addEventListener("click", checkGok);

function checkGok(){
    const gokGetal = Number(gok.value);
    gokjes;
    if (gokGetal == randomGetal){
        gokjes++;
        tip.textContent = "Gefeliciteerd, je hebt het geraden!";
        beurten.textContent = "Je hebt het geraden in " + beurten + " beurten";
    }
    else if (gokGetal > randomGetal){
        gokjes++;
        tip.textContent = "Je gok: " + gokGetal + " was te hoog, probeer lager te gokken.";
    }
    else{
        gokjes++;
        tip.textContent = "Je gok: " + gokGetal + " was te laag, probeer hoger te gokken.";
    }
}
