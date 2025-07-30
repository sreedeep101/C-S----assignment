#include<iostream>
using namespace std;

#define Size 5
    
class Student {
   public:
    int roll;
    string name;
    int cs,maths,stati;
    float percentage;
};    

int main(){
    Student st[Size];
    int i;
    for(i=0;i<Size;i++){
        cout << "Enter data of Student "<< i+1 << endl << "------------" << endl;
        cout << "Enter roll number :";
        cin >> st[i].roll;
        cout << "Enter name :";
        cin >> st[i].name;
        cout << "Enter Mark of CS :";
        cin >> st[i].cs;
        cout << "Enter Mark of Maths :";
        cin >> st[i].maths;
        cout << "Enter Mark of Statistcs :";
        cin >> st[i].stati;
    }
    cout << "\n\nStudent Details" << endl << "----------------" << endl;
    
    for(i=0;i<Size;i++){
        cout << st[i].roll << "]. " << st[i].name << endl;
        cout << "Mark of CS        :" << st[i].cs << endl;
        cout << "Mark of Maths     :"<< st[i].maths << endl;
        cout << "Mark of Statistcs :" << st[i].stati << endl;
        int total = st[i].cs + st[i].maths + st[i].stati;
        st[i].percentage = (total/300.00)*100;
        cout << "percentage        :" << st[i].percentage << "%" << endl << endl;
    }
    
}
