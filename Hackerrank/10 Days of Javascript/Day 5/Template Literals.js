/*
 https://www.hackerrank.com/challenges/js10-template-literals/problem
 */
function sides(literals, ...expressions) {
        var a=expressions[0];
    var p=expressions[1];
    var s1=(p+Math.sqrt(p*p-16*a))/4;
    var s2=(p-Math.sqrt(p*p-16*a))/4;
    var ar=[s1,s2];
    return ar.sort();
}

