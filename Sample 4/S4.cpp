#include <iostream>
#include <cstdio>  // For remove function
using namespace std;

int main() {
    const char* filename = "example1.txt";  // File to delete
    
    // Attempt to delete the file
    if (remove(filename) == 0) {
        cout << "File deleted successfully." << endl;
    } else {
        perror("Error deleting file");  // Print error if deletion fails
    }
    
    return 0;
}

