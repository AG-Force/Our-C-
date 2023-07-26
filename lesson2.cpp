#include <iostream>  // Include the iostream library for input/output operations
#include <string>
using namespace std;  // Use the std namespace

int main() {
    cout << "hello" << endl;  // Print "hello" and move to the next line
    cout <<string(100, '=') <<endl;
    cout << "hi" << endl;  // Print "hi" and move to the next line
    cout << "hello" << endl << "test" << endl;  // Print "hello", move to the next line, print "test", and move to the next line
    cout << 4;  // Print the number 4
    cout << 4;  // Print the number 4
    cout << 4 << endl;  // Print the number 4 and move to the next line
    cout << 4;  // Print the number 4
    std::cout << "Hallo Welt"<<std::endl; // or like this without using namespace std, this is necessary <<std::endl
    return 0;  // Exit the program with a status code of 0
}



