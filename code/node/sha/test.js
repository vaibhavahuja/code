var sha = require('./index.js');

let str = 'Hey my name is vaibhav';


sha.convertSha(str, 5)
    .then(d => console.log(d))

let hash = '2b733f7fa261ba214fae6b42057bdd7d537c0b4fb9bf84f56aa67f5448822dc3';
sha.check(str, hash)
    .then(d=>{
        if(d) console.log("yeahh");
        else console.log("noo");
    })







    // var p = async (str) =>{
//     const check = await sha.convertSha(str);
//     console.log(check);
// }

// p(str);