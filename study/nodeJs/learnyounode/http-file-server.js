var http = require('http');
var fs = require('fs');


http.createServer((req, res)=>{
    const fileContent = fs.readFileSync(process.argv[3]).toString();
    res.write(fileContent);
    res.end();
}).listen(process.argv[2]);