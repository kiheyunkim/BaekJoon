let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');
let a = parseInt(input[0]);
let b = parseInt(input[1]);

let temp = b;
while (temp != 0) {
    console.log(a * (temp % 10));
    temp = parseInt(temp / 10);
}
console.log(a * b);