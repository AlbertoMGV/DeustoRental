#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Administrador.h"

Administrador::Administrador(int id, char* email, char* pass){
	this->id = id;
	this->email = email;
	this->pass = pass;
}

bool Administrador::comprobarContrasenya(char* pass){
	if(sizeof(pass) != sizeof(this->pass)){
		return false;
	}else{
		return (strcmp(this->pass, pass) == 0 ? true : false);
	}
}

int Administrador::getId(){
	return id;
}

char* Administrador::getEmail(){
	return email;
}

void Administrador::setId(int id){
	this->id = id;
}

void Administrador::setEmail(char* email){
	this->email = email;
}

void Administrador::setPass(char* pass){
	this->pass = pass;
}

