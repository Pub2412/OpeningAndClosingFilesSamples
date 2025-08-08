
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
    fstream file("example2.txt", ios::in | ios::out | ios::app);  // Open for reading and writing
    
    if (file.is_open()) {
        file << "TANG INUMIN WAG MILO" << endl;
        
        file.seekg(0);  // Go to the beginning for reading
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        
        file.close();  // Close the file
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}

