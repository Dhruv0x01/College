/* Questions 6
Create a class Time with hours, minutes, and seconds.
• Add a function to input time, a function to normalize time (e.g., 75
seconds → 1 minute 15 seconds), and a function to display time
in HH:MM:SS format.
• In main(), create two Time objects, input values, add them (in a member
function), and print the result.
*/

#include <iostream>
using namespace std;

class Time{
    private:
    int time, sec, min, hr;
    public:
    void inputTime(){
        cout << "Enter time(in sec): ";
        cin >> time;
    }
    void normalizeTime(){
        hr = time / 3600;
        min = (time%3600)/60;
        sec = (time%3600)%60;
    }
    void displayTime(){
        cout << "Time: " << hr << ":" << min << ":" << sec << endl;
    }
};

int main(){
    Time t1, t2;
    t1.inputTime();
    t1.normalizeTime();
    t1.displayTime();

    t2.inputTime();
    t2.normalizeTime();
    t2.displayTime();
    return 0;
}