//https://www.hackerrank.com/challenges/js10-loops/problem

function vowelsAndConsonants(s) {
    let vowels = ['a','e','i','o','u'];
    for (let v of s)
    {
        if(vowels.includes(v))
          console.log(v);
    }
       for (let v of s)
    {
        if(!vowels.includes(v))
            console.log(v);
    }
}
