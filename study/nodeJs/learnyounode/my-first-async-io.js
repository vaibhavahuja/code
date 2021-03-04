var fs = require('fs');
// var myNumber = undefined;

// function ans(){
    fs.readFile(process.argv[2], function doneReading(err, data){
        var myNumber = data.toString().split('\n').length - 1;
        // console.log(data.toString());
        console.log(myNumber);
    })
// }

// ans();
// console.log(myNumber);