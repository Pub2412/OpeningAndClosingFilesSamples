#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example1.txt");  // Open a file for writing
    if (file.is_open()) {
        file << "Hello Kalibutan!" << endl;  // Write to file
        file.close();  // Close the file
        cout << "File written and closed successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}

