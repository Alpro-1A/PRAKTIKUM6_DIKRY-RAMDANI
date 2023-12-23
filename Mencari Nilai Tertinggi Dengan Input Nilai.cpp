#include <iostream>
using namespace std;


int main(){
    //menginput jumlah array yang diinginkan
    int jumlahArray;
    cout << "Masukkan jumlah array : ";
    cin >> jumlahArray;

    //menginput nilai array yang diinginkan
    int *array = new int [jumlahArray];
    cout << "Masukkan " << jumlahArray << " nilai array nya : \n";


    //output jumlah array yang telah di masukan sebelum nya
    for (int i=0; i < jumlahArray; ++i) {
    cout << "Nilai Array ke- " << i + 1 << " : ";
    cin >> array[i];}


    int nilaiTertinggi = array[0];
    int indeksTertinggi = 0;


    for (int i = 1; i< jumlahArray; ++i) {
    if (array[i] > nilaiTertinggi) {
    nilaiTertinggi = array[i];
    indeksTertinggi = i;}}


    //hasil nilai ertinggi yang telah di masukan
    cout << "Nilai tertingginya : " << nilaiTertinggi << "\n";
    if (indeksTertinggi != -1) {
    cout << "Nilai tersebut ditemukan pada indeks : ke-" << indeksTertinggi << "\n";} else {
    cout << "Nilai tersebut tidak ditemukan dalam array.\n"; }


    return 0; }


