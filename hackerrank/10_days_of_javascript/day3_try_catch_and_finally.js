/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    try{
        let arr = s.split('');
        arr = arr.reverse();
        s = arr.join('');
    }
    catch(error){
        console.log(error.message);
    }
    finally{
        console.log(s);
    }
}