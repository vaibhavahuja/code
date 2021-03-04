const fetch = require("node-fetch");

var myApi = (url)=>{
    return new Promise((resolve, reject)=>{
        fetch(url)
            .then(response => response.json())
            .then(data=>resolve(data))
    });
}



var doThis = (string)=>{
    return new Promise((resolve, reject)=>{
        resolve(`hey my name is ${string}`)
    });
}


module.exports.newFunction = doThis;

module.exports.myApi = myApi;