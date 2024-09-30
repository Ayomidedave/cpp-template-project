#include "student_class.h"
#include <iostream>
#include <random>
#include <vector>

using namespace std;

namespace homework_sep30{
    string Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}

double Student::getGrade() {
    return grade;
}

void Student::setAge(int newAge) {
    age = newAge;
}

void Student::setGrade(double newGrade) {
    grade = newGrade;
}

void Student::setName(string newName) {
    if (newName.empty()) {
        cout << "Name cannot be empty!" << endl;
    } else {
        name = newName;
    }
}

tuple<string, int, double> generateStudentInfo() {
    vector<string> names = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> ageDist(18, 25);
    uniform_real_distribution<double> gradeDist(0.0, 10.0);
    uniform_int_distribution<int> nameDist(0, names.size() - 1);

    string randomName = names[nameDist(gen)];
    int randomAge = ageDist(gen);
    double randomGrade = gradeDist(gen);

    return make_tuple(randomName, randomAge, randomGrade);
}
}

