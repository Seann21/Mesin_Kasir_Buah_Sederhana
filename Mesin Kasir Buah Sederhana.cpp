#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
// Variabel tunggal
double total_harga = 0;
int pilihan, jumlah_beli;
string nama_barang;
char menu = 'y';

// Array
vector<string> daftar_barang = {"Apel", "Mangga", "Semangka", "Jeruk"};
vector<double> harga_barang = {5000, 7000, 10000, 4000};
vector<int> stok_barang = {10, 20, 15, 5};

while (menu == 'y') {
    // Perulangan untuk menampilkan daftar barang
     cout<<"=================================================="<<endl;
    cout << "=================DAFTAR BUAH BUAHAN================:" << endl;
     cout<<"=================================================="<<endl;
    for (int i = 0; i < daftar_barang.size(); i++) {
        cout << i + 1 << ". " << daftar_barang[i] << " (" << harga_barang[i] << " per buah)" << endl;
    }

    // Input pilihan dan jumlah beli
    cout << "Pilih barang yang ingin dibeli (1-" << daftar_barang.size() << "): ";
    cin >> pilihan;
    cout << "Berapa banyak yang ingin dibeli: ";
    cin >> jumlah_beli;

    // Percabangan untuk mengecek apakah stok mencukupi
    if (stok_barang[pilihan - 1] >= jumlah_beli) {
        nama_barang = daftar_barang[pilihan - 1];
        total_harga = harga_barang[pilihan - 1] * jumlah_beli;
        stok_barang[pilihan - 1] -= jumlah_beli;
         cout<<"=================================================="<<endl;
          cout<<"=================================================="<<endl;
        cout << "Anda membeli " << jumlah_beli << " buah " << nama_barang << " seharga " << total_harga << endl;
    } else {
       cout<<"=================================================="<<endl;
        cout << "Maaf, stok tidak mencukupi." << endl;
    }

    // Tanya pengguna apakah ingin mengulang ke menu
    cout << "Apakah ingin mengulang ke menu? (y/t): ";
    cin >> menu;
}

   system("Pause");
   return 0;
}