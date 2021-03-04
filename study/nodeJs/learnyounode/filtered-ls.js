var dir = process.argv[2];
var fileExtension = process.argv[3];

var fs = require('fs');

fs.readdir(dir, function check(err, data){
    if(err) comsole.log(err);
    else{
        var p = data;
        // console.log(p);
        for(var i = 0; i < p.length; i++){
            var q = p[i].split('.');
            // console.log(q[1]);
            if(q[1] === fileExtension) console.log(p[i]);
        }
    }
})

