function Book(name, author, type) {
    this.name = name;
    this.author = author;
    this.type = type;

}

function Display() {

}

Display.prototype.add = function(book) {

    tablebody = document.getElementById("tablebody")
    let uistring = `<tr>
    <td>${book.name}</td>
    <td>${book.author}</td>
    <td>${book.type}</td>
</tr>`
    tablebody.innerHTML += uistring;
}

Display.prototype.clear = function() {
    let library_form = document.getElementById("library_form");
    library_form.reset();
}

Display.prototype.validate = function(book) {
    if (book.name.length < 2 || book.author.length < 2)
        return false;
    else
        return true;

}

Display.prototype.show = function(type, displaymessage) {
    let message = document.getElementById("message");
    message.innerHTML = `<div class="alert alert-${type} alert-dismissible fade show" role="alert">
    <strong>Message:</strong>${displaymessage}
    <button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button>
  </div>`
    setTimeout(() => {
        message.innerHTML = "";
    }, 4000);
}
let library_form = document.getElementById('library_form');
library_form.addEventListener('submit', library_form_submit);

function library_form_submit(e) {
    console.log("Submitted");
    let name = document.getElementById("bookname").value;
    let author = document.getElementById("author").value;
    let type;

    let fiction = document.getElementById("fiction");
    let programming = document.getElementById("programming");
    let other = document.getElementById("other");
    if (fiction.checked) {
        type = fiction.value;
    } else if (programming.checked) {
        type = programming.value;
    } else if (other.checked) {
        type = other.value;
    }
    let book = new Book(name, author, type);
    console.log(book);

    let display = new Display();

    if (display.validate(book)) {
        display.add(book);
        display.clear();
        display.show("success", ' Book Added');
    } else {
        display.show("danger", ' Cannot add the book');
    }
    e.preventDefault();

}