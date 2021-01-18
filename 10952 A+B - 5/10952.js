let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

while (true) {
    let inputs = input.shift().split(' ');
    let a = parseInt(inputs[0]);
    let b = parseInt(inputs[1]);

    if (a == 0 && b == 0) {
        break;
    }

    console.log(a + b);
}