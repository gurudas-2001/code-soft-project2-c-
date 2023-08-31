#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> studentNames;
    std::vector<int> grades;

    int numStudents;
    std::cout << "Enter the Number of Students: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        std::string name;
        int grade;

        std::cout << "Enter the Name of Student " << i + 1 << ": ";
        std::cin >> name;
        studentNames.push_back(name);

        std::cout << "Enter the Grade of Student " << i + 1 << ": ";
        std::cin >> grade;
        grades.push_back(grade);
    }

    int sum = 0;
    int highestGrade = grades[0];
    int lowestGrade = grades[0];

    for (int grade : grades) {
        sum += grade;
        if (grade > highestGrade) {
            highestGrade = grade;
        }
        if (grade < lowestGrade) {
            lowestGrade = grade;
        }
    }

    double average = static_cast<double>(sum) / numStudents;

    std::cout << "\nStudent Grades Summary:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << studentNames[i] << ": " << grades[i] << "\n";
    }

    std::cout << "\nAverage Grade of student is: " << average << "\n";
    std::cout << "Highest Grade of student: " << highestGrade << "\n";
    std::cout << "Lowest Grade of student: " << lowestGrade << "\n";

    return 0;
}
