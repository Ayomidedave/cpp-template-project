#pragma once
#include "student_class.h"
#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;
namespace homework_sep30 {

// Student class method implementations
std::string Student::getName() {
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

void Student::setName(std::string newName) {
    if (newName.empty()) {
        std::cout << "Name cannot be empty!" << std::endl;
    } else {
        name = newName;
    }
}

// Random student generation
std::tuple<std::string, int, double> generateStudentInfo() {
    std::vector<std::string> names = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> ageDist(18, 25);
    std::uniform_real_distribution<double> gradeDist(0.0, 10.0);
    std::uniform_int_distribution<int> nameDist(0, names.size() - 1);

    std::string randomName = names[nameDist(gen)];
    int randomAge = ageDist(gen);
    double randomGrade = gradeDist(gen);

    return std::make_tuple(randomName, randomAge, randomGrade);
}

} // namespace homework_sep30
