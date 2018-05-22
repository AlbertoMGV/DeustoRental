#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador{
	private:
		int id;
		char* email;
		char* pass;
	public:
		Administrador(int id, char* email, char* pass);
		bool comprobarContrasenya(char* pass);
		int getId();
		char* getEmail();
		void setId();
		void setEmail();
		void setPass();
};


#endif // ADMINISTRADOR_H
