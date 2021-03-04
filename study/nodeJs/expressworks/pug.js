var express = require('express');
var app = express();
var path = require('path');


app.set('views', path.join(process.argv[3], 'templates'));
app.set('view engine', 'pug');

app.get('/home', (req, res)=>{
    res.render('index', {date: new Date().toDateString()});
    res.end();
})

app.listen(process.argv[2]);