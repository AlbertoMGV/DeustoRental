#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <string>

using namespace std;

class Cliente{
	private:
		int id;
		string email;
		string pass;
		string nombre;
		string apellido;
		string dni;
	public:
		Cliente(int id, string email, string pass, string nombre, string apellido, string dni);
        Cliente();
        bool comprobarContrasenya(string pass);
		int getId();
		string getEmail();
		string getNombre();
		string getApellido();
		string getDni();
		void setId(int id);
		void setEmail(string email);
		void setPass(string pass);
		void setNombre(string nombre);
		void setApellido(string apellido);
		void setDni(string dni);
		std::string toString();
};

#endif // CLIENTE_H_INCLUDED

