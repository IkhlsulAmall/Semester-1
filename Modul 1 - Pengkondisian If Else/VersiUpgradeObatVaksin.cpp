#include <iostream>
#include <ctime> // Untuk mendapatkan waktu tahun saat ini

using namespace std;

int main() {
    int tahun_lahir, umur;
    char ulang;

    // Mendapatkan tahun saat ini
    time_t t = time(0);
    tm* now = localtime(&t);
    int tahun_sekarang = now->tm_year + 1900; // Menghitung tahun saat ini

    do {
        while (true) {
            cout << "Masukkan tahun lahir: ";
            cin >> tahun_lahir;

            // Periksa apakah input valid
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nInput tidak valid. Masukkan angka.\n";
            } else {
                break;
            }
        }

        // Hitung umur berdasarkan tahun saat ini
        umur = tahun_sekarang - tahun_lahir;

        cout << "\nHasil:";
        cout << "\nUmur Anda  : " << umur; 

        // Proses untuk mengetahui vaksin mana yang cocok
        cout << "\nVaksin yang cocok:\n";
        if (umur >= 59 && umur <= 80) {
            cout << "- Pfizer \n- Moderna \n- Sinovac \n- Sinopharm ";
        }
        else if (umur >= 55 && umur < 59) {
            cout << "- Pfizer \n- Moderna \n- Sinovac \n- Novavax ";
        }
        else if (umur >= 18 && umur < 55) {
            cout << "- Pfizer \n- Moderna \n- Sinovac \n- AstraZeneca \n- Novavax \n- Sinopharm";
        } else if (umur >= 12 && umur < 18) {
            cout << "- Pfizer";
        } else { 
            cout << "- Tidak ada vaksin yang cocok"; // Hasil ketika tidak ada vaksin yang cocok
        }
        
        cout << "\n=====================================";
        cout << "\nApakah Anda ingin menghitung ulang? (y/n): ";
        cin >> ulang;
        cout << "=====================================\n\n";
        
    } while (ulang == 'y' || ulang == 'Y');
    cin.get();
    cin.get();
    return 0;
}