#ifndef AGENCIA_H
#define AGENCIA_H

class Agencia{
	private:
		int CP;
        char* ciudad;
        char* pais;
        char* direccion;
        int id;
	public:
	    //Cons&Des
		Agencia(int CP, char* Ciudad, char* pais, char* direccion, int id);
		~Agencia();
		//Getters
		int getCP();
        char* getCiudad();
        char* getPais();
        char* getDireccion();
        int getId();
        //Setters
        void setCP();
        void setCiudad();
        void setPais();
        void setDireccion();
        void setId();

};


#endif
