#include <iostream>
#include <fstream>
#include <pqxx/pqxx>

int main(int, char**){
    int angka;
    
    std::cout << "Hello, Selamat datang di Kasir Online!\n" << std::endl;

    std::cout << "Menu" << std::endl;
    std::cout << "1. Kasir" << std::endl;
    std::cout << "2. Database\n" << std::endl;
    
    std::cout << "Pilih Menu: ";
    std::cin >> angka;

    if(angka == 1){
        std::cout << "Masuk ke Mode Kasir";
    }else if (angka == 2) {
        std::cout << "Masuk ke Database";
    }

    return 0;
}
