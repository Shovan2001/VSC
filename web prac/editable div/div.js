console.log("weep");
//creating the div
let divelem = document.createElement('div');
//getting if anything is present already in the local storage
let val = localStorage.getItem('text');
let text;
if (val == null) {
    text = document.createTextNode("this is the element click to append"); //if nothing is in local storage print this
} else {
    text = document.createTextNode(val); //else adding the entered text into the local storage
}
divelem.appendChild(text); //writing the text
divelem.setAttribute('id', 'elem'); //giving it some style and attributes
divelem.setAttribute('style', 'border:2px solid black');
let container = document.querySelector('.container'); //grabbing the container class
let first = document.getElementById('myfirst'); //grabbing the div with id=myfirst 

container.insertBefore(divelem, first); //inserting before the div container whose id is my first

//onclick
divelem.addEventListener('click', function() {
    let nooftext = document.getElementsByClassName("textarea").length;
    if (nooftext == 0) {
        html = elem.innerHTML;
        divelem.innerHTML = `<textarea class="textarea" id="textarea" rows="3">${html}</textarea>`;
    }
    let textarea = document.getElementById('textarea');
    textarea.addEventListener('blur', function() {
        elem.innerHTML = textarea.value;
        localStorage.setItem('text', textarea.value);
    })
})