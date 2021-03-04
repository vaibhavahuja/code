const getTodo = ()=>{
    return new Promise((resolve, reject) => {
        setTimeout(()=>{
            let error = true;
            if(!error){
                resolve({text:'Complete code exmample'})
            }else reject()

        }, 2000)
    })
}

async function fetch(){
    try{
        const todo = await getTodo();
        return todo;
    }catch(error){
        console.log("error occured");
    }
    
}

fetch()
    .then(todo=>console.log(todo.text))
    .catch(()=>console.log("error occured"))
