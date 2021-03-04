const express = require('express');
const path = require('path');
const bodyParser = require('body-parser');
const cors = require('cors');
const passport = require('passport');
const mongoose = require('mongoose');
const config = require('./config/database');

//Connect to Database
mongoose.connect(config.database);

// On Connection
mongoose.connection.on('connected', ()=>{
    console.log('Connected to database ' + config.database);
})

mongoose.connection.on('error', (err)=>{
    console.log('Database Error' + err);
})

const app = express();

const users = require('./routes/users');
// Port Number
const port = 3000;

//cors middleware
app.use(cors());

//set static folder
app.use(express.static(path.join(__dirname, 'public')));


//body parser middleware
app.use(bodyParser.json());


//passport middleware
app.use(passport.initialize());
app.use(passport.session());

require('./config/passport')(passport);

app.use('/users', users);
//Index route
app.get('/', (req, res)=>{
    res.send("invalid endpoint");
})

//Start Server
app.listen(port, ()=>{
    console.log('Server start on port '+port);
})