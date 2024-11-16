#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class student
{
public:
    int roll_no;
    string name, prn, cla;

    virtual void accept()
    {
        cout << "ENTER ROLL NO: ";
        cin >> roll_no;
        cout << "ENTER PRN: ";
        cin >> prn;
        cout << "ENTER NAME OF STUDENT: ";
        cin >> name;
        cout << "ENTER CLASS: ";
        cin >> cla;
    }
};

class acad : public student 
{
public:
    int int_marks[5], ext_marks[5], tot_marks[5];
    int sum = 0,i;
    float per;
    string sub[5] = {"OOP", "DSPS", "DELD", "DM", "COA"};

    void accept() override 
    {
        student::accept();
        for (i = 0; i < 5; i++) 
        {
            cout << sub[i] << " INTERNAL (/40): ";//marks out of 40
            cin >> int_marks[i];
            cout << sub[i] << " EXTERNAL (/60): ";//marks out of 60
            cin >> ext_marks[i];
            tot_marks[i] = int_marks[i] + ext_marks[i]; //total marks of each sub
        }
    }

    void calc() 
    {
        sum = 0;
        for (int i = 0; i < 5; i++) 
        {
            sum += tot_marks[i];
        }
        per = (sum / 500.0) * 100; //total score
    }
   
    void display(int sr_no) 
    {
        cout << setw(6) << sr_no << setw(8) << roll_no << setw(8) << cla << setw(15) << prn << setw(12) << name;
        for (int j = 0; j < 5; j++) 
        {
            cout << "\n" << setw(60) << sub[j] << setw(12) << int_marks[j] << setw(12) << ext_marks[j] << setw(13) << tot_marks[j];
        }
        cout << "\n------------------------------------------------------------------------------------------------------\n";
        cout << "Total Marks: " << sum << "   Percentage: " << per << "%\n";
        cout << "--------------------------------------------------------------------------------------------------------\n";
    }
};

int main() 
{
    int size,i;
    acad s1[100]; //object array to hold multiple student records
    cout << "Enter number of students: ";
    cin >>size;

    for (i = 0; i < size; i++) 
    {
        cout << "\nEntering details for student " << i + 1 << ":\n";
        s1[i].accept();
        s1[i].calc();
    }

    
    cout << "\n------------------------------------------------------------------------------------------------------\n";
    cout << " Sr.No | Roll No |  Class  |    PRN     |   Name   | Subject | Int Marks  | Ext Marks | Total Marks |\n";
    cout << "------------------------------------------------------------------------------------------------------\n";
    for (i = 0; i <size; i++) {
        s1[i].display(i + 1);
    }

    return 0;
}
