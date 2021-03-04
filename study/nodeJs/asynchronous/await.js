const posts = [
    {title: 'post one',  body: 'this is post one'},
    {title: 'post two',  body: 'this is post two'}
];

function getPosts(){
    setTimeout(()=>{
        let output = '';
        posts.forEach((post, index) => {
            output += `<li>${post.title}</li>`
        });

        document.body.innerHTML = output;
    }, 1000)
}

async function init(){
    await createPost({title: 'POst Three', body: 'this is post three'});

    getPosts();
}

init();


function createPost(post){
    return new Promise((resolve, reject)=>{      
        setTimeout(()=>{
            posts.push(post);

            const error = false;

            if(!error){
                resolve();
            }else{
                reject('Error');
            }

        }, 2000);
    });
}
