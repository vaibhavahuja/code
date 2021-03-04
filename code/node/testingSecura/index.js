const secura = require('secura');

var password = "hey";

secura.generatePassword(password)
      .then(hash=>{
          console.log(hash);
          secura.validatePassword(password+"1", hash)
            .then(isMatch=>{
                if(isMatch) console.log("yes");
                else console.log("np");
            })
      });