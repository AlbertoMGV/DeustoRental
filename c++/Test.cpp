//
// Created by ivans on 22/05/2018.
//

#include "Test.h"
#include <sstream>
#include <string>
#include <iostream>
#include "Cliente.h"

using namespace std;

int main() {
    Cliente* c = new Cliente(0, "pepe@gmail.com", "pass", "nombre", "apellido", "dni");
    cout << c->toString() << endl;
    test();
    return 0;
}

void test(){
    stringstream ss;
    ss << "ab, " << "cd, " << "df.";
    string s = ss.str();
    cout << s << endl;
}