var express = require('express');
var app = express();

app.get('/home', (req, res)=>{
    res.write("Hello World!");
    res.end();
}) 
app.listen(process.argv[2]);
// app.listen(3000);