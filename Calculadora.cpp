#include <iostream>
using namespace std;

float suma(float num1, float num2){
    float resultado = 0;
    resultado = num1+num2;
    return resultado;
}

float resta(float num1, float num2){
    float resultado = 0;
    resultado = num1-num2;
    return resultado;
}

float multiplicacion(float num1, float num2){
    float resultado = 0;
    resultado = num1*num2;
    return resultado;
}

string division(float num1, float num2){
    string resultado = "";
    float operacion = num1/num2;
    if (num2==0){
        resultado = "Operacion no permitida";
    } else {
        operacion = num1/num2;
        resultado = to_string(operacion);
    }
    return resultado;
}

int main(void){
    int resultado = 0;
    string numero1,numero2 = "";

    cout << "Ingrese primer numero";
    cin >> numero1;
    cout << "Ingrese segundo numero";
    cin >> numero2;

     float a = stof(numero1);
     float b = stof(numero2);

    cout << a << " + " << b << " = " << suma(a,b) << endl;
    cout << a << " - " << b << " = "<< resta(a,b) << endl;
    cout << a << " * " << b << " = "<< multiplicacion(a,b) << endl;
    cout << a << " / " << b << " = "<< division(a,b) << endl;
}