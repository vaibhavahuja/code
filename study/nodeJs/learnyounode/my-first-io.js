const fs = require('fs');

var fileContent = fs.readFileSync(process.argv[2], 'utf8').split('\n').length - 1;
// console.log(fileContent);
// var p = 0;
// for(var i = 0; i < fileContent.length; i++){
//     if(fileContent[i] === "\n") p++;
// }
console.log(fileContent);
