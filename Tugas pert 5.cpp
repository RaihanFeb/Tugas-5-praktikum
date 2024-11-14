#include <iostream>
using namespace std;

// Konstanta gaji pokok dan tunjangan
const int GAJI_POKOK_PER_JAM = 7500;
const float TARIF_LEMBUR = 1.5;
const int UANG_MAKAN = 10000;
const int UANG_TRANSPORT = 13000;

// Fungsi untuk menghitung gaji pokok
int pokok(int jamKerja) {
    return jamKerja * GAJI_POKOK_PER_JAM;
}

// Fungsi untuk menghitung gaji lembur
int lembur(int jamKerja) {
    if (jamKerja > 8) {
        int jamLembur = jamKerja - 8;
        return jamLembur * GAJI_POKOK_PER_JAM * TARIF_LEMBUR;
    }
    return 0;
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    return (jamKerja >= 9) ? UANG_MAKAN : 0;
}

// Fungsi untuk menghitung uang transport lembur
int transport(int jamKerja) {
    return (jamKerja >= 10) ? UANG_TRANSPORT : 0;
}

int main() {
    string NIP, nama;
    int jamKerja;

    // Input data karyawan
    cout << "Masukkan NIP karyawan: ";
    cin >> NIP;
    cout << "Masukkan Nama karyawan: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    // Menghitung komponen gaji
    int gajiPokok = pokok(jamKerja);
    int gajiLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    // Output data karyawan dan komponen gaji
    cout << "\n=== Rincian Gaji Harian ===\n";
    cout << "NIP            : " << NIP << endl;
    cout << "Nama           : " << nama << endl;
    cout << "Gaji Pokok     : Rp. " << gajiPokok << endl;
    cout << "Lembur         : Rp. " << gajiLembur << endl;
    cout << "Uang Makan     : Rp. " << uangMakan << endl;
    cout << "Uang Transport : Rp. " << uangTransport << endl;

    int totalGaji = gajiPokok + gajiLembur + uangMakan + uangTransport;
    cout << "Total Gaji     : Rp. " << totalGaji << endl;

    return 0;
}
