#include <iostream>

using namespace std;

class Student {
    
    public :
    
    char name ;
    int rollno ;
    int marks[3];


void takedata() {
    
    cout << "Enter Your Name\n" ;
    cin >> name ;
    
    cout << "Enter Your rollno\n" ;
    cin >> rollno ;
    
    
    cout << "enter Marks\n";
    for(int i=0; i<=3;i++)
    {
        cin >> marks[i];
    }
    
};
    
void showdata() {
    
    
    cout << "name :\n" << name;
    cout << "rollno\n :" << rollno;
    cout << "marks \n:";
    
    for(int n=0;n<=3;n++)
    {
        cout << marks[n];
    }
    
};
};

   int main () {
       
       Student obj;
       obj.takedata();
       obj.showdata();
   }

