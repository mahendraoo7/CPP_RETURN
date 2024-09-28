//  Boolean and charecter

// #include <iostream> 
// #include <string>
// using namespace std;

// int main() {
//     char a=87,b=89,c=90;
//     cout << a, cout << c ,cout << b ;

//     bool hello = true;
//     bool world = false;

//     cout << hello, cout << hello , cout << hello ;
// }

// Student Data 



#include <iostream>
using namespace std;

class Student {
    
    string name;
    char Gender[7];
    int age;
    int Education;
    
    public : 
    
  void data () {
    
    
    cout << "Enter your Name";
    cin  >>  name ;
    cout << "\nEnter your Gender";
    cin  >>  Gender ;
    cout << "\nEnter your Age";
    cin  >>  age ;
    cout << "\nEnter your Education";
    cin  >>  Education ;
    
    
}

 void ShowData() {
     
    cout << "\nname :" << name ;
    cout << "\nGender :" << Gender ;
    cout << "\nAge :" << age ;
    cout << "\nEducation :" << Education ;
     
 }
};


int main() {
    
    Student obj;
    obj.data();
    obj.ShowData();
    
    return 0;
}

// Switch case 


#include <iostream>
 using namespace std;
 int main () {
     
     int n;
     cout << "Enter 1 to 7 for your day" ;
     cin >> n ;
    
switch (n) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
    
  default : 
  cout << "Enter valid Number";
}
     }

//  While Loop

#include <iostream> 
using namespace std;
 
 int main() {
     
     int count;
     cout << "Enter CountDown Number"; 
     cin >> count ;
     
     while(count>0) {
         cout << count << "\n";
         count--;
     }
     
     cout << "Have A Good Day ";
 }


 

