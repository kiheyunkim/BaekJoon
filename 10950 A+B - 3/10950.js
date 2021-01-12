let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let testCase = parseInt(input[0]);
for (let i = 0; i < testCase; ++i) {
    let inputSplits = input[i+1].split(' ');
    console.log(parseInt(inputSplits[0]) + parseInt(inputSplits[1]))
}