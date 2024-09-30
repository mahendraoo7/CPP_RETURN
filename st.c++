#include <iostream>
using namespace std;

class Student {
    
    public :
    
    char name[50] ;
    int rollno ;
    string sub[3] = {"English", "Math","Computer"};
    int marks[3];
    


void takedata() {
    
    cout << "Enter Your Name\n" ;
    cin >> name ;
    
    cout << "\nEnter Your rollno\n" ;
    cin >> rollno ;
    
    
    cout << "\nEnter Marks\n";
    for(int i=0; i<3;i++)
    {   
        cout << sub[i] << ": \n";
        cin >> marks[i];
    }
    
};

    
void showdata() {
    
    
    cout << "name :" << name;
    cout << "\nrollno:" << rollno;
    cout << "\nmarks :\n";
    
    for(int n=0;n<=3;n++)
    {   
        cout << sub[n] << ":";
        cout << marks[n] << "\n" ;
    }
    
};
};

   int main () {
       
       Student obj;
       obj.takedata();
       obj.showdata();
   }
