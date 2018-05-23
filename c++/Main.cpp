//
// Created by ivans on 22/05/2018.
//

#include "Main.h"
#include <sstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Cliente.h"
#include "Agencia.h"
#include "Coche.h"
#include "Reserva.h"
#include "Gestor.h"


using namespace std;

int main() {
    /*
    Gestor* gestor = new Gestor(true);
    Administrador* admin = new Administrador(0, "admin1@gmail.com", "pass");
    Cliente* c = new Cliente(0, "pepe@gmail.com", "pass", "nombre", "apellido", "dni");
    Agencia* a = new Agencia(48910, "Sestao", "España", "C/ Falsa, 123", 1);
    Coche* coche = new Coche("Ford", "GT", "0454KFD", 1250.3, 2, "Supercoche", a);
    Reserva* r = new Reserva("22/05/2018", "29/05/2018", 2, c, coche, a);
    gestor->registrarCliente(c);
    gestor->addAgencia(a);
    gestor->addCoche(coche);
    gestor->addReserva(r);
    gestor->addAdministrador(admin);
    cout << c->toString() << endl;
    */
    Gestor* gestor = new Gestor(true);
    int elec;

    SetConsoleTitle("DeustoRental");
    do
    {

    limpiarPantalla();
    printf("----------------------------------------------------------\n");
    printf("                DeustoRental Company!\n");
    printf("                         Inicio\n");
    printf("----------------------------------------------------------\n");



    printf("Bienvenido a DeustoRental, plataforma de alquiler de vehiculos. \n");
    do
    {

        printf("Que desea?\n\n");

        printf("1. Registrarse\n");
        printf("2. Login\n");
        printf("3. Manage\n"); //Menu para el administrador
        printf("4. Exit\n\n");

        scanf("%d",&elec);


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
        boolean success=false;

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
                    printf("\n\n");

                    if(strcmp(rpass1,rpass2)==0){
                        success=true;
                    }

                }
        }
        gestor->createID();
        Cliente* c = new Cliente(gestor->createID(), rdir,rpass1,rnom,rape,rdni);
        gestor->registrarCliente(c);
        printf("El usuario %s %s ha sido correctamente registrado\n",rnom,rape);
        system("pause");

    }
    if (elec==2)
    {
        limpiarPantalla();

        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                         Login\n");
        printf("----------------------------------------------------------\n");


        printf("Has elegido Logearse!\n");

        char lemail[50];
        char lpass[20];
        Cliente* user;
        boolean correct=false;



        do{
        printf("Introduce tu email:");
        scanf( "%s" , lemail );
        printf("\n");
        }while(gestor->getCliente(lemail)==nullptr);
        user=gestor->getCliente(lemail);

        do{
        printf("Introduce una contrasena:");
        scanf( "%s" , lpass );
        printf("\n");

        //if(user->getPass()==lpass){
        if(true){
            correct=true;
            printf("Has iniciado sesion correctamente!");
            system("pause");
            menuUsuario();
        }

        }while(correct==false);


    }
    if (elec==3)
    {
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                    Management Tool\n");
        printf("----------------------------------------------------------\n");


        char lemail[50];
        char lpass[20];
        Administrador* admin;
        boolean correct=false;



        do{
        printf("Introduce tu email:");
        scanf( "%s" , lemail );
        printf("\n");
        }while(gestor->getAdministrador(lemail)==nullptr);
        admin=gestor->getAdministrador(lemail);

        do{
        printf("Introduce una contrasena:");
        scanf( "%s" , lpass );
        printf("\n");

        if(admin->comprobarContrasenya(lpass)){
            correct=true;
            printf("Has iniciado sesion correctamente!");
            system("pause");
            menuAdmin();
        }

        }while(correct==false);



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
    }while(TRUE);
}



void limpiarPantalla()
{
  system("@cls||clear");
}

void test(){
    stringstream ss;
    ss << "ab, " << "cd, " << "df.";
    string s = ss.str();
    cout << s << endl;
}

void menuUsuario()
{
    do{
    limpiarPantalla();
    printf("----------------------------------------------------------\n");
    printf("                DeustoRental Company!\n");
    printf("                   Menu de Cliente\n");
    printf("----------------------------------------------------------\n");
    printf("                  Bienvenido!");

    int elec;

    do
    {

        printf("Que desea?\n\n");

        printf("1. Hacer una reserva\n");
        printf("2. Mis Reservas\n");
        printf("3. Exit\n\n");

        scanf("%d",&elec);



    } while ( elec < 1 || elec > 3 );
    if (elec==1){
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                   Menu de Cliente\n");
        printf("----------------------------------------------------------\n");

    }
    if (elec==2){
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                   Menu de Cliente\n");
        printf("----------------------------------------------------------\n");
    }
    if (elec==3){
        exit(0);
    }
    }while(true);
}

void menuAdmin()
{
    do{
    limpiarPantalla();
    printf("----------------------------------------------------------\n");
    printf("                DeustoRental Company!\n");
    printf("                   Admin Menu\n");
    printf("----------------------------------------------------------\n");
    printf("                  Bienvenido!");

    Gestor* gestor = new Gestor(true);
    int elec;

    do
    {

        printf("Que desea?\n\n");

        printf("1. Crear Administrador\n");
        printf("2. Listar Reservas\n");
        printf("3. Listar Vehiculos\n");
        printf("4. Listar Agencias\n");
        printf("5. Exit\n\n");

        scanf("%d",&elec);



    } while ( elec < 1 || elec > 5 );
    if (elec==1){
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                   Register Admin\n");
        printf("----------------------------------------------------------\n");


        int id;
        char remail[50];
        char rpass1[20];
        char rpass2[20];
        boolean success=false;

        printf("Introduce un Email:");
        scanf( "%s" , remail );
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
                    printf("\n\n");

                    if(strcmp(rpass1,rpass2)==0){
                        success=true;
                    }

                }
        }
        Administrador* a = new Administrador(gestor->createAdminID(),remail,rpass1);
        printf("El Administrador [%s] ha sido correctamente registrado\n",remail);
        system("pause");
    }
    if (elec==2){
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                   Listar Reservas\n");
        printf("----------------------------------------------------------\n");
        gestor->getReservas();
    }
    if (elec==3){
        int elec1;
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                   Listar Vehiculos\n");
        printf("----------------------------------------------------------\n");
        printf("Introduce el codigo de la agencia cuyos vehiculos quieres listar:");
        scanf("%d",&elec1);
        Agencia* aa = gestor->getAgencia(elec1);
        Coche** listaCoches = gestor->getCoches(aa);

        printf("Aqui tendria que estar el listado de coches jj");

        system("pause");
    }
    if (elec==4){
        limpiarPantalla();
        printf("----------------------------------------------------------\n");
        printf("                DeustoRental Company!\n");
        printf("                   Listar Agencias\n");
        printf("----------------------------------------------------------\n");
        gestor->getAgencias();
    }

    if (elec==5){
        printf("Hasta Luego!");
        exit(0);
    }
    }while(true);
}
