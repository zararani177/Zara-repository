//"	Create a Structure named StudentGrading for collecting information about a student, such as name, SAP ID, address, department, and marks for two subjects.
//"	The calculateMaxMarks function calculates the maximum marks for a student based on their performance in the two subjects.
//"	The displayStudent function showcases the student's information, including their name, SAP ID, address, department, marks for two subjects, and the calculated maximum marks.
//"	The main function acts as the program's entry point. It creates an array of Student structures to manage details for five students. It utilizes loops to input information, calculate maximum marks, and then display the overall information for each student.


#include <iostream>
using namespace std;

// Structure to represent a student's information
struct StudentGrading {
    char name[20];
    int sapID;
    char address[15];
    char department[20];
    float marksSubject1;
    float marksSubject2;
};

// Function to calculate the maximum marks of the two subjects
int calculateMaxMarks(const StudentGrading &student) {
    return max(student.marksSubject1, student.marksSubject2);
}

// Function to display student information
void displayStudent(const StudentGrading &student, int maxMarks) {
    cout << "Name: " << student.name << endl;
    cout << "SAP ID: " << student.sapID << endl;
    cout << "Address: " << student.address << endl;
    cout << "Department: " << student.department << endl;
    cout << "Marks in Subject 1: " << student.marksSubject1 << endl;
    cout << "Marks in Subject 2: " << student.marksSubject2 << endl;
    cout << "Maximum Marks: " << maxMarks << endl;
    cout << "----------------------------------------" << endl;
}

// Main function
int main() {
    const int NUM_STUDENTS = 5;
    StudentGrading students[NUM_STUDENTS];

    // Input information for each student
for (int i = 0; i < NUM_STUDENTS; ++i) {
    cout << "Enter details for student " << i + 1 << ":\n";

    cout << "Name: ";
    cin.ignore(); // To clear input buffer
    cin.getline(students[i].name,20);

    cout << "SAP ID: ";
    cin>>students[i].sapID;

    cout << "Address: ";
    cin.getline(students[i].address,15);

    cout << "Department: ";
    cin.getline(students[i].department,20);

    cout << "Marks in Subject 1: ";
    cin >> students[i].marksSubject1;

    cout << "Marks in Subject 2: ";
    cin >> students[i].marksSubject2;

    cout << endl;
}

    // Display information for each student
    cout << "Displaying student information:\n";
for (int i = 0; i < NUM_STUDENTS; ++i) {
    int maxMarks = calculateMaxMarks(students[i]);
    displayStudent(students[i], maxMarks);
}

return 0;
}

