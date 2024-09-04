#include <iostream>
using namespace std;

int main() {
    int tahun_lahir,umur,jenis_vaksin;

    cout << "Masukkan tahun lahir : "; // Memasukkan tahun lahir
    cin >> tahun_lahir; 
    cout << "\nHasil :\n";
    cout << "Umur Anda  : " ; // Memasukkan Umur
    cin >> umur;
    cout << "Vaksin yang cocok:\n";
    jenis_vaksin = 2021 - tahun_lahir; // Untuk mengetahui jenis vaksin yang cocok

    // Disini Proses untuk mengetahui vaksin mana yang cocok
    if(jenis_vaksin <= 80 && jenis_vaksin >= 59){
        cout << "- Pfizer \n- Moderna \n- Sinovac \n- Sinopharm ";
    }
    else if(jenis_vaksin <= 59 && jenis_vaksin >= 55){
        cout << "- Pfizer \n- Moderna \n- Sinovac \n- Novavax ";
    }
    else if(jenis_vaksin <= 55 && jenis_vaksin >= 18){
        cout << "- Pfizer \n- Moderna \n- Sinovac \n- AstraZeneca \n- Novavac \n- Sinopharm";
    }else if(jenis_vaksin >= 12 && jenis_vaksin < 18){
        cout << "- Pfizer";
    }else{ 
        cout << "- Tidak ada vaksin yang cocok"; // Hasil ketika tidak ada vaksin yang cocok
    }
   
    return 0;
}