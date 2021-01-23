let fs = require('fs');
let inputs = fs.readFileSync('/dev/stdin').toString().split('\n');
inputs.pop()

let answerArray = [];
for (let i = 0; i < 42; ++i) {
    answerArray.push(parseInt(0));
}

for (let i = 0; i < 10; ++i) {
    answerArray[parseInt(inputs[i]) % 42] +=1;
}

let answer = 0;
for (let i = 0; i < 42; ++i) {
    if(answerArray[i] > 0){
        ++answer;
    }
}

console.log(answer);