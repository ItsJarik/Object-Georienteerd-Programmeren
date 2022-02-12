#include <iostream>
#include <string>

using namespace std;

// Gradebook class definition
class Gradebook
{
public:
    void displayMessage()
    {
        cout << "Welcome tot the grade book for\n"
             << nameOfCourse << "!" << endl;
    }
    void askNameCourse()
    {
        cout << "Please enter the course name:" << endl;
        getline(cin, nameOfCourse); // Read a string with blanks
        cout << endl; // Blank line
    }

private:
    string nameOfCourse;
};

int main()
{
    Gradebook myGradeBook;

    myGradeBook.askNameCourse();
    myGradeBook.displayMessage();
}
