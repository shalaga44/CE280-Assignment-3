//
// Created by shalaga44 on 11/7/20.
//

#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;

vector<string> split(std::string const &str, const char delim) {
    std::vector<std::string> out;
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != std::string::npos) {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
    return out;
}

void Student::readName() {
    string studentName;
    cout << "Enter your student name: ";
    getline(cin, studentName);
    this->name = studentName;


}

void Student::readUniversityId() {
    string universityId;
    cout << "Enter your university Id: ";
    getline(cin, universityId);
    this->universityId = universityId;
}

void Student::readDepartment() {
    string department;
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
    this->department = department;

}

void Student::readGrade() {
    int grade;
    char mark;
    cout << "Grade (8 number separated by spaces): ";
    string tempGrade;
    int sum = 0;
    getline(cin, tempGrade);


    vector<string> gradesList = split(tempGrade, ' ');

    for (auto &strGrade: gradesList)
        sum += stoi(strGrade);

    grade = sum / 8 ;
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
    this->mark = mark;
}


void Student::readStudent() {
    readName();
    readUniversityId();
    readDepartment();
    readGrade();
}

ostream &operator<<(ostream &os, const Student &student) {
    os << "Name: " << student.name << endl;
    os << "University ID: " << student.universityId << endl;
    os << "Mark: " << student.mark << endl;
    os << "Department: " << student.department << endl;
    return os;
}

