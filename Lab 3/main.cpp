#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//place function prototypes here...
double CalcRectanglePerimeter(double height, double width);
void PrintRectanglePerimeter(double height, double width);
void DoubleRectanglePerimeter(double& height, double& width);
double CalcCircumferenceOfCircle(double radius);
double CalcAreaOfCircle(double radius);
double CalcVolumeOfSphere(double radius);
void Swap(int& num1, int& num2);
void Swap(double& num1, double& num2);

const double PI = 3.14;


//main function
int main(){
    cout << "Getting this line to print earns you points!\n";

    double height = 0;
    double width = 0;
    double radius = 0;

    cin >> height >> width >> radius;

    PrintRectanglePerimeter(height, width);
    cout << CalcRectanglePerimeter(height, width) << endl;
    cout << "... about to double height and width...\n";
    DoubleRectanglePerimeter(height, width);
    PrintRectanglePerimeter(height, width);

    return 0;
}




double CalcRectanglePerimeter(double height, double width) {
    return 2 * width + 2 * height;
}

void PrintRectanglePerimeter(double height, double width) {
    cout << fixed << setprecision(1);
    cout << "A rectangle with height " << height << " and width " << width << " has a perimeter of " << CalcRectanglePerimeter(height, width) <<"." << endl;

}

void DoubleRectanglePerimeter(double& height, double& width) {
    double perim = 2 * (height + width);
    perim *= 2;


    double scaleFactor = perim / 2 / (height + width);

    height *= scaleFactor;
    width *= scaleFactor;

}



double CalcCircumferenceOfCircle(double radius) {
    return radius * 2 * PI;
}

double CalcAreaOfCircle(double radius) {
    return radius * radius * PI;
}

double CalcVolumeOfSphere(double radius) {
    return pow(radius, 3) * PI * 4 / 3;
}

void Swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void Swap(double& num1, double& num2) {
    double temp = num1;
    num1 = num2;
    num2 = temp;
}