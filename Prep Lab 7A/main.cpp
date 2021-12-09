#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Student {
public:
    Student(string name = "not initialized", double gpa = 0.0);
    void SetName(string studentName);
    void SetGPA(double newGPA);
    string ToString() const;
private:
    string name;
    double gpa;
};

Student::Student(string initialName, double initialGPA) {
    name = initialName;
    gpa = initialGPA;
}

void Student::SetName(string inputName) {
    name = inputName;
}

void Student::SetGPA(double newGPA) {
    gpa = newGPA;
}

//Insert the ToString member function here
string Student::ToString() const {
    string text = name + " has a GPA of " + to_string(gpa);
    return text;
}

void add(vector<Student*>& vect) {
    string name;
    double gpa;
    cout << "Student name: ";
    cin >> name;
    cout << name << "'s GPA: ";
    cin >> gpa;
    Student* student = new Student(name, gpa);
    vect.push_back(student);
}

void print(vector<Student*>& vect) {
    for (int i = 0; i < vect.size(); i++) {
        cout << i << ": " << vect.at(i)->ToString() << endl;
    }
}

void drop(vector<Student*>& vect) {
    int index;
    cout << "Index of student to drop: ";
    cin >> index;

    delete vect.at(index);
    vect.erase(vect.begin() + index);
}


int main() {
    vector<Student*> students;

    //Insert your code for main here
    while (true) {
        string option;
        cout << "Enter Option: ";
        cin >> option;
        if (option == "add") {
            add(students);
        } else if (option == "print") {
            print(students);
        } else if( option == "drop") {
            drop(students);
        } else {
            break;
        }
        cout << endl;
    }

    return 0;
}