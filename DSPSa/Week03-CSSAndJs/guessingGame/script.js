let randomNumber = Math.floor(Math.random()*1000)+1;
let attempts = 0;

const guess = document.getElementById("guess");
const submit = document.getElementById("submit");
const tips = document.getElementById("tips");
const userAttempts = document.getElementById("attempts");

submit.addEventListener("click", checkGuess);

function checkGuess(){
    const userValue = Number(guess.value);

    if (userValue === randomNumber){
        attempts++;
        userAttempts.innerHTML = "Congratulations, you've guessed it!" + 
        "You did it in " + attempts + " attempts!";
    }
    else if (userValue > randomNumber){
        attempts++;
        tips.innerHTML = "Your number " + userValue + " is too BIG!";
    }
    else if (userValue < randomNumber){
        attempts++;
        tips.innerHTML = "Your number " + userValue + " is too SMALL!";
    }

}