var http  = require('http');

var url1 = process.argv[2];
var url2 = process.argv[3];
var url3 = process.argv[4];


function check3(url){
    http.get(url, (res)=>{
        res.on('error', (d)=>{
            console.error(error);
        })
        var s = "";
        var p = 0;
        res.on('data', (d)=>{
            s += d.toString();
            // p+=d.length;
            
        })
        res.on('end', (d)=>{
            // console.log(p);
            console.log(s);
        })
    })
}


function check2(url){
    http.get(url, (res)=>{
        res.on('error', (d)=>{
            console.error(error);
        })
        var s = "";
        var p = 0;
        res.on('data', (d)=>{
            s += d.toString();
            // p+=d.length;
            
        })
        res.on('end', (d)=>{
            // console.log(p);
            console.log(s);
            check3(url3);
        })
    })
}

function check(url){
    http.get(url, (res)=>{
        res.on('error', (d)=>{
            console.error(error);
        })
        var s = "";
        var p = 0;
        res.on('data', (d)=>{
            s += d.toString();
            // p+=d.length;
            
        })
        res.on('end', (d)=>{
            // console.log(p);
            console.log(s);
            check2(url2);
        })
    })
}


check(url1);