let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString();

let n = parseInt(input);
let origin = n;
let answer = 0;
while (true) {
    n = ((n % 10) * 10) + ((parseInt(n / 10) + (n % 10)) % 10);
    ++answer;
    if (origin === n) {
        break;
    }
}

console.log(answer);