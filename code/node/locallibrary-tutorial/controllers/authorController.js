var Author = require('../models/author');

exports.author_list = function(req, res){
	res.send('NOT IMPLEMENTED: Author list');
}

exports.author_detail = function(req, res){
	res.send('Not IMPLEMENTED: Author Detail: ' + req.params.id);
}


exports.author_create_get = function(req, res){
	res.send("Not IMPLEMENTED: Author create GET");
}

exports.author_create_post = function(req, res){
	res.send('not implemented author create post');
}

exports.author_delete_get = function(req, res){
	res.send('not implemented author delete get');
}

exports.author_delete_post = function(req, res){
	res.send('not implemented author delete post');
}

exports.author_update_get = function(req, res){
	res.send('not implemented author update get');
}

exports.author_update_post = function(req, res){
	res.send('not implemenetd : author update post');
}