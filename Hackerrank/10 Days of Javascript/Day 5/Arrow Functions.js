
function modifyArray(nums) {
    var something = n => n = (n%2==0) ? n*2: n*3;
    var newArray = nums.map(something);
    return newArray;
}

