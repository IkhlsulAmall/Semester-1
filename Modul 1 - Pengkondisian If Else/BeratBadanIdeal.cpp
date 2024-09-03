#include <iostream>
using namespace std;

int main(){
    float BMI,berat,tinggi,tinggi2;
    char ulang;

    cout << "Masukkan tinggi badan (cm) : ";cin >> tinggi; // Untuk Memasukkan nilai tinggi badan
    cout << "Masukkan berat badan (kg) : ";cin >> berat; // Untuk Memasukkan nilai berat badan
    tinggi2 = tinggi / 100; // Disini saya mengubah nilai tinggi badan yang awalnya cm menjadi meter
    BMI = (berat/(tinggi2*tinggi2)); // Rumus mencari tau berat badan ideal
    cout << "\nHasil:";
    cout << "\nBMI        = " << BMI; 

    // Dibawah ini proses terjadinya pengkondisian apakah mengetahui berat badan ideal
    if(BMI < 18.5){
        cout << "\nKategori   = Berat badan kurang\n";
    } else if(BMI <= 22.9 && BMI >= 18.5){
        cout << "\nKategori   = Berat badan normal\n";
    } else if(BMI <= 29.9 && BMI >= 23){
        cout << "\nKategori   = Berat badan berlebih\n";
    }else{
        cout << "\nKategori   = Obesitas\n";
    }

    return 0;
}