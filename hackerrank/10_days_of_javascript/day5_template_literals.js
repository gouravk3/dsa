/*
 * Determine the original side lengths and return an array:
 * - The first element is the length of the shorter side
 * - The second element is the length of the longer side
 * 
 * Parameter(s):
 * literals: The tagged template literal's array of strings.
 * expressions: The tagged template literal's array of expression values (i.e., [area, perimeter]).
 */
function sides(literals, ...expressions) {
    let A = expressions[0], P = expressions[1];
    let s1 = (P-Math.sqrt(P*P-16*A))/4;
    let s2 = (P+Math.sqrt(P*P-16*A))/4;
    [s1, s2] = [s1, s2].sort();
    let s = [s1, s2];
    return s;
}