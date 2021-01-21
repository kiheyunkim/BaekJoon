let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let numbers = [];
input.forEach(inputElement => {
    numbers.push(parseInt(inputElement));
});

let max = numbers[0];
let order = 0;
for (let i = 1; i < 9; ++i) {
    if (max < numbers[i]) {
        order = i;
        max = numbers[i];
    }
}

console.log(max + "\n" + (order + 1));