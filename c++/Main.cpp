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
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                DeustoRental Company!" << endl;
    cout <<"                         Inicio" << endl;
    cout <<"----------------------------------------------------------" << endl;



    cout <<"Bienvenido a DeustoRental, plataforma de alquiler de vehiculos. " << endl;
    do
    {

        cout << "Que desea?" << endl;
        cout << "1. Registrarse" << endl;
        cout << "2. Login" << endl;
        cout << "3. Manage" << endl; //Menu para el administrador
        cout << "4. Exit" << endl;

        cin >> elec;


    } while ( elec < 1 || elec > 4 );

    if (elec==1)
    {
        string rnom;
        string rape;
        int redad;
        string remail;
        string rdni;
        string rpass1;
        string rpass2;
        boolean success = false;

        limpiarPantalla();

        cout << "----------------------------------------------------------" << endl;
        cout << "                DeustoRental Company!" << endl;
        cout << "                         Registro"  << endl;
        cout << "----------------------------------------------------------"  << endl;


        cout <<"Introduce tu nombre:";
        cin >> rnom;
        cout <<"" << endl;

        cout <<"Introduce tu apellido:";
        cin >> rape;

        cout <<"Introduce tu edad:";
        cin >> redad;

        cout <<"Introduce tu email:";
        cin >> remail;

        cout <<"Introduce tu dni:";
        cin >> rdni;

        cout <<"Introduce una contrasena:";
        cin >> rpass1;

        cout <<"Repite la contrasena:";
        cin >> rpass2;

        if(rpass1.compare(rpass2)!=0){
                cout <<"Las contrasenas no son iguales!" << endl;
                while(!success) {
                    cout <<"Introduce una contrasena:";
                    cin >> rpass1;

                    cout <<"Repite la contrasena:";
                    cin >> rpass2;

                    if(rpass1.compare(rpass2) != 0){
                        success=true;
                    }

                }
        }else{
            success = true;
        }

        if(success){
            Cliente* c = new Cliente(gestor->createID(), remail, rpass1, rnom, rape, rdni);
            gestor->registrarCliente(c);
            cout <<"El usuario " << rnom << " " << rape << " ha sido correctamente registrado" << endl;
            system("pause");
        }

    }
    if (elec==2)
    {
        limpiarPantalla();

        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                         Login" << endl;
        cout <<"----------------------------------------------------------" << endl;


        cout <<"Has elegido Logearse!" << endl;

        string lemail;
        string lpass;
        Cliente* user;
        boolean correct=false;



        do{
            cout <<"Introduce tu email:";
            cin >> lemail ;
        }while(gestor->getCliente(lemail)==nullptr);
        user=gestor->getCliente(lemail);

        do{
            cout <<"Introduce una contrasena:";
            cin >> lpass ;

        //if(user->getPass()==lpass){
        if(user->getPass()==lpass){
            correct=true;
            cout <<"Has iniciado sesion correctamente!\n";
            system("pause");
            menuUsuario(gestor->getCliente(lemail));
        }

        }while(correct==false);


    }
    if (elec==3)
    {
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                    Management Tool" << endl;
        cout <<"----------------------------------------------------------" << endl;


        string lemail;
        string lpass;
        Administrador* admin;
        boolean correct=false;



        do{
            cout <<"Introduce tu email:";
            cin >> lemail;

        }while(gestor->getAdministrador(lemail) == nullptr);
        admin=gestor->getAdministrador(lemail);

        do{
            cout <<"Introduce una contrasena:";
            cin >> lpass;
        cout << endl;

        if(admin->comprobarContrasenya(lpass)){
            correct=true;
            cout <<"Has iniciado sesion correctamente!";
            system("pause");
            menuAdmin();
        }

        }while(correct==false);



        return 0;
    }
    if (elec==4)
    {
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Hasta la proxima!" << endl;
        cout <<"----------------------------------------------------------" << endl;
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

void menuUsuario(Cliente* c)
{
    Gestor* gestor = new Gestor(false);
    do{
    limpiarPantalla();
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                DeustoRental Company!" << endl;
    cout <<"                   Menu de Cliente" << endl;
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                  Bienvenido "<<c->getNombre()<<" "<<c->getApellido()<<"!"<< endl;

    int elec;

    do
    {

        cout <<"Que desea?\n" << endl;

        cout <<"1. Hacer una reserva" << endl;
        cout <<"2. Mis Reservas" << endl;
        cout <<"3. Exit\n" << endl;

        cin >> elec;



    } while ( elec < 1 || elec > 3 );
    if (elec==1){
        int elec1;
        string fecha_i;
        string fecha_f;

        limpiarPantalla();
        cout << "----------------------------------------------------------" << endl;
        cout << "                DeustoRental Company!" << endl;
        cout << "                   Crear Reserva" << endl;
        cout << "----------------------------------------------------------" << endl;

        cout <<"Introduce el CP del concesionario mas cercano:";
        cin >> elec1;

        //Agencia* aa = gestor->getAgencia(elec1);
        Agencia* aa = new Agencia(elec1, "", "", "", 1);
        gestor->getCoches(aa);

        cout<<"Introduce el codigo del vehiculo deseado:"<<endl;
        cin >> elec1 ;

        cout<<"Introduce la fecha de inicio:"<<endl;
        cin >> fecha_i ;

        cout<<"Introduce la fecha de fin:"<<endl;
        cin >> fecha_f ;

        Coche* coche = new Coche("Ford", "GT", "0454KFD", 1250.3, 2, "Supercoche", 0);

        //Reserva* r = new Reserva(fecha_i, fecha_f,elec1, c->getDni(), coche, aa);

        cout<<"Reserva realizada con exito!"<<endl;


        system("pause");

    }
    if (elec==2){
        limpiarPantalla();
        cout << "----------------------------------------------------------" << endl;
        cout << "                DeustoRental Company!" << endl;
        cout << "                   Menu de Cliente" << endl;
        cout << "----------------------------------------------------------" << endl;

        /*
        Reserva** misReservas = gestor.getReservas(c);
        for(int i = 0; i < sizeof(misReservas) / sizeof(Reserva*); i++){
            cout << misReservas[i]->toString() << endl;
        }
        */
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
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                DeustoRental Company!" << endl;
    cout <<"                   Admin Menu" << endl;
    cout <<"----------------------------------------------------------" << endl;
    cout <<"                  Bienvenido!";

    Gestor* gestor = new Gestor(true);
    int elec;

    do
    {

        cout <<"Que desea?\n" << endl;

        cout <<"1. Crear Administrador" << endl;
        cout <<"2. Listar Reservas" << endl;
        cout <<"3. Listar Vehiculos" << endl;
        cout <<"4. Listar Agencias" << endl;
        cout <<"5. Exit\n" << endl;

        cin >> elec;



    } while ( elec < 1 || elec > 5 );
    if (elec==1){
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Register Admin" << endl;
        cout <<"----------------------------------------------------------" << endl;


        int id;
        string remail;
        string rpass1;
        string rpass2;
        boolean success=false;

        cout <<"Introduce un Email:";
        cin >> remail ;
        cout <<"" << endl;


        cout <<"Introduce una contrasena:";
        cin >> rpass1 ;
        cout <<"" << endl;

        cout <<"Repite la contrasena:";
        cin >> rpass2;
        cout << "" << endl;

        if(rpass1.compare(rpass2)!=0){
            cout <<"Las contrasenas no son iguales!" << endl;
            while(!success) {
                cout <<"Introduce una contrasena:";
                cin >> rpass1;

                cout <<"Repite la contrasena:";
                cin >> rpass2;

                if(rpass1.compare(rpass2) != 0){
                    success=true;
                }

            }
        }
        Administrador* a = new Administrador(gestor->createAdminID(),remail,rpass1);
        cout <<"El Administrador [" << remail <<"] ha sido correctamente registrado" << endl;
        system("pause");
    }
    if (elec==2){
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Listar Reservas" << endl;
        cout <<"----------------------------------------------------------" << endl;
        gestor->getReservas();
    }
    if (elec==3){
        int elec1;
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Listar Vehiculos" << endl;
        cout <<"----------------------------------------------------------" << endl;
        cout <<"Introduce el codigo de la agencia cuyos vehiculos quieres listar:";
        cin >> elec1;
        Agencia* aa = gestor->getAgencia(elec1);
        Coche** listaCoches = gestor->getCoches(aa);

        cout <<"Aqui tendria que estar el listado de coches jj";

        system("pause");
    }
    if (elec==4){
        limpiarPantalla();
        cout <<"----------------------------------------------------------" << endl;
        cout <<"                DeustoRental Company!" << endl;
        cout <<"                   Listar Agencias" << endl;
        cout <<"----------------------------------------------------------" << endl;
        gestor->getAgencias();
    }

    if (elec==5){
        cout <<"Hasta Luego!";
        exit(0);
    }
    }while(true);
}
