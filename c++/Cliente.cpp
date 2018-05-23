#include "Cliente.h"
#include <sstream>
#include <iostream>
Cliente::Cliente(int id, string email, string pass, string nombre, string apellido, string dni){
	this->id = id;
	this->email = email;
	this->pass = pass;
	this->nombre = nombre;
	this->apellido = apellido;
	this->dni = dni;
}

Cliente::Cliente() {
    this->id = 0;
    this->email = "";
    this->pass = "";
    this->nombre = "";
    this->apellido = "";
    this->dni = "";
}


bool Cliente::comprobarContrasenya(string pass){
    return (this->pass.compare(pass) == 0);
}

int Cliente::getId(){
	return this->id;
}
string Cliente::getPass(){
	return this->pass;
}
string Cliente::getEmail(){
	return this->email;
}
string Cliente::getNombre(){
	return this->nombre;
}
string Cliente::getApellido(){
	return this->apellido;
}
string Cliente::getDni(){
	return this->dni;
}
void Cliente::setId(int id){
	this->id = id;
}
void Cliente::setEmail(string email){
	this->email = email;
}
void Cliente::setPass(string pass){
	this->pass = pass;
}
void Cliente::setNombre(string nombre){
	this->nombre = nombre;
}
void Cliente::setApellido(string apellido){
	this->apellido = apellido;
}
void Cliente::setDni(string dni){
	this->dni = dni;
}

string Cliente::toString(){
	stringstream ss;
	ss << id << "," << email << "," << nombre << "," << apellido << "," << dni << "\n";
	return ss.str();
}

