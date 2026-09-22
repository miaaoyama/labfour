#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int id;

public:
    Student(std::string name, int id);

    std::string getName() const;
    int getId() const;
};

#endif
