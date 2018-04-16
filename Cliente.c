#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cliente.h"


Cliente* crearCliente(char* nombre, char* apellido, int edad, char* direccion, char* dni){
    Cliente *c = (Cliente*) malloc(sizeof(Cliente));
    c->nombre = malloc(strlen(nombre) + 1);
    c->apellido = malloc(strlen(apellido) + 1);
    c->direccion = malloc(strlen(direccion) + 1);
    c->dni = malloc(strlen(dni) + 1);
    c->edad = edad;

    strcpy(c->nombre, nombre);
    strcpy(c->apellido, apellido);
    strcpy(c->direccion, direccion);
    strcpy(c->dni, dni);

    //almacenar a bd / archivo de texto

    return c;
}

/*
 *
 * ESTE METODO HA DE SER MODIFICADO LEVEMENTE E IMPLEMENTADO EN EL RESTO DE CLASES
 *
 *
 */


Cliente** leerCliente(){
    Cliente** clientes;
    clientes = malloc(sizeof(Cliente*) * 25);
    static const char filename[] = "F:\\Documentos\\Deusto\\PROG4\\DeustoRental\\clientes.txt"; //Cambiar por el adecuado
    FILE *file = fopen ( filename, "r" );
    if ( file != NULL )
    {
        char line [ 128 ];
        char** parametros;
        parametros = malloc(5 * sizeof(char*));
        int i;
        int j = 0;

        while ( fgets ( line, sizeof line, file ) != NULL ) /* Leer una linea */
        {
            char *pt;
            i = 0;
            pt = strtok (line,","); /* Separar la línea por , */
            while (pt != NULL) {
                parametros[i] = malloc(24 * sizeof(char));
                parametros[i] = pt;
                pt = strtok (NULL, ",");
                i++;
            }
            clientes[j] = crearCliente(parametros[0], parametros[1], atoi(parametros[2]), parametros[3], parametros[4]);
            imprimirCliente(clientes[j]); //Para testeo
            j++;
        }
        fclose ( file );
        return clientes; /*Devolver array de clientes*/
    }
    else
    {
        perror ( filename );
    }
    return 0;
}
Cliente* modificarCliente();

void imprimirCliente(Cliente* c){
    printf("Nombre y Apellido(s): %s %s, Direccion; %s, Edad: %i, DNI: %s ", c->nombre, c->apellido, c->direccion, c->edad, c->dni);
}
