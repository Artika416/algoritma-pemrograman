#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char tipeRumah, jenisPembayaran;
    long int hargaRumah = 0, angsuranPerBulan = 0, totalHargaKredit = 0;

    // Meminta input dari pengguna
    cout << "Masukkan Tipe Rumah (A/B/C/D): ";
    cin >> tipeRumah;
    tipeRumah = toupper(tipeRumah);  // Mengubah input menjadi huruf besar

    cout << "Masukkan Jenis Pembayaran (T untuk Tunai, K untuk Kredit): ";
    cin >> jenisPembayaran;
    jenisPembayaran = toupper(jenisPembayaran);  // Mengubah input menjadi huruf besar

    // Tentukan harga rumah berdasarkan tipe rumah
    if (tipeRumah == 'A') {
        hargaRumah = 50000000;
        angsuranPerBulan = 500000;
    } else if (tipeRumah == 'B') {
        hargaRumah = 75000000;
        angsuranPerBulan = 750000;
    } else if (tipeRumah == 'C') {
        hargaRumah = 85000000;
        angsuranPerBulan = 850000;
    } else if (tipeRumah == 'D') {
        hargaRumah = 100000000;
        angsuranPerBulan = 1000000;
    } else {
        cout << "Tipe rumah tidak valid!" << endl;
        return 1;  // Keluar dari program jika tipe rumah tidak valid
    }

    // Proses pembayaran
    if (jenisPembayaran == 'T') {
        // Pembayaran Tunai
        cout << "Harga Rumah (Tunai): Rp. " << hargaRumah << endl;
    } else if (jenisPembayaran == 'K') {
        // Pembayaran Kredit
        totalHargaKredit = angsuranPerBulan * 120; // Kredit selama 10 tahun (120 bulan)
        cout << "Angsuran per bulan: Rp. " << angsuranPerBulan << endl;
        cout << "Total Harga Rumah (Kredit): Rp. " << totalHargaKredit << endl;
    } else {
        cout << "Jenis pembayaran tidak valid!" << endl;
        return 1;  // Keluar dari program jika jenis pembayaran tidak valid
    }

    return 0;
}