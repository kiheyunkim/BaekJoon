let fs = require('fs');
let inputs = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = parseInt(inputs[0]);
for (let i = 1; i <= n; ++i) {
    let dataStr = inputs[i];
    let dataStrLen = dataStr.length;
    let accum = 0;
    let answer = 0;
    for (let j = 0; j < dataStrLen; ++j) {
        if (dataStr[j] === 'O') {
            ++accum;
            answer += accum;
        }
        else {
            accum = 0;
        }
    }

    console.log(answer);
}