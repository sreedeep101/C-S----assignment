
//program with struct in c++

#include<iostream>
using namespace std;

struct Laptop {
    string name;
    string brand; // Define the struct
    int warrenty;
    string processer;
};

int main() {
    Laptop lap01;

    lap01.name = "LOQ";
    lap01.brand = "Lenovo";
    lap01.warrenty = 2;
    lap01.processer = "IntelCore i5-12450HX" ;


    cout << "Laptop" << endl << "-----" << endl;
    cout << "Name      : " << lap01.name <<endl;
    cout << "Brand     : " << lap01.brand << endl;
    cout << "Processer : " << lap01.processer << endl;
    cout << "Warrenty  : " << lap01.warrenty << " Years" << endl;

    return 0;
}

