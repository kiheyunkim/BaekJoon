let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let x = parseInt(input[0]);
let y = parseInt(input[1]);

if(x * y > 0){
    if(x > 0 ){
        console.log(1);
    }else{
        console.log(3);
    }
}else{
    if(x > 0 ){
        console.log(4);
    }else{
        console.log(2);
    }
}
//정답이 틀린건 아닌데 /dev/stdin 경로가 잘못 된 듯 함.