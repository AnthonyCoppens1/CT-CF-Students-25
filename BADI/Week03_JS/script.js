function helloWorld(){
    //document.getElementById("hallo").innerHTML = "Hello World!";
    //in principe controleren we hier of de inhoud van de p tag met id "hallo" de exacte tekst bevat en het 
    // correcte datatype. Indien dit het geval is, wordt true opgeslagen onder b, want var b is hier een boolean
    
    //innerHTML zoekt naar de zichtbare tekst op een pagina --> tekst tussen open en close tag <p>DEZE TEKST</p>

    // == --> enkel zoeken naar exacte inhoude / === --> zoeken naar exacte inhoud en datatype / = --> waarde koppelen aan iets


    var b = document.getElementById("hallo").innerHTML === "Dit is wat tekst!";
    if (b){
        document.getElementById("hallo").innerHTML = "Hello World!";
    }
    else{
        document.getElementById("hallo").innerHTML = "Dit is wat tekst!";
        
    }

}


function darkLight(){
    var element = document.body;
    element.classList.toggle("dark-mode"); //toggle de stijl aan en uit die je wil.
}


function inhoudOpslaanEnPrinten(){
    var naam = document.getElementById("naam").value;
    var wachtwoord = document.getElementById("pwoord").value;

    document.getElementById("output").innerHTML = "Naam: " + naam + "Wachtwoord: " + wachtwoord;
}

function invertKleur(){
    document.getElementById("plop").style.filter = "invert(1)";
}

function normaalKleur(){
    document.getElementById("plop").style.filter = "invert(0)";
}

function forLoop(){
    var som = 0;
    var input = document.getElementById("input").value;

    for (i = 0; i < input; i++){
        som += i;
    }

    document.getElementById("outputSom").innerHTML = som;
}

function datum(){
    // Date datum = new Date(); --> var is universeel, hier wordt een object van de klasse Date aangemaakt
    
    var datum = new Date();
    var vandaag = datum.getUTCDate() + "/" + (datum.getMonth()+1) + "/" + datum.getFullYear();

    document.getElementById("datum").innerHTML = vandaag;
}


function BerichtVanDeDag(){
    var tijd = (new Date().getHours());
    var groet = "";

    if (tijd <= 10 && tijd >= 8){
        groet = "Goeiemorgen";
    }
    else if (tijd > 10 && tijd < 18){
        groet = "Duidelijk goed gestart aan de dag! blijven volhouden";
    }
    else if (tijd >= 18 && tijd <= 23){
        groet = "Geniet van je avond!";
    }
    else{
        groet = "Misschien wordt het tijd om eens te gaan slapen!";
    }

    document.getElementById("bericht").innerHTML = groet;
}
