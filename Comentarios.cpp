#include <iostream>
// Esto es un comentario de codigo
// iostream es una libreria de c++ que permite controlar dispositivos de entrada y salida
using namespace std;

//Vamos a definir un personaje de videojuego
//Definicion de nuestro personaje
string nombreDelfin = "Delfin Quispe";
int vidaDelfin = 500;
int edadDelfin = 48;
bool esAlcaldeDelfin = false;
// 1 es verdadero, 0 es falso
float ratingDelfin = 2.36;

//Definicion del enemigo
string nombreTigresa = "Tigresa del Oriente";
int vidaTigresa = 500;
int edadTigresa = 80;
bool esAlcaldeTigresa = false;
// 1 es verdadero, 0 es falso
float ratingTigresa = 4.0;


int main() {

    cout << "================" << endl;
    cout << "Ficha Tecnica Inicial" << endl;
    cout << "================" << endl;
    cout << "Nombre Personaje: " << nombreDelfin << endl;
    cout << "Vida Personaje: " << vidaDelfin << endl;
    cout << "Edad Personaje: " << edadDelfin << endl;
    cout << "Es alcalde: " << esAlcaldeDelfin << endl;
    cout << "Rating: " << ratingDelfin << endl;

    int vidaFinal = 0;
    vidaFinal = vidaDelfin - ratingTigresa;
    vidaDelfin = vidaFinal;

    cout << "================" << endl;
    cout << "Ficha Tecnica Final" << endl;
    cout << "================" << endl;
    cout << "Nombre Personaje: " << nombreDelfin << endl;
    cout << "Vida Personaje: " << vidaDelfin << endl;
    cout << "Edad Personaje: " << edadDelfin << endl;
    cout << "Es alcalde: " << esAlcaldeDelfin << endl;
    cout << "Rating: " << ratingDelfin << endl;

    return 0;
}