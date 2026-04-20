#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    int tanggalProduksi;

    void printData()
    {
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};

int main()
{
    Barang elektronik;
    elektronik.nama = "Kipas Angin";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = 2024 - 5 - 14;

    elektronik.printData();
}
