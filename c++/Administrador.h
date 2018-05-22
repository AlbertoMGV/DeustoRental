#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <string>

using namespace std;

class Administrador{
	private:
		int id;
		string email;
		string pass;
	public:
		Administrador(int id, string email, string pass);
		bool comprobarContrasenya(string pass);
		int getId();
		string getEmail();
		void setId(int id);
		void setEmail(string email);
		void setPass(string pass);
        string toString();
};


#endif // ADMINISTRADOR_H
