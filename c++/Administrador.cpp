#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Administrador.h"

Administrador::Administrador(int id, string email, string pass){
	this->id = id;
	this->email = email;
	this->pass = pass;
}

bool Administrador::comprobarContrasenya(string pass){
	return (this->pass.compare(pass) == 0);
}

int Administrador::getId(){
	return id;
}

string Administrador::getEmail(){
	return email;
}

void Administrador::setId(int id){
	this->id = id;
}

void Administrador::setEmail(string email){
	this->email = email;
}

void Administrador::setPass(string pass){
	this->pass = pass;
}

