#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos vertices quieres añadir: ";
    cin >> n;

    char vertices[n][100];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese las coordenadas del vertice " << i+1 << ": ";
        cin >> vertices[i];
    }

    cout << "Los vertices son:";
    for (int i = 0; i < n; i++) {
        cout << " " << vertices[i];
    }
    cout << endl;

    int c;
    cout << "Cuantas caras desea: ";
    cin >> c;

    char caras[c][100]; 

    cout << "Ingrese los indices de las caras sin dejar espacios entre los numeros. " << endl;

    for (int i = 0; i < c; i++) {
        cout << "Cara: ";
        cin >> caras[i];
    }

    cout << "La figura es: " << endl;
    cout << "Vertices:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "v" << i << ": " << vertices[i] << endl;
    }

    cout << "Caras" << endl;
    for (int i = 0; i < c; i++) {
        cout << "cara " << i+1 << ": " << caras[i] << endl;
    }

   return 0;
}
