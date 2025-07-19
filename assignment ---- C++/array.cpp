
//program to read and write elements into an array using for loop

#include<iostream>
using namespace std;

int main() {
    int array[10],i;
    cout << "enter elements into the array :" <<endl;
    for(i=0; i<10; i++) {
        cin >> array[i]; //code to read inputs into the array
    }

    cout << "Your array is :" << endl;
    for(i=0; i<10; i++) {
        cout << "[" << array[i] << "] "; //code to write elements
    }
}
