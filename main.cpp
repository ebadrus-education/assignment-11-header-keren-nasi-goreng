#include <iostream>
using namespace std;

void menuUtama() {
}
int main() {
    system("chcp 65001 >nul"); // enable UTF-8 untuk emoji & unicode

    // warna pastel pink
    cout << "\033[38;5;218m";

    cout << "╔═══════════════════════════════════════════════════════╗\n";
    cout << "║        ✨ Blossom Library — Perpustakaan Sakura ✨       ║\n";
    cout << "╚═══════════════════════════════════════════════════════╝\n\n";

    // reset warna
    cout << "\033[95m";

    // cute mascot
    cout << "૮₍ ´ ꒳ `₎ა  ♡  Selamat Datang di Sistem Informasi Perpustakaan\n";

    int pilihan;


    do {
        cout << "\nmenu utama\n";
        cout << "1. cari buku\n";
        cout << "2. pinjam buku\n";
        cout << "3. kembalikan buku\n";
        cout << "4. keluar\n";
        cout << "masukkan pilihan anda: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "fungsi cari buku belum tersedia.\n";
                break;
            case 2:
                cout << "fungsi pinjam buku belum tersedia.\n";
                break;
            case 3:
                cout << "fungsi kembalikan buku belum tersedia.\n";
                break;
            case 4:
                cout << "terima kasih telah menggunakan sistem kami! ૮₍ ´ ꒳ `₎ა\n";
                break;
            default:
        
            cout << "pilihan tidak valid, silakan coba lagi.\n";
        
        }
    } while (pilihan != 4);
    cout << "\033[0m"; // reset warna


    return 0;
}