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
		void setId(int id);
		void setEmail(char* email);
		void setPass(char* pass);
};


#endif // ADMINISTRADOR_H
