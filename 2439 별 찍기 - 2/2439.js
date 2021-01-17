let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');
let n = parseInt(input[0]);

let answer = '';
for (let i = 1; i < n + 1; ++i) {
    for (let j = 0; j < n - i; ++j) {
        answer += ' ';
    }
    for (let j = 0; j < i; ++j) {
        answer += '*';
    }
    answer += '\n';
}

console.log(answer);