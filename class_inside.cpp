// #include<iostream>
// #include <string>
// using namespace std;

// class myclass{
//     public: //acces specifier
//     void myMethod (){
//         cout << "working";
//          //method or function defined inside a class
//     }
// };
// // syntax for out
// // void MyClass::myMethod() {
// // cout << "Hello World!";
// int main() {
//     myclass obj; //object of the class
//     obj.myMethod(); // call the function/method
// }


#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.speed(200); // Call the method with an argument
  return 0;
}