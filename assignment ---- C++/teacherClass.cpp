#include<iostream>
using namespace std;

#define Size 2

class Teachers{
    private:
    string name ;
    int id ;
    string subject ;
    string department ;
    
    public:
    void readElements (){
       
        
            cout << "Enter data of Teachers "<< endl << "------------" << endl;
            cout << "Enter ID :";
            cin >> id;
            cout << "Enter name :";
            cin >> name;
            cout << "Enter department name :";
            cin >> department;
            cout << "Enter subject :";
            cin >> subject;
       
    }
    void writeElement(){
        cout << id << "]. " << name << endl;
        cout << "department        :" << department << endl;
        cout << "subject           :"<< subject << endl;
    }
};

int main(){
    Teachers teach[Size];
    int i;
    for ( i = 0; i < Size; i++)
    {
        teach[i].readElements();
    }
    cout<< "\n" << endl;
    for ( i = 0; i < Size; i++)
    {
        teach[i].writeElement();
        cout << endl;
    }
    return 0;
}