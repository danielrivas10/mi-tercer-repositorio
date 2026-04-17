#include <iostream>
using namespace std;

int main() {
int a, b;

cout << "Ingrese el primer número:";
cin >> a;

cout << "ingrese el segundo número";
cin >> b;

int suma = a + b;
int diferencia = a - b;
int producto = a * b;
int división = a / b;
int división2 = a % b;

cout << "Suma: " << suma << endl;
cout << "Diferencia: " << diferencia << endl;
cout << "Producto: " << producto << endl;
cout << "División entera: " << división << endl;
cout << "Resto de la división: " << división2 << endl;


return 0;

}