#include <iostream>

using namespace std;

int main() {

    int col = 0;
    int rig = 0;

    cout << "Inserire le colonne: " << endl;
    cin >> col;
    cout << "Inserire le righe: " << endl;
    cin >> rig;

    int **m = new int*[rig] ;
    // Array allocato dinamicamente che contiene tutti gli indirizzi relative alle righe

    for (int i = 0; i < col; i++) {
        m[i] = new int[col];
        for (int j = 0; j < rig; j++) {
            int r = 0;
            cout << "Inserire il numero: " << endl;
            cin >> r;
            m[i][j] = r;
        }
    }


    for (int i = 0; i < col; i++) {
        for (int j = 0; j < rig; j++) {
            cout << "Numero | " << m[i][j] << endl;
        }
    }

    for (int i = 0; i < col; i++) {
        delete[] m[i]; // Dealloco tutte le righe relative alla matrice
    }

    delete[] m;
    /*
    Differenza tra delete[] e delete:
     -delete[], elimina l'intero array nel nostro caso andremo
      a dealocare ogni singola riga della matrice;
      utilizzato nelle casistiche es -> (int m = new int[10], un array di 10 interi)
     -delete, dealoca la singola variabile es -> (int m = new int, ovvero una singola variabile)
     */


    return 0;
}