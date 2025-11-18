#include <iostream>
using namespace std;

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
    cout << "1. login pengguna\n";
    cout << "2. daftar anggota baru\n";
    cout << "3. pilih buku favoritmu hari ini! 📚🌸\n\n";
    cout << "keluar untuk meninggalkan blossom library 🌷\n\n";
    cout << "\033[0m"; // reset warna


    return 0;
}