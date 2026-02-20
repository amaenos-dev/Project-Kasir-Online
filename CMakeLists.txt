cmake_minimum_required(VERSION 3.10.0)
project(Project_Kasir_Online VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Project_Kasir_Online main.cpp)

include(CTest)
enable_testing()

find_package(libpqxx CONFIG REQUIRED)
target_link_libraries(Project_Kasir_Online PRIVATE libpqxx::pqxx)