//
// Created by shalaga44 on 11/7/20.
//

#ifndef ASSIGNMENT_3_STUDENT_H
#define ASSIGNMENT_3_STUDENT_H

#include <string>
#include <ostream>

using namespace std;

class Student {
public:
    friend ostream &operator<<(ostream &os, const Student &student);

public:

    void readName();

    void readUniversityId();

    void readDepartment();

    void readGrade();

    char mark;
    string department;
    string universityId;
    string name;

    void readStudent();
};


#endif //ASSIGNMENT_3_STUDENT_H
