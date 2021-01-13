let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let testCount = input[0];
let result= '';
for(let i=0;i<testCount;++i){
    let inputSplits = input[i+1].split(' ');
    result += parseInt(inputSplits[0]) + parseInt(inputSplits[1]) + '\n';
}

console.log(result);