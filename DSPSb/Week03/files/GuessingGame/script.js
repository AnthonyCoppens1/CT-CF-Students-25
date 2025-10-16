let randomNum = Math.round(Math.random()*1000) + 1;
let attempts = 0;

const guess = document.getElementById("guess"); 
const submit = document.getElementById("submit");
const hint = document.getElementById("hint");
const attempt = document.getElementById("attempt");

submit.addEventListener("click", checkGuess);

function checkGuess(){
    const userValue = Number(guess.value);
    attempts += 1;

    if (userValue === randomNum){
        hint.textContent = "Congratulations, you guessed it";
        attempt.textContent = `You guessed it in ${attempts} guesses`;
    }
    else if (userValue > randomNum){
        hint.textContent = "Your guess " + userValue + " was too high, try again!";
    }
    else{
        hint.textContent = `Your guess ${userValue} was too low, try again!`;
    }
    

}
