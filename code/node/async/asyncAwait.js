console.log('person1 : shows ticket');
console.log('person2 : shows ticket');

const preMovie = async()=>{
    const promiseWifeBringingTicks = new Promise((resolve, reject)=>{
        setTimeout(()=>resolve('ticket'), 2000);
    });

    let ticket = await promiseWifeBringingTicks;

    return ticket;
};

preMovie().then((m)=>console.log(m));

console.log('person3 : shows ticket');
console.log('person4 : shows ticket');



  
//doing this with promises;
// console.log('person1 : shows ticket');
// console.log('person2 : shows ticket');

// const promiseWifeBringingTicks = new Promise((resolve, reject)=>{
//     setTimeout(()=>{
//         resolve('Ticket');
//     }, 3000)
// });



// const getPopcorn = promiseWifeBringingTicks.then((t)=>{
//     console.log("i have ticket");
//     console.log("lets go in ");
//     console.log("no i am hungry");
//     return new Promise((resolve, reject)=>resolve(`${t} popcorn`));
// });

// const getButter = getPopcorn
//     .then((t)=>{
//         console.log('husband : we should go in');
//         console.log('wife: no i need butter on popcorn');
//         return new Promise((resolve, reject)=>resolve(`${t} butter`));
//     });

// getButter.then((t)=>console.log(t));

// console.log('person4 : shows ticket');
// console.log('person5 : shows ticket');
