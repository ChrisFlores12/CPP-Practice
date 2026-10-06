#ifndef STUDENT_H
#define STUDNET_H

#include <string>

using namespace std;

class Student{
    private:
        string name;
        int id;
        float gpa;

    public:
        // getters
        string getName(){
            return name;
        }

        int getId(){
            return id;
        }

        float getGpa(){
            return gpa;
        }

        // setters
        void setName(string name){
            this->name = name;
        }

        void setId(){
            this->id = id;
        }

        void setGpa(float gpa){
            this->gpa = gpa;
        }
};

#endif