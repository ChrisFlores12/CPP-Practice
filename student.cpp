#include "student.h"

std::string Student::getName() {
    return name;
}

int Student::getId() {
    return id;
}

float Student::getGpa() {
    return gpa;
}

void Student::setName(std::string name) {
    this->name = name;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setGpa(float gpa) {
    this->gpa = gpa;
}