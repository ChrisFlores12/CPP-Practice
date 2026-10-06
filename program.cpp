#include<iostream>
#include<string>
#include "student.h"

using namespace std;

int main(){

    Student studnet1;

    // set a name
    studnet1.setName("Christian");
    
    cout << "Student 1 is " << studnet1.getName() << endl;
   

    return 0;
}