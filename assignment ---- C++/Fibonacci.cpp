//program to find the fibinoci In C++

#include<iostream>
using namespace std;

void Fibonacci(int a){
    int fib[a],i;
    for(i=0;i<=a;i++){
        if(i==0){
            fib[i]=0;
        }
        else if(i == 1){
            fib[i]=1;
        }
        else {
            fib[i]=fib[i-2]+fib[i-1];
        }
        if(fib[i] > a){
            break; //used to terminate printing the fibinoci after the number entered 
        }
        cout<< "[" << fib[i] << "] ";
    }
}
int main(){
    int num;
    cout << "enter the number to get fibonnaci number up to that" << endl;
    cin >> num;
    Fibonacci(num);
}
