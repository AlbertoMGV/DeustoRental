#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Administrador.h"

Administrador::Administrador(int id, char* email, char* pass){
	this->id = id;
	this->email = email;
	this->pass = pass;
}

bool comprobarContraseña(char* pass){
	if(sizeof(pass) != sizeof(this->pass){
		return false;
	}else{
		return (strcmp(this->pass, pass) == 0 ? false : true);
	}
}

int getId(){
	return id;
}

int getEmail(){
	return email;
}

void setId(int id){
	this->id = id;
}

void setEmail(char* email){
	this->email = email;
}

void setPass(char* pass){
	this->pass = pass;
}

