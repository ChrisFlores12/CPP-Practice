#ifndef STUDENT_H
#define STUDENT_H

#include<string>

using namespace std;

class Student{
    private:
        string name;
        int id;
        float gpa;
    
    public:
        // getters 
        string getName();
        int getId();
        float getGpa();

        //setters 
        void setName(string name);
        void setId(int id);
        void setGpa(float gpa);
};

#endif