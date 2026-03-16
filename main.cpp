#include <iostream>
#include <vector>
#include "student.h"

int main() {
    std::vector<Student> students;

    // Adding a student
    students.push_back(Student(1, "Janani", 25));

    // Displaying students
    for (auto s : students) {
        std::cout << "ID: " << s.id << ", Name: " << s.name << ", Age: " << s.age << std::endl;
    }

    return 0;
}
