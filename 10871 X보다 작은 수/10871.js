let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');
let inputLine = input[0].split(' ');

let n = parseInt(inputLine[0]);
let x = parseInt(inputLine[1]);

let inputs = input[1].split(' ');
let answer = '';
for (let i = 0; i < n; ++i) {
    if (inputs[i] < x) {
        answer += (inputs[i] + ' ');
    }
}

console.log(answer);