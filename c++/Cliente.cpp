#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Cliente.h"
#include <sstream>


Cliente::Cliente(int id, char* email, char* pass, char* nombre, char* apellido, char* dni){
	this->id = id;
	this->email = email;
	this->pass = pass;
	this->nombre = nombre;
	this->apellido = apellido;
	this->dni = dni;
}

Cliente::comprobarContrasenya(char* pass){
	if(sizeof(pass) != sizeof(this->pass){
		return false;
	}else{
		return (strcmp(this->pass, pass) == 0 ? true : false);
	}
}

int Cliente::getId(){
	return this->id;
}
char* Cliente::getEmail(){
	return this->email;
}
char* Cliente::getNombre(){
	return this->nombre;
}
char* Cliente::getApellido(){
	return this->apellido;
}
char* Cliente::getDni(){
	return this->dni;
}
void Cliente::setId(int id){
	this->id = id;
}
void Cliente::setEmail(char* email){
	this->email = email;
}
void Cliente::setPass(char* pass){
	this->pass = pass;
}
void Cliente::setNombre(char* nombre){
	this->nombre = nombre;
}
void Cliente::setApellido(char* apellido){
	this->apellido = apellido;
}
void Cliente::setDni(char* dni){
	this->dni = dni;
}

std::string Cliente::toString(){
	std::stringstream ss;
	ss << id << ", " << email << ", " << nombre << ", " << apellido << ", " << dni << "\n";
	std::string result = ss.str();
	return result;
}
