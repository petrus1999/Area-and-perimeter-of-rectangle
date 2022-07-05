// Area and perimeter of rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double  Perimeter(double length, double height) {

    return 2 * (length + height);
}
double Area(double length, double width) {
    return length * width;
}

int main(){
    double length, height, width;
    cout << "Enter your length" << endl;
    cin >> length;
    cout << "Enter your height" << endl;
    cin >> height;
    cout << "Enter  your width" << endl;
    cin >> width;

    cout << "The Perimeter is equals to : " << Perimeter(length,height) << endl;
    cout << "The Area is equals to : " << Area (length ,width) << endl;

    return 0;

   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
