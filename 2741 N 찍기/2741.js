let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString();
let n = parseInt(input);

let result = '';
for (let i = 1; i <= n; ++i) {
    result = result + i + '\n';
}

console.log(result);