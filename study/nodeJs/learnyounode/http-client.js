var http = require('http');
var path = process.argv[2];

http.get(path, (res)=>{
    res.on('error', d=>{
        console.error(error);
    })

    res.on('data', d=>{
        console.log(d.toString());
    })

})