function helloWorld(){
    //document.getElementById("hello").innerHTML = "Hello World!";
    var b = document.getElementById("hello").innerHTML === "This is a test";

    if (b){
        document.getElementById("hello").innerHTML = "Hello World!";
    }
    else{
        document.getElementById("hello").innerHTML = "This is a test";
    }
}


function darklight(){
    var element = document.body;
    element.classList.toggle("dark-mode");
}

function saveInputPrintOutput(){
    var name = document.getElementById("name").value;
    var password = document.getElementById("pword").value;

    document.getElementById("output").innerHTML = "Name: " + name + "Password: " + password;
}


function colorInvert(){
    document.getElementById("porygon").style.filter = "invert(1)";
}

function colorNormal(){
    document.getElementById("porygon").style.filter = "invert(0)";
}

function forLoop(){
    var sum = 0;
    var input = document.getElementById("input").value;
    for (i = 0; i < input; i++){
        sum += i;
    }

    document.getElementById("outputSum").innerHTML = sum;
}


function messageDay(){
    var time = (new Date()).getHours();
    var greeting = "";

    if (time < 10){
        greeting = "Good Morning";
    }
    else if (time >= 10 && time <= 14){
        greeting = "Good day";
    }
    else if (time >= 15 && time <= 18){
        greeting = "Good afternoon";
    }
    else{
        greeting = "Good evening";
    }

    document.getElementById("message").innerHTML = greeting;
}

function date(){
    var date = new Date();
    document.getElementById("today").innerHTML = date;
    var today = date.getUTCDate() + " / " + (date.getMonth()+1) + " / " + date.getFullYear();
    document.getElementById("today").innerHTML = today;
}