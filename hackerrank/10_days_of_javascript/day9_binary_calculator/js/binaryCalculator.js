const res = document.getElementById('res');
function click01(e){
    res.innerHTML = res.innerHTML + this.innerHTML;
}
const btn1 = document.getElementById('btn1');
const btn0 = document.getElementById('btn0');
const operands = document.getElementsByClassName('operand');
btn1.addEventListener('click', click01);
btn0.addEventListener('click', click01);
for(var i = 0; i < operands.length; i++){
    operands[i].addEventListener('click', operation);
}
var operand;
function operation(){
    operand = this.innerHTML;
    res.innerHTML = res.innerHTML + this.innerHTML;
}

function clearScreen(){
    res.innerHTML = "";
}

function equal(){
    var str = res.innerHTML.split(operand);
    var num1 = parseInt(str[0], 2);
    var num2 = parseInt(str[1], 2);
    var result;
    if(operand == '+'){
        result = num1 + num2;
    }
    else if(operand == '-'){
        result = num1 - num2;
    }
    else if(operand == '*'){
        result = num1 * num2;
    }
    else if(operand == '/'){
        result = num1 / num2;
    }
    res.innerHTML = result.toString(2);
}
