// import { async } from "q";

// write 3 functions (printing 1, 2 and 3) with a different timer for all.
// Print them with promises and callback and async await

// using callbacks
// let x = (z, callback)=>{
//     setTimeout(()=>{
//         console.log("print 1");
//         callback(z);
//     }, 2000);
// } 

// let y = (callback)=>{
//     setTimeout(()=>{
//         console.log("print 2");
//         callback();
//     }, 3000);
// }

// let z = ()=>{
//     setTimeout(()=>{
//         console.log("print 3");
//     }, 1000);
// } 


// x(z, y);

//using promises

let a = ()=>{
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            resolve("This is X");
        }, 2000)
    })
}

let b = ()=>{
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            resolve("This is Y");
        }, 3000)
    })
}

let c = ()=>{
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            resolve("This is Z");
        }, 1000)
    })
}
// console.log("does it even work");

// a().then((result)=>{
//     return b().then((result2)=>{
//         return c().then((result3)=>{
//             console.log(result);
//             console.log(result2);
//             console.log(result3);
//         })
//     })
// });

//using async await

async function msg(){
    // const my = await a();
    // console.log(my);
    // const my2 = await b();
    // const my3 = await c();
    // console.log(my2);
    // console.log(my3);
    // using promise all
    const [a1, b1, c1] = await Promise.all([a(), b(), c()]);
    console.log(`${a1} ${b1} ${c1}`)
}

msg();
