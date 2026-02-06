/* Questions 4
Create a class Book with title, author, and price.
• Add functions to input and display book details.
• In main(), create an array of Book objects and display all books cheaper
than a user-given price.
*/

#include <iostream>
using namespace std;

class Book{
    private:
    string title, author;
    float price;

    public:
    void inputDetails(){
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }
    float priceOfBook(){
        return price;
    }
    void displayBookdetails(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main(){
   

    int budget;
    cout << "Enter your budget: ";
    cin >> budget;

    Book b[3];

    //Input all book details
    for(int i=0; i<3; i++){
        cout << "Enter details of book " << i+1 << endl;
        b[i].inputDetails();
    }

    for(int i=0; i<3; i++){
        if(b[i].priceOfBook() < budget){
            b[i].displayBookdetails();
            cout << endl;
        }
    }

    return 0;
}