#ifndef student_class_H
#define student_class_H



#include <tuple>
#include <string>
#include <vector>
#include <random>
using namespace std;

class Student{
    string name;
    int age;
    double grade;

    static int totalStudents;
public:
    //Getter   
    std::string getName();

    int getAge();

    double getGrade();
    
    //Setter
    void setAge(int newAge);

    void setGrade(double newGrade);

    void setName(string newName);

    void printInfo() const;

    static int getTotalStudents();
};

#endif
