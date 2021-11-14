//https://www.hackerrank.com/challenges/js10-count-objects/problem


function getCount(objects) {
    let n = 0;
    for(let o of objects) {
        n += (o.x == o.y);
    }
    return n;
}
