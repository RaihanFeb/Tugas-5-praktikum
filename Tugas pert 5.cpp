#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung gaji pokok
double pokok(int jamKerja) {
  return jamKerja * 7500;
}

// Fungsi untuk menghitung lembur
double lembur(int jamKerja) {
  if (jamKerja > 8) {
    return (jamKerja - 8) * 7500 * 1.5;
  } else {
    return 0;
  }
}

// Fungsi untuk menghitung uang makan
double makan(int jamKerja) {
  if (jamKerja >= 9) {
    return 10000;
  } else {
    return 0;
  }
}

// Fungsi untuk menghitung uang transport lembur
double transport(int jamKerja) {
  if (jamKerja >= 10) {
    return 13000;
  } else {
    return 0;
  }
}

// Fungsi utama
int main() {
  string nip, nama;
  int jamKerja;

  cout << "Masukkan NIP: ";
  cin >> nip;
  cout << "Masukkan Nama: ";
  cin.ignore(); // Membersihkan buffer input
  getline(cin, nama);
  cout << "Masukkan Jumlah Jam Kerja: ";
  cin >> jamKerja;

  // Memanggil fungsi-fungsi untuk menghitung gaji
  double gajiPokok = pokok(jamKerja);
  double lemburKaryawan = lembur(jamKerja);
  double uangMakanKaryawan = makan(jamKerja);
  double uangTransportLembur = transport(jamKerja);

  // Menampilkan output
  cout << "\n-------------------- Rincian Gaji --------------------" << endl;
  cout << "NIP: " << nip << endl;
  cout << "Nama: " << nama << endl;
  cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
  cout << "Lembur: Rp. " << lemburKaryawan << endl;
  cout << "Uang Makan: Rp. " << uangMakanKaryawan << endl;
  cout << "Transport Lembur: Rp. " << uangTransportLembur << endl;
  cout << "-----------------------------------------------------" << endl;

  return 0;
}
