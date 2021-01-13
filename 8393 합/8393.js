let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString();

let n = parseInt(input);
console.log(n * (n + 1) / 2);