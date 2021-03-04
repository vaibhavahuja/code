var http = require('http');
var url = process.argv[2];


http.get(url, (res)=>{
    res.on('error', (d)=>{
        console.error(error);
    })
    var s = "";
    var p = 0;
    res.on('data', (d)=>{
        s += d.toString();
        p+=d.length;
        
    })
    res.on('end', (d)=>{
        console.log(p);
        console.log(s);
    })
})