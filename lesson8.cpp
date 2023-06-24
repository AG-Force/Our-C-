#include<iostream>
using namespace std;

int main()
{
    int width, height, area, cir;
    
    // Assigning a value of 8 to the 'width' variable
    width = 8;
    
    // Assigning a value of 5 to the 'height' variable
    height = 5;
    
    // Calculating the area of the rectangle and storing it in the 'area' variable
    area = width * height;
    
    // Printing the value of 'area' along with a descriptive message
    cout << "Area of rectangle is = " << area << " cm" << endl;
    
    // Calculating the circumference of the rectangle and storing it in the 'cir' variable
    cir = (height + width) * 2;
    
    // Printing the value of 'cir' along with a descriptive message
    cout << "Circumference of rectangle is = " << cir << endl;
    
    return 0;
}
