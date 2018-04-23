#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include "Administrador.h"
#include "Cliente.h"
#include "sqlite3.h"
#include <unistd.h>

int main()
{
    SetConsoleTitle("DeustoRental");
    printf("----------------------------------------------------------\n");
    printf("                DeustoRental Company!\n");
    printf("                         Inicio\n");
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
        printf("3. Manage\n"); //Menu para el administrador
        printf("4. Exit\n\n");

        scanf("%d",&elec);

        printf("\n");

    } while ( elec < 1 || elec > 4 );

    if (elec==1)
    {
        char rnom[25];
        char rape[25];
        int redad;
        char rdir[50];
        char rdni[9];
        char rpass1[20];
        char rpass2[20];
        boolean success;

        limpiarPantalla();

        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                         Registro\n");
        printf("----------------------------------------------------------\n");


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

        if(strcmp(rpass1,rpass2)!=0){
                printf("Las contrasenas no son iguales!\n");
                while(!success) {
                    printf("Introduce una contrasena:");
                    scanf( "%s" , rpass1 );
                    printf("\n");

                    printf("Repite la contrasena:");
                    scanf( "%s" , rpass2 );
                    printf("\n");

                    if(strcmp(rpass1,rpass2)==0){
                        success=true;
                    }

                }
        }


        cliente = crearCliente(rnom , rape , redad , rdir, rdni);

        ("Cliente registrado con exito! %s %s con DNI: %s\n", cliente->nombre, cliente->apellido,cliente->dni);




    }
    if (elec==2)
    {
        limpiarPantalla();

        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                         Login\n");
        printf("----------------------------------------------------------\n");


        printf("Has elegido Logearse!\n");

        char ldni[9];
        char lpass[20];

        printf("Introduce tu dni:");
        scanf( "%s" , ldni );
        printf("\n");

        printf("Introduce una contrasena:");
        scanf( "%s" , lpass );
        printf("\n");

        //comprobar en la db "administrador"

    }
    if (elec==3)
    {
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                    Management Tool\n");
        printf("----------------------------------------------------------\n");



        char aemail[50];
        char apass[20];


        printf("Introduce tu Email:");
        scanf( "%s" , aemail );


        printf("Introduce una contrasena:");
        scanf( "%s" , apass );
        printf("\n");

        //comprobar en la db "administrador"

        leerCliente();

        return 0;
    }
    if (elec==4)
    {
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                   Hasta la proxima!\n");
        printf("----------------------------------------------------------\n");
        return 0;
    }
    return 0;
}

void limpiarPantalla()
{
  system("@cls||clear");
}
