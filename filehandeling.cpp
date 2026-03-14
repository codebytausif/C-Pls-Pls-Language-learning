
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    // Create and open a text file
    ofstream MyFile("example.txt");
    // Write to the file
    MyFile << "Hello, World!\n";    
    MyFile << "This is a test file.\n";
    // Close the file
    MyFile.close();
    return 0;
}