#include <iostream>
#include <string>

int main(){
    int angka;
    std::string namaLengkap = "Anas Iqbal Lutfika";

    std::cout << "Masukkan angka: ";
    std::cin >>angka;

    if(angka == 1){
        std::cout << "Belajar membuat project" << std::endl;
        std::cout << "Halo nama saya " << namaLengkap;
    }else{
        std::cout << "harusnya kamu memasukkan angka 1" << std::endl;
    }
}