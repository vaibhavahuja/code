var dir = process.argv[2];
var fileExtension = process.argv[3];

const mymodule = require('./mymodule.js');

mymodule(dir, fileExtension, (err, data)=>{
    if(err) {console.log(err); return;}

    data.forEach((file)=>{
        console.log(file);
    });
});