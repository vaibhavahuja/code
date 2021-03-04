var shajs = require('sha.js');

var sha = (string, num)=>{
    return new Promise((resolve, reject)=>{
        while(num--){
            string = (shajs('sha256').update(string).digest('hex'))
        }
        resolve(string);
    });
}

var check = (string, hash)=>{
    return new Promise((resolve, reject)=>{
        sha(string, 3)
            .then(d=>{
                if(d === hash) resolve(true);
                else resolve(false);
            })
        
    })
}


module.exports.convertSha = sha;
module.exports.check = check;