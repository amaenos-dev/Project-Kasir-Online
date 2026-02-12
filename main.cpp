#include <iostream>

int main(){
    int angka;

    std::cout << "Masukkan angka: ";
    std::cin >>angka;

    if(angka == 1){
        std::cout << "Belajar membuat project" << std::endl;
    }else{
        std::cout << "harusnya kamu memasukkan angka 1" << std::endl;
    }
}