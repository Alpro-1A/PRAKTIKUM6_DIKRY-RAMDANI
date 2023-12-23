#include <iostream>
using namespace std;

//Mencari Nilai Tertinggi Dengan Array
int main() {
    cout << "----------------------------------------" << endl;
    cout << "       Mencari nilai Tertinggi          " << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;

    cout << "Nilai: " << endl; // Menampilkan semua angka dari element array
    int Array[7] = {3, 12, 10, 32, 56, 22, 15};
    for (int i = 0; i < 7; i++) {
        cout << "Nilai " << i + 1 << ": " << Array[i] << endl;
    }

    int nilaiTertinggi;
    int index = 0;

    for (int i = 1; i < 7; i++) {     // mencari nilai tertinggi array beserta index nya
        if (Array[i] >  nilaiTertinggi) {
             nilaiTertinggi = Array[i];
            index = i;
        }
    }

    cout << endl;

    cout << "nilai tertinggi: " <<  nilaiTertinggi << endl;     // hasil dari nilai tertinggi dan index nya
    cout << "Index dari nilai tertinggi: " << index << endl;

    return 0;
}
