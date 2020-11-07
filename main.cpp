//
// Created by shalaga44 on 11/7/20.
//
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;


int main() {
    int studentCount = 1;
    Student studentsArray[studentCount];
    for (int i = 0; i < studentCount; ++i) {
        Student student;
        student.readStudent();
        studentsArray[i] = student;
    }

    for (int i = 0; i < studentCount; ++i)
        cout << studentsArray[i];

    return 0;
}