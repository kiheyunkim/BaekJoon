let fs = require('fs');
let inputs = fs.readFileSync('/dev/stdin').toString().split('\n');
inputs.pop()

let number = 1;
inputs.forEach(input => number *= parseInt(input));

let numberStr = String(number);
let numberStrLen = numberStr.length;
let answers = [];
for(let i=0;i<10;++i){
    answers.push(parseInt(0))
}
for (let i = 0; i < numberStrLen; ++i) {
    ++answers[numberStr[i].charCodeAt(0) - '0'.charCodeAt(0)];
}

for (let i = 0; i < 10; ++i) {
    console.log(answers[i]);
}