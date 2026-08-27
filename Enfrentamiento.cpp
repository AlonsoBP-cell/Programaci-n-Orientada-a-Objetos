#include <iostream>
#include <windows.h>
using namespace std;

int main() {
SetConsoleOutputCP(CP_UTF8);
            
//Crear un personaje de juego con atributos y valores
//Debe tener al menos 6 atributos
//Debe tener al menos 1 atributo de cada tipo (string, float, bool, int)

//Definición de personaje
string name = "Eva";
int life = 100;
int armor = 50;
float speed = 4.5;
float damage = 75;
bool isItAlive = true;
int bombs = 3;
bool isItPoweredUp = false;

//Definición de enemigo
string nameEnemy = "Adam";
int lifeEnemy = 30;
int armorEnemy = 10;
float speedEnemy = 2.5;
float damageEnemy = 50;
bool isItAliveEnemy = true;
int bombsEnemy = 0;
bool isItPoweredUpEnemy = false;

//Ficha de personaje
cout << "===============" << endl;
cout << "Ficha tecnica de personaje inicial" << endl;
cout << "===============" << endl;

cout << "Nombre Personaje: " << name << endl;
cout << "Vida Personaje: " << life << endl;
cout << "Armadura Personaje: " << armor << endl;
cout << "Velocidad Personaje: " << speed << endl;
cout << "Daño Personaje: " << damage << endl;
cout << "Bombas de Personaje: " << bombs << endl;
cout << "El Personaje Sigue Vivo?: " << isItAlive << endl;
cout << "El Personaje Tiene Turbo?: " << isItPoweredUp << endl;


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

cout << "===============" << endl;
cout << "Ficha tecnica de personaje final" << endl;
cout << "===============" << endl;

cout << "Nombre Personaje: " << name << endl;
cout << "Vida Personaje: " << life << endl;
cout << "Armadura Personaje: " << armor << endl;
cout << "Velocidad Personaje: " << speed << endl;
cout << "Daño Personaje: " << damage << endl;
cout << "Bombas de Personaje: " << bombs << endl;
cout << "El Personaje Sigue Vivo?: " << isItAlive << endl;
cout << "El Personaje Tiene Turbo?: " << isItPoweredUp << endl;
//1.Muestre una ficha tecnica de su personaje
//2.Modifique mediante codigo al menos 3 de sus atributos
//3.Muestre la nueva ficha tecnica de su personaje con los atributos modificados
    return 0;
}