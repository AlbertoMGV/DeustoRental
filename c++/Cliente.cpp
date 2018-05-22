#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Cliente::Cliente(char* nombre,char* apellido,int edad,char* direccion, char* dni, char* pass){
	this->nombre = nombre;
	this->apellido = apellido;
	this->edad = edad;
	this->direccion = direccion;
	this->dni = dni;
	this->pass = pass;
}

bool comprobarContrasenya(char* pass){
	if(sizeof(pass) != sizeof(this->pass){
		return false;
	}else{
		return (strcmp(this->pass, pass) == 0 ? true : false);
	}
}

int getDni(){
	return dni;
}

int getDireccion(){
	return direccion;
}

void setDni(int dni){
	this->dni = dni;
}

void setDireccion(char* direccion){
	this->direccion = direccion;
}

void setPass(char* pass){
	this->pass = pass;
}
#include "Cliente.h"
