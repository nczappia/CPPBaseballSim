#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

// Define the Student class
class Student {
public:
    int id;
    std::string name;
    double gpa;

    // Constructor
    Student(int id_, const std::string& name_, double gpa_)
        : id(id_), name(name_), gpa(gpa_) {}

    // Display student information
    void display() const {
        std::cout << "ID: " << id 
                  << ", Name: " << name 
                  << ", GPA: " << gpa << std::endl;
    }
};

// Function to find a student by ID in a vector
std::vector<Student>::iterator findStudentVector(std::vector<Student>& students, int id) {
    return std::find_if(students.begin(), students.end(),
                        [id](const Student& s) { return s.id == id; });
}

// Function to find a student by ID in a list
std::list<Student>::iterator findStudentList(std::list<Student>& students, int id) {
    return std::find_if(students.begin(), students.end(),
                        [id](const Student& s) { return s.id == id; });
}

int main() {
    // Create a vector of Students
    std::vector<Student> studentVector;
    studentVector.emplace_back(1, "Alice", 3.8);
    studentVector.emplace_back(2, "Bob", 3.5);
    studentVector.emplace_back(3, "Charlie", 3.9);

    // Create a list of Students
    std::list<Student> studentList;
    studentList.emplace_back(4, "Diana", 3.7);
    studentList.emplace_back(5, "Ethan", 3.6);
    studentList.emplace_back(6, "Fiona", 3.95);

    // Display students in vector
    std::cout << "Students in Vector:" << std::endl;
    for (const auto& student : studentVector) {
        student.display();
    }
    std::cout << std::endl;

    // Display students in list
    std::cout << "Students in List:" << std::endl;
    for (const auto& student : studentList) {
        student.display();
    }
    std::cout << std::endl;

    // Add a new student to the vector
    studentVector.emplace_back(7, "George", 3.4);
    std::cout << "After adding George to Vector:" << std::endl;
    for (const auto& student : studentVector) {
        student.display();
    }
    std::cout << std::endl;

    // Remove a student from the list by ID
    int removeId = 5;
    auto it = findStudentList(studentList, removeId);
    if (it != studentList.end()) {
        std::cout << "Removing student with ID " << removeId << " from List." << std::endl;
        studentList.erase(it);
    } else {
        std::cout << "Student with ID " << removeId << " not found in List." << std::endl;
    }
    std::cout << "After removal, Students in List:" << std::endl;
    for (const auto& student : studentList) {
        student.display();
    }
    std::cout << std::endl;

    // Search for a student in the vector
    int searchId = 3;
    auto vecIt = findStudentVector(studentVector, searchId);
    if (vecIt != studentVector.end()) {
        std::cout << "Found student in Vector:" << std::endl;
        vecIt->display();
    } else {
        std::cout << "Student with ID " << searchId << " not found in Vector." << std::endl;
    }

    return 0;
}

