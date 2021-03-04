import { promise } from "selenium-webdriver";

let cleanRoom = ()=>{
    return new Promise((resolve, reject)=>{
        resolve('Clean The Room');
    });
};

let removeGarbage = (p)=>{
    return new Promise((resolve, reject)=>{
        resolve(p + " remove garbage");
    });
};


let winIceCream = (p)=>{
    return new Promise((resolve, reject)=>{
        resolve(p + " won icecream");
    });
};

Promise.all([cleanRoom(), removeGarbage(), winIceCream()])
    .then(()=>{
        console.log('finished');
    })

// use promise.race -> if any one is finished


// cleanRoom()
//     .then((result)=>{
//         return removeGarbage(result);
//     }).then((result)=>{
//         return winIceCream(result);
//     }).then((result)=>{
//         console.log("finished " + result);
//     })