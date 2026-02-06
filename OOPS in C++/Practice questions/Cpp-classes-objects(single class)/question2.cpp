/* Questions 2
Create a class Circle with a private data member radius.
• Add functions to set radius, calculate area and circumference.
• In main(), create an object, set radius through a function, and print area
and circumference
*/

#include <iostream>
using namespace std;

class Circle{
private:
    float radius;
    const float PI = 3.14159;

public:
    void setRadius(){
        cout << "Enter Radius: ";
        cin >> radius;
    }

    float calculateArea(){
        return PI*radius*radius;
    }

    float calculateCircumference(){
        return 2*PI*radius;
    }
};

int main(){
    Circle c;
    c.setRadius();

    cout << "Area: " << c.calculateArea() << endl;
    cout << "Circumference: " << c.calculateCircumference() << endl;

    return 0;
}