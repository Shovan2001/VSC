showNotes()

//if user adds a note add it to the local storage
let button = document.getElementById('button');
button.addEventListener('click', function(e) {
    let addtext = document.getElementById('addtext');
    let title = document.getElementById('title');

    let notes = localStorage.getItem("notes");

    if (notes == null)
        notesObj = [];
    else {
        // console.log(notes[0].title);
        notesObj = JSON.parse(notes);
        // console.log(notesObj[0].title);
    }
    let myobj = {
        title: title.value,
        text: addtext.value

    }
    notesObj.push(myobj);
    localStorage.setItem("notes", JSON.stringify(notesObj));
    addtext.value = " ";
    title.value = " ";
    // console.log(notesObj);
    showNotes();
})

function showNotes() {
    let notes = localStorage.getItem("notes");
    if (notes == null)
        notesObj = [];
    else
        notesObj = JSON.parse(notes);

    let html = "";
    notesObj.forEach((element, index) => {
        html = html + `<div class="notes my-2 mx-2 card" style="width: 18rem;">
        <div class="card-body">
            <h5 class="card-title"> ${element.title}</h5>
            <p class="card-text"> ${element.text}</p>
            <button id="${index}" onclick="deleteNotes(this.id)" class="btn btn-warning">Delete Note</button>
        </div>
    
        </div>`;

    });
    let noteselement = document.getElementById('notes');
    if (notesObj.length != 0) {
        noteselement.innerHTML = html;

    } else {
        noteselement.innerHTML = `Nothing to display.Create a note first.`
    }

}

function deleteNotes(index) {
    console.log("deleting");
    let notes = localStorage.getItem("notes");
    if (notes == null)
        notesObj = [];
    else
        notesObj = JSON.parse(notes);

    notesObj.splice(index, 1);

    localStorage.setItem("notes", JSON.stringify(notesObj));
    showNotes();


}

let search = document.getElementById('search');
search.addEventListener("input", function() {
    let inputVal = search.value.toLowerCase();
    console.log("fired");
    let noteCards = document.getElementsByClassName('notes');
    Array.from(noteCards).forEach(function(element) {
        let cardtext = element.getElementsByTagName("p")[0].innerText;
        if (cardtext.includes(inputVal))
            element.style.display = "block";
        else
            element.style.display = "none";

    })
})