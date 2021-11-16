let b = [1,2,3,6,9,8,7,4];  
function rotate(){
  b.unshift(b.pop());
  let arr = [1,2,3,6,9,8,7,4];
  for(let i = 0; i < arr.length; i++){
      let btn = document.getElementById('btn' + arr[i]);
      btn.innerHTML = b[i];
  }
}