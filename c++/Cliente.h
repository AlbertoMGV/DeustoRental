#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <string>

class Cliente{
	private:
		int id;
		char* email;
		char* pass;
		char* nombre;
		char* apellido;
		char* dni;
	public:
		Cliente(int id, char* email, char* pass, char* nombre, char* apellido, char* dni);
		bool comprobarContrasenya(char* pass);
		int getId();
		char* getEmail();
		char* getNombre();
		char* getApellido();
		char* getDni();
		void setId(int id);
		void setEmail(char* email);
		void setPass(char* pass);
		void setNombre(char* nombre);
		void setApellido(char* apellido);
		void setDni(char* dni);
		std::string toString();
};

#endif // CLIENTE_H_INCLUDED

