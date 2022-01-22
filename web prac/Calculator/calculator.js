let screen = document.getElementById("screen");
buttons = document.querySelectorAll('button');
let screenvalue = '';
for (item of buttons) {
    item.addEventListener('click', (e) => {
        button_text = e.target.innerText;
        console.log(button_text);
        if (button_text == 'X') {
            button_text = '*';
            screenvalue += button_text;
            screen.value = screenvalue;
        } else if (button_text == 'C') {
            screenvalue = "";
            screen.value = screenvalue;

        } else if (button_text == '=') {
            screen.value = eval(screenvalue);
        } else {
            screenvalue += button_text;
            screen.value = screenvalue;
        }

    })
}