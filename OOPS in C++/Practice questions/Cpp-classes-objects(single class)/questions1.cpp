/* Questions 1
Create a class Rectangle with length and width as private data members.
• Add member functions to input dimensions, calculate area, and display
area.
• Create at least two objects and display their areas.
*/

#include <iostream>
using namespace std;

class Rectangle{
private:                                      // data members
    float length;
    float width;
public:                                       
    void input(){                            // Took input
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    float calculateArea(){
        return length*width;
    }
    void displayArea(){
        cout << "Area: "<< calculateArea() << endl;
    }
};

int main(){
    Rectangle rec1, rec2;

    rec1.input();
    rec1.displayArea();

    rec2.input();
    rec2.displayArea();

    return 0;
}

// Area should not be stored as data members as it is a derived value