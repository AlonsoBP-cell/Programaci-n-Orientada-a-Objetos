#include <iostream>
#include <windows.h>
using namespace std;

//Operadores lógicos
//Or ||
//And &&
string abrirCofre(bool tieneLlave){
   string respuesta = "";

   if (tieneLlave == true){
       respuesta = "Cofre abierto";
   } else {
       respuesta = "Vaya a buscar la llave";
   }
   
   return respuesta;
}

string entrarArea(int level,bool tieneLlave){
    string respuesta = "";
if (level >= 7 && tieneLlave == true){
    respuesta = "Ingresando al area";
} else {
    respuesta = "No puede ingresar aun";
}
    return respuesta;
}

int main() {
SetConsoleOutputCP(CP_UTF8);

cout << "\n" << endl;

string name = "Eva";
int level = 1;
int life = 100;
int armor = 50;
float speed = 4.5;
float damage = 75;
bool isItAlive = true;
int bombs = 3;
bool isItPoweredUp = false;
bool tieneLlave = false;

string nameEnemy = "Adam";
int lifeEnemy = 30;
int armorEnemy = 10;
float speedEnemy = 2.5;
float damageEnemy = 50;
bool isItAliveEnemy = true;
int bombsEnemy = 0;
bool isItPoweredUpEnemy = false;

cout << "===============" << endl;
cout << "Ficha tecnica de personaje inicial" << endl;
cout << "===============" << endl;

cout << "Nombre Personaje: " << name << endl;
cout << "Nivel Personaje: " << level << endl;
cout << "Vida Personaje: " << life << endl;
cout << "Armadura Personaje: " << armor << endl;
cout << "Velocidad Personaje: " << speed << endl;
cout << "Daño Personaje: " << damage << endl;
cout << "Bombas de Personaje: " << bombs << endl;
cout << "El Personaje Sigue Vivo?: " << isItAlive << endl;
cout << "El Personaje Tiene Turbo?: " << isItPoweredUp << endl;
cout << "Abrir Cofre " << abrirCofre(tieneLlave) << endl;
cout << "Area Nivel 7 \n Bloqueada con llave" << endl;
cout << "Ingresa? " << entrarArea(level,tieneLlave) << endl;

cout << '\n' << endl;

int lifeFinal = 0;
lifeFinal = life - damageEnemy;
life = lifeFinal;

int armorFinal = 0;
armorFinal = armor - damageEnemy;
armor = armorFinal;

//Si la vida del personaje es menor a 51, entonces el personaje tiene turbo
if (life < 51) {
    isItPoweredUp = true;
} else {
    isItPoweredUp = false;
}

tieneLlave = true;
level = 4;

cout << "===============" << endl;
cout << "Ficha tecnica de personaje final" << endl;
cout << "===============" << endl;

cout << "Nombre Personaje: " << name << endl;
cout << "Nivel Personaje: " << level << endl;
cout << "Vida Personaje: " << life << endl;
cout << "Armadura Personaje: " << armor << endl;
cout << "Velocidad Personaje: " << speed << endl;
cout << "Daño Personaje: " << damage << endl;
cout << "Bombas de Personaje: " << bombs << endl;
cout << "El Personaje Sigue Vivo?: " << isItAlive << endl;
cout << "El Personaje Tiene Turbo?: " << isItPoweredUp << endl;
cout << "Abrir Cofre " << abrirCofre(tieneLlave) << endl;
cout << "Area Nivel 7 \n Bloqueada con llave" << endl;
cout << "Ingresa? " << entrarArea(level,tieneLlave) << endl;
return 0;
}