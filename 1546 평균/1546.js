let fs = require('fs');
let inputs = fs.readFileSync('/dev/stdin').toString().split('\n');

let n = parseInt(inputs[0]);
let scoreArray = inputs[1].split(' ');
let maxScore = Math.max(...scoreArray);
scoreArray = scoreArray.map((value)=>value/maxScore * 100);

console.log(scoreArray.reduce((prev,current)=> prev + current) / n);