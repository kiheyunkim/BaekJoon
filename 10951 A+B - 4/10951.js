let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let inputCount = input.length;
for (let i = 0; i < inputCount - 1; ++i) {
    let inputs = input[i].split(' ');
    let a = parseInt(inputs[0]);
    let b = parseInt(inputs[1]);

    console.log(a + b);
}