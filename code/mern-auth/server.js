const express = require('express');
const mongoose = require('mongoose');
const bodyParser = require('body-parser');
const passport = require("passport");

const users = require("./routes/api/users");

const app = express();

app.use(
    bodyParser.urlencoded({
        extended: false
    })
);

app.use(bodyParser.json());

//DB Configuration
const db = require('./config/keys').mongoURI;

mongoose.connect(db, {useNewUrlParser:true})
        .then(()=>console.log("Connected to database succesfully"))
        .catch((err)=>console.log(err));

//passport middleware
app.use(passport.initialize());

//passport config
require("./config/passport")(passport);

//routes
app.use("/api/users", users);

                
const port = process.env.PORT || 3000;

app.listen(port, ()=>console.log(`Server up and running on port ${port} !`));