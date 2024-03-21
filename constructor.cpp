// #include <iostream>
// using namespace std;

// class myClass {
//     public:
//     myClass() {  // constructor
//          cout << "its workiing!";

//     } 
// };

// int main () {
//     myClass obj1; // object of my class this will call the constructor 

// }

///==== +++++ CONSTRUCTOR PARAMETERS ==+++

#include <iostream>
#include <string>
using namespace std;


class Car {
    public:
    string brand; // attributes
    string model;
    int year;

    Car (string x, string y,int z) { //constructor with parameter
        brand = x;
        model = y;
        year = z;

    }

};

int main () {
    Car obj1 ("mazda","cx5",2023);
    Car obj2 ("BMW,","X7",2024);
    cout <<obj1.brand<< "" << obj1.model <<" "<< obj1.year<< "\n";
    cout <<obj2.brand<< "" << obj2.model <<" "<< obj2.year<< "\n";
}