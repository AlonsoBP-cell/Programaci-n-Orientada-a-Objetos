#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

class Sobreviviente{
    private:
    int vida;
    string nombre;
    int danio;
    bool vivo;
    int ataque;
    public:
    Sobreviviente(int vidaJugador,string nombreJugador, int danioJugador, bool vivoJugador, int ataqueJugador):
    vida(vidaJugador),nombre(nombreJugador),danio(danioJugador),vivo(vivoJugador), ataque(ataqueJugador){}

    void esconderse(string nombreJugador){
        cout << nombre << " se esconde por el día..." << endl;
    }

    void revisarEstado(string nombreJugador, bool vivoJugador, int vidaJugador){
        cout << "Te sientas a revisar tu estado" << endl;
        cout << "Tienes " << vida << " de vida restante" << endl;
        if (vivo==true){
            cout << "Sigues con vida" << endl;
        } else {
            cout << "Has perecido" << endl;
         }
    }

    void recibirDanio(string nombreJugador, int danioJugador){
        vida -= danio;
        if (vida <= 0){
            vida = 0;
            vivo = false;
        }
        cout << nombre << " ha recibido " << danio << " de daño" << endl;
        cout << nombre << " tiene " << vida << " de vida restante" << endl;
    }

    void atacar(string nombreJugador, int ataqueJugador){
        
    }
};

class Equipamiento{

};



int main(){
    SetConsoleOutputCP(CP_UTF8);
    //Datos personaje
int vida = 0;
string nombre = "";
int danio = 0;
bool vivo = true;
int ataque = 0;


int opcion = 0;
int dia = 1;


cout << "Bienvenido/a a los Juegos del Hambre" << endl;
cout << "Y que la suerte esté siempre de su lado \n" << endl;

cout << "Ingrese el nombre de su sobreviviente" << endl;
cin >> nombre;

cout << "Ingrese su vida inicial" << endl;
cin >> vida;

cin >> ataque;

Sobreviviente Katniss(vida,nombre,danio,vivo,ataque);
Sobreviviente Peeta(vida,nombre,danio,vivo,ataque);

while (opcion !=9 && vivo == true){
    cout << "Haga su selección" << endl;
    cout << "[3] Recibir daño" << endl;
    cout << "[4] Esconderse" << endl;
    cout << "[5] Revisar estado" << endl;
    cout << "[9] Salir del juego" << endl;
    cin >> opcion;
    
    switch(opcion){
        case 3:
        Katniss.recibirDanio(nombre,danio);
        cout << "El día " << dia << " ha pasado" << endl;
        dia = dia+1;
        break;

        case 4:
        Katniss.esconderse(nombre);
        cout << "El día " << dia << " ha pasado" << endl;
        dia = dia+1;
        break;

        case 5:
        Katniss.revisarEstado(nombre,vivo,vida);
        cout << "El día " << dia << " ha pasado" << endl;
        dia = dia+1;
        break;

        case 9:
        cout << "Saliendo..." << endl;
        exit(0);
        break;

        default:
        cout << "Elija una opción viable" << endl;
        break;
    }
}
}