let fs = require('fs');
let inputs = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = parseInt(inputs[0]);
for (let i = 1; i <= n; ++i) {
    let inputsSplits = inputs[i].split(' ');
    let n = parseInt(inputsSplits[0]);
    let avg = 0;
    for (let j = 1; j <= n; ++j) {
        avg += parseInt(inputsSplits[j]);
    }

    avg /= n;

    let count = 0
    for (let j = 1; j <= n; ++j) {
        if (avg < inputsSplits[j]) {
            ++count;
        }
    }

    console.log((count / n * 100).toFixed(3) + "%");
}