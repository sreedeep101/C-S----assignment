#include<iostream>
using namespace std;

class function{
    public:
    void oddoeven(int a){
         if(a%2==0){
            cout << "it is an even number\n" << endl;
         }
         else
         {
            cout << "it is an odd number\n" << endl;            
         }
         
    }

    void fact(int a){
        int i,fact=1;
        for ( i = 1; i <=a; i++)
        {
            fact *= i;
        }
        cout << a << " factorial = " << fact << endl;        
    }

    void fibnocii(int a){
        int i,fib[a];
        for ( i = 0; i < a; i++)
        {
            if(i == 0){
                fib[i]=0;
            }
            else if(i == 1){
                fib[i]=1;
            }
            else{
               fib[i]=fib[i-2]+fib[i-1];                
            }
            if(fib[i]>a){
                a=i;
                break;
            }
            
        }
        cout << "The Fibnocci serieas is :" << endl << "[ " ;
        for ( i = 0; i < a; i++)
        {
          cout << fib[i]  << " ";
        }
        cout << "]" << endl;
    }

};


int main(){
    function f1;
    int num;
    cout << "enter a number:" ;
    cin >> num;
    f1.fact(num);
    f1.fibnocii(num);
    f1.oddoeven(num);
}