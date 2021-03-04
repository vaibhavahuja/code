var fs = require('fs');
var path = require('path');


module.exports = (dir, ext, callback)=>{
    fs.readdir(dir, (err, data)=>{
        if(err) return callback(err);

        const filteredFiles = data.filter((file)=>{
            return path.extname(file) === '.' + ext;
        });
        callback(null, filteredFiles);
    })

    
}