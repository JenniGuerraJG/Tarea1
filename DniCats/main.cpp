#include <iostream>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <stdlib.h>
using namespace std;

void RecoleccionDatos();

int main() {
    RecoleccionDatos();
    return 0;
}

void RecoleccionDatos() {
    string Especie, NomMas, NomDuenio,SexMas;
    int AniosM;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "ANTES DE PODER INGRESAR AL MENU DEBES LLENAR UN REGISTRO DE DATOS QUE CREERA LA CEDULA DE TU MININO " << endl;
    cout << "====================================================================================================" << endl;
    cout << "Especie: (G para gato/ P para perro):" << endl;
    cin >> Especie;
    while (Especie != "G" && Especie != "P" && Especie != "g" && Especie != "p") {
        cout << "ERROR: DIGITE SOLO G O P" << endl;
        cin >> Especie;
    }
    cout << "Sexo: (H para hembra/ M para macho):" << endl;
    cin >> SexMas;
    while (SexMas != "H" && SexMas != "h" && SexMas != "M" && SexMas != "m") {
        cout << "ERROR: DIGITE SOLO M O H" << endl;
        cin >> SexMas;
    }
    cin.ignore ();
    cout << "Nombre de la mascota: " << endl;
    getline(cin, NomMas);
    transform(NomMas.begin(), NomMas.end(), NomMas.begin(), ::toupper);
    cout << "Anios de la mascota (Anios validos del 1 al 15)" << endl;
    cin >> AniosM;
    while (AniosM<0 || AniosM >15){
        cout << "ERROR INTRODUZCA ANIOS VALIDOS (1-15)" << endl;
        cin >> AniosM;
    }
    cin.ignore ();
    cout << "Nombre del duenio: " << endl;
    getline(cin, NomDuenio);
    transform(NomDuenio.begin(), NomDuenio.end(), NomDuenio.begin(), ::toupper);

    cout << "--------------------------------------------------" << endl;
    cout << "            MICHI REPUBLICA DEL ECUADOR           " << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Nombre de la mascota: " << NomMas << "            n   n" << endl;
    cout << "                                      ( o.o ) " << endl;
    cout << "                                       > ^ < " << endl;
    cout << "Nombre del duenio: " << NomDuenio << endl;
    cout << "Especie: " << Especie << endl;
    cout << "Sexo: " << SexMas << endl;
    cout << "Anios de la mascota: " << AniosM << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "Se ha creado un archivo txt con la cedula" << endl;
    ofstream archivo("cedulas.txt", ios::app);
    if (!archivo.is_open()) {
        cout << "No se puede abrir el archivo" << endl;
        return;
    }
    archivo << "--------------------------------------------------" << endl;
    archivo << "            MICHI REPUBLICA DEL ECUADOR           " << endl;
    archivo << "--------------------------------------------------" << endl;
    archivo << "Nombre de la mascota: " << NomMas << "            n   n" << endl;
    archivo << "                                      ( o.o ) " << endl;
    archivo << "                                       > ^ < " << endl;
    archivo << "Nombre del duenio: " << NomDuenio << endl;
    archivo << "Especie: " << Especie << endl;
    archivo << "Sexo: " << SexMas << endl;
    archivo << "Anios de la mascota: " << AniosM << endl;
    archivo << "--------------------------------------------------" << endl;
        archivo.close();
}



