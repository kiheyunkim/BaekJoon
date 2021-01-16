let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');
let testCount = parseInt(input[0]);

for (let i = 0; i < testCount; ++i) {
    let inputLine = input[i + 1].split(' ');
    console.log('Case #' + (i + 1) + ': ' + (parseInt(inputLine[0]) + parseInt(inputLine[1])))
}