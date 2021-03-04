// console.log(process.argv);

var args = process.argv.slice(2);

var p = 0;
for(var i = 0; i < args.length; i++){
    p += parseInt(args[i]);
}

console.log(p);