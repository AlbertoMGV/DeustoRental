#ifndef AGENCIA_H
#define AGENCIA_H

class Agencia{
	private:
		int CP;
        char* ciudad;
        char* pais;
        char* direccion;
        int codigo;
	public:
	    //Cons&Des
		Agencia(int CP, char* Ciudad, char* pais, char* direccion, int codigo);
		~Agencia();
		//Getters
		int getCP();
        char* getCiudad();
        char* getPais();
        char* getDireccion();
        int getCodigo();
        //Setters
        void setCP();
        void setCiudad();
        void setPais();
        void setDireccion();
        void setCodigo();

};


#endif