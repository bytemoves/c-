// #include <iostream>
// #include <string>
// using namespace std;

// class Myclass { //the class
//     public: //access specifier
//     int mynum; //attributes
//     string myany;
// };

// //create an object  an object is created form a class 
// int main () {
//     Myclass Myobj; //creating the object of the class
// //accesin the attribute and string value
//     Myobj.mynum = 10;
//     Myobj.myany = "text";

//     cout << Myobj.mynum << "\n";
//     cout<< Myobj.myany ;


// } 

//=====++++++ CLASS WITH MULTIPLE OBJECTS=====++++
#include<iostream>
#include <string>
using namespace std;

class Car{
    public:
    string model;
    string brand;
    int year;

};

int main () {
    //create objof a car
    Car obj1;
    obj1.model="Mustang";
    obj1.model = "x5";
    obj1.year = 2023;
    //create another object
    Car obj2;
    obj2.model="bmw";
    obj2.model = "x";
    obj2.year = 2024;

    cout <<obj1.model<< "" <<obj1.brand<<" "<<obj1.year<<"\n";
    cout <<obj2.model<< "" <<obj2.brand<<" "<<obj2.year<<"\n";
}
