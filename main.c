#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Administrador.h"
#include "Cliente.h"

int main()
{
    SetConsoleTitle("DeustoRental");
    printf("----------------------------------------------------------\n");
    printf("                DeustoRental Company!\n");
    printf("----------------------------------------------------------\n");

    Administrador* admin;
    Cliente* cliente;
    int elec;

    printf("Bienvenido a DeustoRental, plataforma de alquiler de vehiculos. \n");

    do
    {

        printf("Que desea?\n\n");

        printf("1. Registrarse\n");
        printf("2. Login\n");
        printf("3. Salir\n\n");

        scanf("%d",&elec);

        printf("\n");

    } while ( elec < 1 || elec > 3 );

    if (elec==1)
    {
        char rnom[25];
        char rape[25];
        int redad;
        char rdir[50];
        char rdni[9];
        char rpass1[20];
        char rpass2[20];

        printf("Has elegido Registrarse!\n");

        printf("Introduce tu nombre:");
        scanf( "%s" , rnom );
        printf("\n");

        printf("Introduce tu apellido:");
        scanf( "%s" , rape );
        printf("\n");

        printf("Introduce tu edad:");
        scanf( "%d" , &redad );
        printf("\n");

        printf("Introduce tu direccion:");
        scanf( "%s" , rdir );
        printf("\n");

        printf("Introduce tu dni:");
        scanf( "%s" , rdni );
        printf("\n");

        printf("Introduce una contrasena:");
        scanf( "%s" , rpass1 );
        printf("\n");

        printf("Repite la contrasena:");
        scanf( "%s" , rpass2 );
        printf("\n");

        //Falta comprobacion de pass iguales + anadir a la struct cliente las pass

        cliente = crearCliente(rnom , rape , redad , rdir, rdni);

        printf("Cliente registrado : %s %s con DNI: %s\n", cliente->nombre, cliente->apellido,cliente->dni);

    }
    if (elec==2)
    {
        printf("Has elegido Logearse!\n");

        char ldni[9];
        char lpass[20];

        printf("Introduce tu dni:");
        scanf( "%s" , ldni );
        printf("\n");

        printf("Introduce una contrasena:");
        scanf( "%s" , lpass );
        printf("\n");

        //Crear metodo login
        //manana miro para crear BD y guardar todos los datos de reservas,alquileres, clientes etc

    }
    if (elec==3)
    {
        printf("Has elegido Salir!\n");
        return 0;
    }

    printf("----------------------------------------------------------\n");
    printf("                Extra Info\n");
    printf("----------------------------------------------------------\n");

    admin = crearAdministrador(5, "pepe@gmail.com");
    leerCliente();




    return 0;
}
