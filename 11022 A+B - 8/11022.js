let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');
let testCount = parseInt(input[0]);

for (let i = 0; i < testCount; ++i) {
    let inputLine = input[i + 1].split(' ');
    let a = parseInt(inputLine[0]);
    let b = parseInt(inputLine[1]);

    console.log(`Case #${i+1}: ${a} + ${b} = ${a+b}`);
}