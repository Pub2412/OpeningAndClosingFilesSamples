#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example1.txt", ios::app);  // Open file in append mode
    if (file.is_open()) {
        file << "Miss ko na siya" << endl;  // Append to file
        file.close();  // Close the file
        cout << "Appended and closed the file successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}

