/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */

class Polygon {
    side
    constructor(len)
    {
        this.side = len;
    }
    perimeter(){
        let sum = 0;
        for(let i = 0; i < this.side.length; i++)
        {
            sum += this.side[i];
        }
        return sum;
    }
}