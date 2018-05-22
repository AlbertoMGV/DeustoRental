#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct{

    char* nombre;
    char* apellido;
    int edad;
    char* direccion;
    char* dni;
    //char* pass;

} Cliente;
Cliente* crearCliente(char* nombre, char* apellido, int edad, char* direccion, char* dni);
Cliente** leerCliente();
Cliente* modificarCliente();
void imprimirCliente(Cliente* c);
#endif // CLIENTE_H_INCLUDED
