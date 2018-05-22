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
		Agencia(int CP, char* ciudad, char* pais, char* direccion, int codigo);
		~Agencia();
		Agencia();
		//Getters
		int getCP();
        char* getCiudad();
        char* getPais();
        char* getDireccion();
        int getCodigo();
        //Setters
        void setCP(int CP);
        void setCiudad(char* ciudad);
        void setPais(char* pais);
        void setDireccion(char* direccion);
        void setCodigo(int codigo);

};


#endif
