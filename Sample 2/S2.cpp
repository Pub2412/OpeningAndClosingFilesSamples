#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example1.txt");  // Open a file for reading
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {  // Read each line
            cout << line << endl;
        }
        file.close();  // Close the file
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}

