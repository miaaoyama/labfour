#include "Student.h"

Student::Student(std::string name, int id) {
    this->name = name;
    this->id = id;
}

std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}
