function helloWorld(){
    //document.getElementById("hello").innerHTML = "Hello World";

    var b = document.getElementById("hello").innerHTML === "This is a test"; //b at start is true
    if (b){ // if b == true
        document.getElementById("hello").innerHTML = "Hello World";
    }
    else{
        document.getElementById("hello").innerHTML = "This is a test";
    }
}
//checks the class of body tag and changes it if need be
function darkMode(){
    document.body.classList.toggle("dark-mode"); 
}

function saveAndPrint(){
    var name = document.getElementById("name").value;
    var pw = document.getElementById("pw").value;

    document.getElementById("output").innerHTML = "Name: " + name + " Password: " + pw;
}

function colorInvert(){
    document.getElementById("shrek").style.filter = "invert(1)";
}

function colorNormal(){
    document.getElementById("shrek").style.filter = "invert(0)";
}

function forLoop(){
    var sum = 0;
    var input = document.getElementById("input").value;

    for (i = 0; i < input; i++){
        sum += i;
    }

    document.getElementById("sum").innerHTML = sum;
}

function date(){
    var date = new Date();
    var today = date.getUTCDate() + "/" + (date.getMonth()+1) + "/" + date.getFullYear();

    document.getElementById("today").innerHTML = today;
}

function picture(){
    var time = (new Date()).getSeconds();
    if (time < 15){
        document.getElementById("picture").src = "fall.jpg";
    }
    else if (time >= 15 && time < 30){
        document.getElementById("picture").src = "santa.jpg";
    }
    else if (time >= 30 && time < 45){
        document.getElementById("picture").src = "spring.jpg";
    }
    else{
        document.getElementById("picture").src = "summer.jpg";        
    }
}