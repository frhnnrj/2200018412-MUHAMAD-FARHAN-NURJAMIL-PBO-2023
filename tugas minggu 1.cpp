#include <iostream>
using namespace std;

int main() {
    // Variabel dan tipe data
    int angka = 5;
    
    // Output
    cout << "Angka: " << angka << endl;

    // Perulangan for
    for (int i = 1; i <= angka; i++) {
        // Percabangan if
        if (i % 2 == 0) {
            cout << i << " adalah angka genap" << endl;
        } else {
            cout << i << " adalah angka ganjil" << endl;
        }
    }

    // Perulangan while
    int j = 1;
    while (j <= angka) {
        cout << "Iterasi while ke-" << j << endl;
        j++;
    }

    // Perulangan do-while
    int k = 1;
    do {
        cout << "Iterasi do-while ke-" << k << endl;
        k++;
    } while (k <= angka);

    // Array satu dimensi
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Elemen array satu dimensi: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Array multidimensi
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Elemen matriks: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

