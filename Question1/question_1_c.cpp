#include <iostream>
#include <string>
using namespace std;
/*
 * A C++ function that gives a 10% raise to every
 * employee who has a student record and whose average
 * marks is greater than 60, and the corresponding
 * program to test the function.
 */


const int numberOfStudents = 6;
const int numberOfEmployees = 7;

struct StudentModel {
    string lastName;
    string firstName;
    double averageMarks;
};

struct EmployeeModel {
    string lastName;
    string firstName;
    double salary;
};

void printSalaries(EmployeeModel employees[], const char recordType[]);

void giveRaise(StudentModel students[], EmployeeModel employees[]);

int main() {
    StudentModel students[] = {
        {"Alpha", "Iron", 40},
        {"Betty", "Silk", 61},
        {"Chris", "Messi", 59},
        {"Mark", "Carbon", 60},
        {"Robert", "Blue", 88},
        {"Robert", "Red", 90},
    };

    EmployeeModel employees[] = {
        {"Alpha", "Iron", 3200},
        {"Betty", "Silk", 1800},
        {"Chris", "Messi", 1500},
        {"Donald", "Ruto", 1800},
        {"Mark", "Carbon", 4000},
        {"Robert", "Blue", 2000},
        {"Robert", "Red", 1200},
    };
    printSalaries(employees, "Old");
    giveRaise(students, employees);
    printSalaries(employees, "New");

    return 0;
}

/*
 * A function that takes in the employees
 * record and prints out the information
 */
void printSalaries(EmployeeModel employees[], const char recordType[]) {
    cout << endl << recordType << " Salary Record " << endl;
    for (int eIndex = 0; eIndex < numberOfEmployees; eIndex++) {
        cout << employees[eIndex].lastName << " "
                << employees[eIndex].firstName
                << ": $" << employees[eIndex].salary
                << endl;
    }
}

/*
 * A function that gives a 10% salary raise to those
 * employees in the student record whose average marks is
 * greater than 60
 */
void giveRaise(StudentModel students[], EmployeeModel employees[]) {
    for (int sIndex = 0; sIndex < numberOfStudents; sIndex++) {
        if (students[sIndex].averageMarks > 60) {
            for (int eIndex = 0; eIndex < numberOfEmployees; eIndex++) {
                if (students[sIndex].lastName == employees[eIndex].lastName &&
                    students[sIndex].firstName == employees[eIndex].firstName) {
                    employees[eIndex].salary *= 1.10;
                    break;
                }
            }
        }
    }
}
