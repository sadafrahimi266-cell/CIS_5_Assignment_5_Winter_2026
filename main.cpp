#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float grade;
};

void highestGrade(Student students[], int size) {
    float highest = students[0].grade;

    for (int i = 1; i < size; i++) {
        if (students[i].grade > highest) {
            highest = students[i].grade;
        }
    }

    cout << "Highest Grade: " << highest << endl;
}

void lowestGrade(Student students[], int size) {
    float lowest = students[0].grade;

    for (int i = 1; i < size; i++) {
        if (students[i].grade < lowest) {
            lowest = students[i].grade;
        }
    }

    cout << "Lowest Grade: " << lowest << endl;
}

void averageGrade(Student students[], int size) {
    float total = 0;

    for (int i = 0; i < size; i++) {
        total += students[i].grade;
    }

    cout << "Average Grade: " << total / size << endl;
}

void printStudentId(Student students[], int size) {
    cout << "Student IDs:" << endl;

    for (int i = 0; i < size; i++) {
        cout << students[i].id << endl;
    }
}

void printStudentName(Student students[], int size) {
    cout << "Student Names:" << endl;

    for (int i = 0; i < size; i++) {
        cout << students[i].name << endl;
    }
}

int main() {
    Student students[5] = {
        {1001, "Alice", 85},
        {1002, "Bob", 92},
        {1003, "Carlos", 78},
        {1004, "Diana", 88},
        {1005, "Ethan", 95}
    };

    int choice;

    do {
        cout << "\nMenu" << endl;
        cout << "1. Highest Grade" << endl;
        cout << "2. Lowest Grade" << endl;
        cout << "3. Average Grade" << endl;
        cout << "4. Print Student IDs" << endl;
        cout << "5. Print Student Names" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                highestGrade(students, 5);
                break;
            case 2:
                lowestGrade(students, 5);
                break;
            case 3:
                averageGrade(students, 5);
                break;
            case 4:
                printStudentId(students, 5);
                break;
            case 5:
                printStudentName(students, 5);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}
