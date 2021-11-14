function getMaxLessThanK(n, k){
    let max = 0;
    for(let i = 1; i <= n; i++){
        for(let j = i+1; j <= n; j++){
            let temp = i&j;
            if(temp < k && temp > max) max = temp;
        }
    }
    return max;
}