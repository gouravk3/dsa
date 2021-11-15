let count = 0;
function send(){
    count++;
    let btn = document.getElementById('btn');
    btn.innerHTML = count;
}