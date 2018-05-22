#ifndef AGENCIA_H
#define AGENCIA_H

#include <string>

using namespace std;

class Agencia{
	private:
        int CP;
        string ciudad;
        string pais;
        string direccion;
        int codigo;
	public:
	    //Cons&Des
		Agencia(int CP, string ciudad, string pais, string direccion, int codigo);
		~Agencia();
		Agencia();
        Agencia(const Agencia &a);
		//Getters
		int getCP();
        string getCiudad();
        string getPais();
        string getDireccion();
        int getCodigo();
        //Setters
        void setCP(int CP);
        void setCiudad(string ciudad);
        void setPais(string pais);
        void setDireccion(string direccion);
        void setCodigo(int codigo);
        string toString();
};


#endif
