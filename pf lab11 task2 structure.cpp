//"	The User structure has a member variable name to store the username. 
//"	The program prompts the user to enter their username, simulates a login process (you should replace this with actual authentication logic), and then displays a personalized welcome message upon successful login.


#include <iostream>
#include <string>
using namespace std;

// Structure to represent a User
struct User {
    char name[20]; // Member to store the username
};

// Main function
int main() {
    User u1; // Create a User structure instance

    // Prompt user to enter their username
    cout << "Enter your username: ";
    cin.getline(u1.name,20);

    // Simulate a login process
    string hardcodedUsername = "admin"; // Replace with actual authentication logic
if (u1.name == hardcodedUsername) {
    // Successful login
    cout << "Welcome, " << u1.name << "!" << endl;
} 
else {
    // Unsuccessful login
    cout << "Login failed. Username not recognized." << endl;
}

return 0;
}

