#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

class Personaje{
    //Los ATRIBUTOS de la clase son privados, solo pertenecen a la clase 
//E indican como es la clase   
private: 
    string nombre;
    int vida = 100;
    bool vivo = true;
    int danio = 0;
// Para acceder a los atributos privados de la clase, emplearemos METODOS publicos
//Los metodos indican que puede hacer un objeto de esa clase
public:
//El CONSTRUCTOR creará objetos basados en la clase cuando llamamos la clase
//Esto nos permite manejar el concepto ENCAPSULACIÓN
Personaje(string nombreJugador,int vidaJugador,bool estaVivo, int danioJugador):
nombre(nombreJugador),vida(vidaJugador),vivo(estaVivo),danio(danioJugador){}

    void avanzar(string nombrePersonaje){
    cout << nombre << " avanza..." << endl;
}

void saltar(string nombrePersonaje){
    cout << nombre << " salta..." << endl;
}

void recibirDanio(string nombrePersonaje, int danio){
    // vida = vida - danio;
    // forma abreviada de realizar una operacion aritmetica de suma o resta
    vida -= danio;
    //if (vida < 0)
    //    vida = 0;
    if (vida < 0) {
        vida = 0;
        vivo = false;
    }
    cout << nombre << " recibió " << danio << " de daño." << endl;
    cout << "Su vida restante es " << vida << "." << endl;
}

void verEstado(string nombrePersonaje){
    string alerta = "";
    if (0 < vida && vida <= 30){
        alerta = "Vida demasiado baja";
    } else {
        alerta = "";
    }
    cout << "Estado de " << nombre << endl;
    cout << "Vida restante: " << vida << endl;
    cout << "¿Está vivo? " << (vivo == true ? "Si" : "No") << endl;
    cout << alerta << endl;
   
}

};

int main(){
SetConsoleOutputCP(CP_UTF8);

int opcion = 0;
string nombre = "";
int vida = 0;
bool vivo = true;
int danio = 0;

cout << "Indique el nombre de su personaje" << endl;
cin >> nombre;
cout << "Indique la vida inicial de " << nombre << endl;
cin >> vida;


//Instancia de la clase
Personaje jugador(nombre,vida,true,danio);



while (opcion != 5 && vivo == true ){

    cout << "\nSeleccione su opción" << endl;
    cout << "[1] Avanzar" << endl;
    cout << "[2] Saltar" << endl;
    cout << "[3] Recibir daño" << endl;
    cout << "[4] Revisar estado Poo" << endl; 
    cout << "[5] Salir" << endl; 
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    jugador.avanzar(nombre);
        break;

    case 2:
    jugador.saltar(nombre);
    break;

    case 3:
    cout << "Ingrese el daño a recibir" << endl;
    cin >> danio;
   jugador.recibirDanio(nombre,danio);
    break;

    case 4:
    jugador.verEstado(nombre);
    break;

    case 5:
    cout << "Saliendo..." << endl;
    exit(0);
    break;

    default:
    cout << "Opcion ingresada NO corresponde...\n Intente nuevamente..." << endl;
    }
}   
return 0;
}