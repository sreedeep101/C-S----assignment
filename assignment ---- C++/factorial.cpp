//program to find the factorial In C++

#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1,i;
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num;
    cout << "enter the number to get factorial" << endl;
    cin >> num;
    cout << num << "! = " << factorial(num) << endl;
}
