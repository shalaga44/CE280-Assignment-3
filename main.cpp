//
// Created by shalaga44 on 11/7/20.
//
#include <iostream>
#include <string>
#include <fstream>
#include "Student.h"

using namespace std;


int main() {
    int studentCount = 8;
    Student studentsArray[studentCount];
    for (int i = 0; i < studentCount; ++i) {
        Student student;
        student.readStudent();
        studentsArray[i] = student;
    }

    ofstream fileOut("output.txt");
    if (fileOut.is_open()) {
        for (int i = 0; i < studentCount; ++i)
            fileOut << studentsArray[i];
        fileOut.close();
    } else cout << "Unable to open file";


    return 0;
}