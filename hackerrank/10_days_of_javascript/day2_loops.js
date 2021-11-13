/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    const arr = ['a', 'e', 'i', 'o', 'u'];
    var cons = [];
    for(var i = 0; i < s.length; i++)
    {
        var temp = s.charAt(i).toLowerCase();
        if(arr.includes(temp))
        {
            console.log(s.charAt(i));
        }
        else
        {
            cons.push(s.charAt(i));
        }
    }
    for(var i = 0; i < cons.length; i++)
    {
        console.log(cons[i]);
    }
}