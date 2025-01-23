#include <iostream>
using namespace std;

const int STUDENTS_LEN = 3;

struct Student {
    string name;
    string address;
    string city;
    string state;
    string zip;
    string gender;
    int studentId;
    float gpa;
};

Student makeStudent(int index) {
    Student student = {};
    cout << "\nEnter relevant information for Student " << (index + 1) << endl;

    cout << "\tName: ";
    getline(cin, student.name);
    cout << "\tAddress: ";
    getline(cin, student.address);
    cout << "\tCity: ";
    getline(cin, student.city);
    cout << "\tState: ";
    getline(cin, student.state);
    cout << "\tZIP: ";
    getline(cin, student.zip);
    cout << "\tGender: ";
    getline(cin, student.gender);
    cout << "\tStudent ID: ";
    cin >> student.studentId;
    cin.ignore(1000, 10);
    cout << "\tGPA: ";
    cin >> student.gpa;
    cin.ignore(1000, 10);

    return student;
}

void prettyPrintStudent(int index, Student student) {
    cout << "Output for Student " << (index + 1) << endl;
    cout << "\tName:\t\t" << student.name << endl;
    cout << "\tAddress:\t" << student.address << endl;
    cout << "\tCity:\t\t" << student.city << endl;
    cout << "\tState:\t\t" << student.state << endl;
    cout << "\tZIP:\t\t" << student.zip << endl;
    cout << "\tGender:\t\t" << student.gender << endl;
    cout << "\tStudent ID:\t" << student.studentId << endl;
    cout << "\tGPA:\t\t" << (round(student.gpa * 100) / 100) << endl;
}

int main() {
    // Get students
    Student students[STUDENTS_LEN] = {};
    for (int i = 0; i < STUDENTS_LEN; i++) {
        students[i] = makeStudent(i);
    }

    // Print students
    for (int i = 0; i < STUDENTS_LEN; i++) {
        prettyPrintStudent(i, students[i]);
    }
}
