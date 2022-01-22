var localData = localStorage.getItem("NoteData");
console.log(localData)
localStorage.setItem("NoteData", "12349")
var container2 = document.getElementsByClassName("container2")[0];
var container3 = document.getElementsByClassName("container3")[0];
var check_icon = document.getElementById("check_icon");
var x_icon = document.getElementById("x_icon");

var i = 1;
x_icon.addEventListener("click", function() {
    typeNote();
})
check_icon.addEventListener("click", function() {
    createNote();
})


function typeNote() {
    if (container3.style.display == "none") {
        container3.style.display = "block";
    } else {
        container3.style.display = "none";
    }
}

function createNote() {
    var notetext = document.getElementById("note_text").value;
    addNote(notetext);
}

function addNote(notetext) {

    if (notetext != "") {
        var div1 = document.createElement("div");
        var div2 = document.createElement("div");
        div2.classList.add("div2");
        var xbtn = document.createElement("button");
        div1.id = "d" + i.toString();
        xbtn.id = i;
        xbtn.classList.add("xbtn");
        // id="remove_icon" onclick="removeelem(this.id)"
        xbtn.innerHTML = ` <svg id=${i} xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-x-circle" viewBox="0 0 16 16">
        <path id=${i}  d="M8 15A7 7 0 1 1 8 1a7 7 0 0 1 0 14zm0 1A8 8 0 1 0 8 0a8 8 0 0 0 0 16z" />
        <path id=${i}
            d="M4.646 4.646a.5.5 0 0 1 .708 0L8 7.293l2.646-2.647a.5.5 0 0 1 .708.708L8.707 8l2.647 2.646a.5.5 0 0 1-.708.708L8 8.707l-2.646 2.647a.5.5 0 0 1-.708-.708L7.293 8 4.646 5.354a.5.5 0 0 1 0-.708z" />
    </svg>`;

        xbtn.addEventListener("click", (evt) => removeelem(evt.target.id));
        i++;
        var div2text = document.createElement("h1");
        div2text.innerHTML = notetext;
        div2.setAttribute("style", "width:250px;height:250px;padding:25px;margin-top:10px;overflow:hidden;box-shadow:0px 10px 24px 0px rgba(0,0,0,0.75)")
        div2text.setAttribute("style", "font-size:26px;");

        div1.style.margin = margin();
        div2.style.transform = rotate();
        div2.style.background = color();
        div2.appendChild(xbtn);
        div2.appendChild(div2text);
        div1.appendChild(div2);

        container2.insertAdjacentElement("beforeend", div1);
    }
    div1.addEventListener("mouseenter", function() {
        // console.log(div1.style);
        div1.style.transform = "scale(1.1)";
    })

    div1.addEventListener("mouseleave", function() {
        div1.style.transform = "scale(1)";
    })



    document.getElementById("note_text").value = "";
}

function margin() {
    var random_margin = ["-5px", "1px", "5px", "10px", "15px", "20px"];

    return random_margin[Math.floor(Math.random() * random_margin.length)];
}

function rotate() {
    var random_rotate = ["rotate(3deg)", "rotate(1deg)", "rotate(-1deg)", "rotate(-3deg)", "rotate(-5deg)", "rotate(10deg)", "rotate(-7deg)", ];

    return random_rotate[Math.floor(Math.random() * random_rotate.length)];
}

function color() {
    var random_color = ["#c2ff3d", "#ff3de8", "#3dc2ff", "#04e022", "#bc83e6", "#ebb328"];

    return random_color[i % 6];
}

function removeelem(elemid) {
    const snote = document.getElementById("d" + elemid);
    // console.log(snote)
    var arr = container2.childNodes;
    // console.group(arr)
    container2.removeChild(snote);
}