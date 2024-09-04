#include <iostream>
using namespace std;

int main(){
    float BMI,berat,tinggi,tinggi2;
    char ulang;
    do {
    while(true){
    cout << "Masukkan tinggi badan (cm) : ";cin >> tinggi;
    // untuk memeriksa input valid
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nInput tidak valid, Masukkan angka.\n";
    }else{
        break;
    }}

    while(true){ // Untuk memeriksa input valid atau tidak
    cout << "Masukkan berat badan (kg) : ";cin >> berat;
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nInput tidak valid, Masukkan angka.\n";
    }else{
        break;
    }
    }
    tinggi2 = tinggi / 100;
    BMI = (berat/(tinggi2*tinggi2)); 
    cout << "\nHasil:";
    cout << "\nBMI        = " << BMI;  

    if(BMI < 18.5){
        cout << "\nKategori   = Berat badan kurang\n";
    } else if(BMI <= 22.9 && BMI >= 18.5){
        cout << "\nKategori   = Berat badan normal\n";
    } else if(BMI <= 29.9 && BMI >= 23){
        cout << "\nKategori   = Berat badan berlebih\n";
    }else{
        cout << "\nKategori   = Obesitas\n";
    }
    cout << "\n=====================================";
    cout << "\nApakah anda ingin menghitung ulang? \nPilih 'Y' atau 'N' : ";cin >> ulang;
    cout << "=====================================\n"; 
    cin.ignore(1000, '\n'); // Ini berfungsi untuk menghapus buffer atau inputan yang delay
    } while (ulang == 'y' || ulang == 'Y'); //disini untung mengulang program ketika while bersifat true atau bernilai Y
    cin.get();                              
    return 0; 
}
