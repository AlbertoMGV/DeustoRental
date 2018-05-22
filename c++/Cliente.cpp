#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Cliente.h"


Cliente::Cliente(int id, char* email, char* pass, char* nombre, char* apellido, char* dni){
	this->id = id;
	this->email = email;
	this->pass = pass;
	this->nombre = nombre;
	this->apellido = apellido;
	this->dni = dni;
}

bool comprobarContrasenya(char* pass){
	if(sizeof(pass) != sizeof(this->pass){
		return false;
	}else{
		return (strcmp(this->pass, pass) == 0 ? true : false);
	}
}

int getId(){
	return this->id;
}
char* getEmail(){
	return this->email;
}
char* getNombre(){
	return this->nombre;
}
char* getApellido(){
	return this->apellido;
}
char* getDni(){
	return this->dni;
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
void setNombre(char* nombre){
	this->nombre = nombre;
}
void setApellido(char* apellido){
	this->apellido = apellido;
}
void setDni(char* dni){
	this->dni = dni;
}
