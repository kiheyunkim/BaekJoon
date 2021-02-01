let fs = require('fs');
let inputs = fs.readFileSync('/dev/stdin').toString();

let n = Number(inputs);
let counter = [];
for (let i = 0; i < n + 1; ++i) {
    counter.push(0);
}

for (let i = 1; i < n + 1; ++i) {
    if (i < 100) {
        counter[i] = counter[i - 1] + 1
    } else {
        let numberStr = String(i);
        let numberStrLen = numberStr.length;
        let diff = numberStr[1].charCodeAt(0) - numberStr[0].charCodeAt(0);
        let isOk = true;
        for (let j = 1; j < numberStrLen; ++j) {
            if (numberStr[j].charCodeAt(0) - numberStr[j - 1].charCodeAt(0) !== diff) {
                isOk = false;
                break;
            }
        }

        counter[i] = isOk ? counter[i - 1] + 1 : counter[i - 1];
    }
}

console.log(counter[n]);