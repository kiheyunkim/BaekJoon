let checker = [];

let func = (number) => {
    let sum = number;
    let numberStr = String(number);
    let numberStrLen = numberStr.length;
    for (let i = 0; i < numberStrLen; ++i) {
        sum += (numberStr[i].charCodeAt(0) - '0'.charCodeAt(0))
    }

    checker[sum] = 1;
}

for (let i = 0; i <= 20000; ++i) {
    checker.push(0);
}

for (let i = 0; i <= 10000; ++i) {
    func(i);
}

let answer = '';
for (let i = 0; i <= 10000; ++i) {
    if(checker[i] !== 1){
        answer = answer + (i + '\n');
    }
}

console.log(answer);