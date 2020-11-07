//
// Created by shalaga44 on 11/7/20.
//
#include <iostream>
#include <string>

using namespace std;

string &leftTrim(string &str, string &chars) {
    str.erase(0, str.find_first_not_of(chars));
    return str;
}

string &rightTrim(string &str, string &chars) {
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}

string &trimString(string &str) {
    string chars_to_trim = " ";
    return leftTrim(rightTrim(str, chars_to_trim), chars_to_trim);
}

int main() {
    for (int i = 0; i < 5; ++i) {

        // Initialize  Variables
        string studentName;
        string universityId;
        string department;
        int grade;
        char mark;

        // Name Input
        cout << "Enter your student name: ";
        getline(cin, studentName);

        // University Id Input
        cout << "Enter your university Id: ";
        getline(cin, universityId);

        // Department Input
        cout << "Enter your department(A: Control, C: Computer, T: Telecommunication): ";
        getline(cin, department);
        char departmentChar;
        departmentChar = department[0];
        switch (departmentChar) {
            case 'A':
                department = "Control";
                break;
            case 'C':
                department = "Computer";
                break;
            case 'T':
                department = "Telecommunication";
                break;
            default:
                department = "Unknown";
                break;
        }

        // Grade Input
        cout << "Grade: ";
        string tempGrade;
        getline(cin, tempGrade);
        grade = stoi(tempGrade);
        if (grade <= 100 && grade >= 90)
            mark = 'A';
        else if (grade <= 90 && grade >= 80)
            mark = 'B';
        else if (grade <= 80 && grade >= 70)
            mark = 'C';
        else if (grade <= 70 && grade >= 60)
            mark = 'D';
        else
            mark = 'F';


        // Final Output
        cout << "Name: " << studentName << endl;
        cout << "University ID: " << universityId << endl;
        cout << "Mark: " << mark << endl;
        cout << "Department: " << department << endl;
    }
    return 0;

}