#include "Gestor.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

Gestor::Gestor(bool isAdmin){
	this->isAdmin = isAdmin;
}

void Gestor::registrarCliente(Cliente* c){
	if(getCliente(c->getEmail()) == nullptr){
        ofstream clientesFile;
        clientesFile.open("datos/clientes.dat", ios_base::app);
        clientesFile << c->toString();
    } else{
        cout << "ERROR! CLIENTE YA EXISTE!" << endl;
    }
}

Cliente* Gestor::getCliente(string email) {
    ifstream infile("datos/clientes.dat");
    string line;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[6];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            parametros[i] = valor;
            i++;
        }
        if(parametros[1].compare(email) == 0){
            Cliente* c = new Cliente(stoi(parametros[0]), parametros[1], parametros[2], parametros[3], parametros[4], parametros[5]);
            return c;
        }
    }

    return nullptr;
}

Coche** Gestor::getCoches(Agencia* agencia) {
    ifstream infile("datos/coches.dat");
    string line;
    int found = 0;

    vector<Coche*> result;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[7];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            parametros[i] = valor;
            i++;
        }

        if(stoi(parametros[6]) == agencia->getCodigo()){
            Coche* c = new Coche(parametros[0], parametros[1], parametros[2], stof(parametros[3]), stoi(parametros[4]), parametros[5], agencia);
            result.push_back(c);
            found++;
        }

    }
    Coche** array = new Coche*[found];
    copy(result.begin(), result.end(), array);
    return array;
}

Administrador* Gestor::getAdministrador(string email) {
    ifstream infile("datos/administradores.dat");
    string line;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[3];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            parametros[i] = valor;
            i++;
        }
        if(parametros[1].compare(email) == 0){
            Administrador* a = new Administrador(stoi(parametros[0]), parametros[1], parametros[2]);
            return a;
        }
    }
    return nullptr;
}

Agencia **Gestor::getAgencias() {
    int nAgencias = countLines("datos/agencias.dat");
    ifstream infile("datos/agencias.dat");
    Agencia **array = new Agencia*[nAgencias];
    int j = 0;
    string line;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[5];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            parametros[i] = valor;
            i++;
        }
        Agencia* a = new Agencia(stoi(parametros[0]), parametros[1], parametros[2], parametros[3], stoi(parametros[4]));
        array[j] = a;
        j++;
    }
    return array;
}

int Gestor::countLines(string filename) {
    int count = 0;
    string line;
    ifstream file(filename);
    while (getline(file, line))
        count++;
    return count;
}

void Gestor::addAgencia(Agencia *a) {
    if(getAgencia(a->getCodigo()) == nullptr){
        ofstream agenciasFile;
        agenciasFile.open("datos/agencias.dat", ios_base::app);
        agenciasFile << a->toString();
    } else{
        cout << "ERROR! AGENCIA YA EXISTE!" << endl;
    }
}

Agencia *Gestor::getAgencia(int codigo) {
    ifstream infile("datos/agencias.dat");
    string line;

    while (getline(infile, line)){
        istringstream ss(line);
        string* parametros = new string[5];
        string valor;
        int i = 0;

        while (getline(ss, valor, ';')) {
            parametros[i] = valor;
            i++;
        }
        if(stoi(parametros[4]) == codigo){
            Agencia* a = new Agencia(stoi(parametros[0]), parametros[1], parametros[2], parametros[3], stoi(parametros[4]));
            return a;
        }
    }

    return nullptr;
}
