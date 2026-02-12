#include <iostream>
#include <string>

int main(){
    int angka;
    
    std::cout << "Selamat Datang di Aplikasi Kasir" << std::endl << std::endl;

    std::cout << "1. Beli Produk" << std::endl;
    std::cout << "2. Tambahkan Produk" << std::endl;
    std::cout << "3. Lihat Keranjang" << std::endl;

    std::cout << "Pilih Menu (Masukkan Angka): ";
    std::cin >>angka;

    if(angka == 1){
        std::cout << "Masuk ke menu Beli Produk" << std::endl;
    }else if(angka == 2){
        std::cout << "Masuk ke Menu Tambahkan Barang" << std::endl;
    }else if(angka == 3){
        std::cout << "Masuk ke Menu Lihat Keranjang" << std::endl;
    }
}