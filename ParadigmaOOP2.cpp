#include <iostream>
using namespace std;

class Barang {
public :
       string nama;
        int jumlah;
        string kategori;
        char tanggalProduksi;

    void SpesifikasiBarang() {
             cout << "NAMA : " << nama << endl;
             cout << "jumlah: " << jumlah << endl;
             cout << "kategori : " << kategori << endl;
             cout << "tanggalProduksi : " << tanggalProduksi << endl;

  }
};
        
int main(){
    Barang Elektronik;
    Elektronik.nama = "Headset";
    Elektronik.jumlah = 5;
    Elektronik.kategori = "Elektronik";
    Elektronik.SpesifikasiBarang();

   
 Barang NonElektronik;
    NonElektronik.nama = "Sepatu";
    NonElektronik.jumlah = 8;
    NonElektronik.kategori = "NonElektronik";
    
    NonElektronik.SpesifikasiBarang();
}