/* Questions 3
Create a class Student with data members: name, rollNo, and marks (3
subjects).
• Add member functions to input details, calculate total and percentage,
and display all information.
• Create an array of Student objects for 3 students and display the topper.
*/

#include <iostream>
using namespace std;

class Student{
private:
    string name;
    long long int rollNo;
    float marks_sub1, marks_sub2, marks_sub3;
public:
    void inputDetails(){
        cout << "Enter Fist Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter marks of three subjects: ";
        cin >> marks_sub1 >> marks_sub2 >> marks_sub3;
    }
    float calculateTotal(){
        return marks_sub1 + marks_sub2 + marks_sub3;
    }
    float calculatePercentage(){
        return (calculateTotal()/300)*100;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << endl;
        cout << "Subject I: " << marks_sub1 << endl;
        cout << "Subject II: " << marks_sub2 << endl;
        cout << "Subject III: " << marks_sub3 << endl;
        cout << "Total Marks: " << calculateTotal() << endl; 
        cout << "Percentage: " << calculatePercentage() << "%" << endl; 
    }
};

int main(){
    Student s[3];
    int topperIndex = 0;
    float maxPercentage = 0;

    //Input Details
    for(int i=0; i<3; i++){
        cout << "\nEnter details of Student " << i+1 << endl;
        s[i].inputDetails();
    }

    //Finding Topper
    for(int i=0; i<3; i++){
        if(s[i].calculatePercentage() > maxPercentage){
            maxPercentage = s[i].calculatePercentage();
            topperIndex = i;
        }
    }

    //Display Topper
    cout << "Topper Details:" << endl;
    s[topperIndex].display();

    return 0;
}