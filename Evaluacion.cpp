#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
//Clase de personaje
class Tributo {
//Atributos privados
private:
    string nombre;
    int vida;
    bool estaVivo;
    float danio;
//Métodos públicos
public:
//Constructor
    Tributo(string nombre,int vida,bool estaVivo,float danio):
    nombre(nombre),vida(vida),estaVivo(estaVivo),danio(danio){}

    string getNombre(){
        return nombre;
    }

    int getVida(){
        return vida;
    }

    bool getVivo(){
        return estaVivo;
    }

    float getDanio(){
        return danio;
    }

    void getEstadisticas(){
        cout << nombre << endl;
        cout << "Vida: " << vida << endl;
        cout << "Daño: " << danio << endl;
        cout << "Proveniente del Distrito 12" << endl;
    }

    void esconderse(){
        cout << nombre << " se esconde" << endl;
        cout << "Regeneras +5 de vida!" << endl;
        vida = vida + 5;
    }
    
    void revisarEstado(){
        cout << nombre << " se sienta a revisar su estado" << endl;
        cout << "Tienes " << vida << " de vida" << endl;
        if (estaVivo==true){
            cout << "Sigues con vida" << endl;
        } else {
            cout << "Has perecido" << endl;
        }
    }

    void rendicionTemprana(){
        cout << nombre << " se ha rendido" << endl;
    }

    void dirigirCentro(){
        int opcionArma;
        cout << nombre << " va corriendo hacia el centro de la arena" << endl;
        cout << "¿Que arma elegirás?" << endl;
    }

    int nuevaVida(int nuevaVida){
        vida = nuevaVida;
    }

    float nuevoDanio(float nuevoDanio){
        danio = nuevoDanio;
    }
        
    bool muerte(){
        estaVivo = false;
    }
};

class Arma {
private:
    string nombreArma;
    float ataqueArma;
    bool tienesArma;
public:
    Arma(string nombreArma,float ataqueArma,bool tienesArma):
    nombreArma(nombreArma),ataqueArma(ataqueArma),tienesArma(tienesArma){}

    string getNombreArma(){
        return nombreArma;
    }

    float getAtaqueArma(){
        return ataqueArma;
    }

    void revisarInventario(){
        if (tienesArma == 0){
            cout << "Tus manos están vacías" << endl;
        }
        if (tienesArma == 1){
        cout << nombreArma << endl;
        cout << "Esta arma te da un bonus de " << ataqueArma << " a tu daño" << endl;
        }
    }

   void dirigirCentro(){
        cout << "Empuñas " << nombreArma << endl;
    }

    
};

class Enemigo {
private:
    string nombreEnemigo;
    int vidaEnemigo;
    bool estaVivoEnemigo;
    float danioEnemigo;
public:
    Enemigo(string nombre,int vida,bool estaVivo,float danio):
    nombreEnemigo(nombre),vidaEnemigo(vida),estaVivoEnemigo(estaVivo),danioEnemigo(danio){}

    string getNombre(){
        return nombreEnemigo;
    }

    int getVida(){
        return vidaEnemigo;
    }

    bool getVivo(){
        return estaVivoEnemigo;
    }

    float getDanio(){
        return danioEnemigo;
    }

    int nuevaVida(int nuevaVida){
        vidaEnemigo = nuevaVida;
    }

    bool muerte(){
        estaVivoEnemigo = false;
    }

   void getEstadisticas(){
        cout << nombreEnemigo << endl;
        cout << "Vida: " << vidaEnemigo << endl;
        cout << "Daño: " << danioEnemigo << endl;
        cout << "Proveniente del Distrito 2\n" << endl;
    }
};

int main(){

SetConsoleOutputCP(CP_UTF8);
//Datos Personaje
string nombre = "";
int vida = 0;
int danio = 0;
bool estaVivo = true;

//Datos Arma
string nombreArma = "";
float ataqueArma = 0;
bool tienesArma = false;

//Datos Enemigo
string nombreEnemigo = "";
int vidaEnemigo = 0;
int danioEnemigo = 0;
bool estaVivoEnemigo = true;


int opcionMenu = 0;

Tributo jugador(nombre,vida,estaVivo,danio);
Tributo tributo1("Katniss",40,true,5.5);
Tributo tributo2("Prim",20,true,7.7);

Arma player("sus manos",0,0);
Arma sinsajo("Sinsajo",12.5,1);
Arma espada("Espada de los Distritos",7.5,1);
Arma real("Navaja Real del Capitolio",6.5,1);


Enemigo tributo3("Cato",50,true,5.5);


cout << "============================================" << endl;
cout << "LOS JUEGOS DEL HAMBRE" << endl;
cout << "============================================ \n" << endl;

cout << "Bienvenidos sean todos a Los Juegos del Hambre" << endl;
cout << "Y que la suerte esté siempre de su lado" << endl;
cout << "¿Cuál será su tributo a elegir? \n" << endl;

cout << "[1] Katniss Everdeen" << endl;
cout << "[2] Prim Everdeen" << endl;
cin >> opcionMenu;

switch(opcionMenu){
    case 1:
    jugador = tributo1;
    tributo1.getEstadisticas();
    cout << "Una sabía elección, sin duda\n" << endl;
    break;

    case 2:
    jugador = tributo2;
    tributo2.getEstadisticas();
    cout << "Una sabía elección, sin duda\n" << endl;
    break;
}

while (opcionMenu > 2 || opcionMenu < 1){
    cout << "Elija una opción válida" << endl;
    cin >> opcionMenu;
    switch(opcionMenu){
    case 1:
    jugador = tributo1;
    tributo1.getEstadisticas();
    cout << "Una sabía elección, sin duda\n" << endl;
    break;

    case 2:
    jugador = tributo2;
    tributo2.getEstadisticas();
    cout << "Una sabía elección, sin duda\n" << endl;
    break;
}
}

int dia = 1;
int opcion = 0;
int opcionArma = 0;
int confrontacion = 0;

while(opcion !=5 && dia !=7 && confrontacion == 0){
    cout << "===== DÍA " << dia << " =====" << endl;
    cout << "Haz tu decisión" << endl;

    cout << "============================================" << endl;
    cout << "[1] Dirigirte al centro de la arena" << endl;
    cout << "[2] Esconderte" << endl;
    cout << "[3] Revisar estado" << endl;
    cout << "[4] Revisar inventario" << endl;
    cout << "[5] Rendirte" << endl;
    cout << "[6] Entrar en combate" << endl;
    cout << "============================================" << endl;
    cin >> opcion;

switch(opcion){
    case 1:
    jugador.dirigirCentro();
    cout << "[1] Sinsajo (Arco)" << endl;
    cout << "[2] Espada de los Distritos (Espada)" << endl;
    cout << "[3] Navaja Real del Capitolio (Navaja) \n" << endl;
    cin >> opcionArma;
    switch(opcionArma){
            case 1:
            player = sinsajo;
            player.dirigirCentro();
            break;

            case 2:
            player = espada;
            player.dirigirCentro();
            break;

            case 3:
            player = real;
            player.dirigirCentro();
            break;

            default:
            cout << jugador.getNombre() << " no elegió ningún arma" << endl;
        }
    cout << "El día " << dia << " ya ha terminado \n" << endl;
    dia = dia+1;
    tienesArma = true;
    break;

    case 2:
    jugador.esconderse();
    cout << "El día " << dia << " ya ha terminado \n" << endl;
    dia = dia+1;
    break;

    case 3:
    jugador.revisarEstado();
    cout << "El día " << dia << " ya ha terminado \n" << endl;
    dia = dia+1;
    break;

    case 4:
    player.revisarInventario();
    cout << "El día " << dia << " ya ha terminado \n" << endl;
    dia = dia+1;
    break;

    case 5:
    jugador.rendicionTemprana();
    cout << "Gracias por participar como tributo en Los Juegos del Hambre!" << endl;
    cout << tributo3.getNombre() << " ha ganado Los Juegos del Hambre!" << endl;
    exit(0);
    break;
    
    case 6:
    confrontacion = 1;
    break;
    
    default:
    cout << "Ingrese una opción válida" << endl;
    break;
}
}

cout << "============================================" << endl;
if (dia==7 || confrontacion==1){
    cout << "Ha llegado el momento de la confrontación! Que empiece el baño de sangre! " << endl;
    cout << jugador.getNombre() << " se enfrentará contra Cato! \n" << endl;
    tributo3.getEstadisticas();
}

jugador.nuevoDanio(jugador.getDanio()+player.getAtaqueArma());

while (jugador.getVivo() == true && tributo3.getVivo() == true ){
cout << tributo3.getNombre() << " ataca ferozmente a " << jugador.getNombre() << endl;
jugador.nuevaVida(jugador.getVida()-tributo3.getDanio());
cout << jugador.getNombre() << " ha recibido " << tributo3.getDanio() << " de daño" << endl;
cout << jugador.getNombre() << " tiene " << jugador.getVida() << " de vida\n" << endl;

if(jugador.getVida() <= 0){
jugador.muerte();
cout << "============================================" << endl;
cout << tributo3.getNombre() << " ha ganado Los Juegos del Hambre!" << endl;
cout << "============================================" << endl;
break;
}


cout << jugador.getNombre() << " ataca ferozmente a " << tributo3.getNombre() << " con " << player.getNombreArma() << endl;
tributo3.nuevaVida(tributo3.getVida()-jugador.getDanio());
cout << tributo3.getNombre() << " ha recibido " << jugador.getDanio() << " de daño" << endl;
cout << tributo3.getNombre() << " tiene " << tributo3.getVida() << " de vida\n" << endl;

if(tributo3.getVida() <= 0){
tributo3.muerte();
cout << "============================================" << endl;
cout << jugador.getNombre() << " ha ganado Los Juegos del Hambre!" << endl;
cout << "============================================" << endl;
break;
}

}
}