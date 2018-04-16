#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct{

    char* nombre;
    char* apellido;
    int edad;
    char* direccion;
    char* dni;

} Cliente;

Cliente* crearCliente(char* nombre, char* apellido, int edad, char* direccion, char* dni);
#endif // CLIENTE_H_INCLUDED
