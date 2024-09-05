//********************************************************* 
// Author: Valentina Guillen Pacheco
// UCFID: 5680218
// Date: 09/04/2024
// COP 3223; Professor Parra
// Purpose: To write a program that will house many internal functions. Instead of typing everything within main(), I have created functions with 
// different responsabilities to start "fracturing" my code.
// Input: The user will provide the coordinates of two points within a circle, which will demonstrate the shape of a city.
//
// Output: Using the data collected from the user, the program will conduct a series of functions to calculate the Distance between the two points, 
// the Perimeter of the city, the Area of the circle(city), the width of the cirlce, and the Height of the circle. Then, it will print the computated results.
//************************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Declare the askForUserInput function, which will return the user's entered values.

double askForUserInput(){

    // The double value will represent the value of each coordinate, and be implemented within getUserData.

    double value; 

    scanf(" %lf", &value); 

    return value; 
}

// Helper Function: getUserData will prompt the user to input the coordinates of both points. It will them store them into the respectives values, and print them.

void getUserData(double* x1, double* x2, double* y1, double* y2){

    printf("\nEnter the x-coordinates for Point #1 and Point #2: \n"); 
    
    *x1 = askForUserInput(); 
    *x2 = askForUserInput(); 

    printf("Enter the y-coordinates for Point #1 and Point #2: \n"); 
    
    *y1 = askForUserInput(); 
    *y2 = askForUserInput(); 

    printf("\nPoint #1 entered: x1 = %.0lf; y1 = %.0lf", *x1, *y1); 
    printf("\nPoint #2 entered: x2 = %.0lf; y2 = %.0lf\n", *x2, *y2); 

}

//Helper Function: distanceFormula will carry out the operations needed to carry out the distance formula to compute the distance between the two points.

double distanceFormula(double x1, double x2, double y1, double y2){

    // Distance formula between two points in a circle: square root of ((x2 - x1)^2 + (y2 - y1)^2).

    double a = x2 - x1; 
    double c = pow(a, 2); 

    double b = y2 - y1; 
    double d = pow(b, 2); 

    double e = c + d; 

    double distance = sqrt(e); 

    return distance; 
}

// Helper Function: printDistance will ensure that the Distance computed is only printed within the calculateDistance function.

void printDistance(double x1, double x2, double y1, double y2){
    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printf("\nThe distance between the two points is %.4lf\n", distance); 

}

// Assignment Defined Function: will calculate the distance between the two points.

double calculateDistance(){  

    // The static double retains the value of the respective coordinates.

    static double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    // The Points have been printed, and now the coordinates will be applied to the distance formula.

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printDistance(x1, x2, y1, y2); 

   return distance; 
}

// Assignment Defined Function: will calculate the Perimeter.

double calculatePerimeter(){

    static double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    // If each set of points represents the diameter, then perimeter = pi * diameter.

    double perimeter = PI * distance; 

    printf("The perimeter of the city encompassed by your request is %.4lf\n", perimeter); 

    return 2.0; 
}

// Assignment Defined Function: will calculate the Area of the circle/city.

double calculateArea(){

    double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    // area of a circle = pi * r^2.

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    double radius = distance / 2; 

    double area = PI * radius; 

    printf("The area of the city encompassed by your request is %0.4lf\n", area); 

    return 2.0; 
}

// Assignment Defined Function: will print out the width of the circle.

double calculateWidth(){

    double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    // Width of a circle is its diameter.

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printf("The width of the city encompassed by your request is %0.4lf", distance); 

    return 1.0; 

}

// Assignment Defined Function: will print out the Height of the circle/city.

double calculateHeight(){

    double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    // The height of a circle is its diameter.

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printf("The height of the city encompassed by your request is %0.4lf\n", distance); 

    return 1.0; 
}

// Main() function will be executed, and will have no direct output.

int main(int argc, char**argv){

    calculateDistance(); 

    calculatePerimeter(); 

    calculateArea(); 

    calculateWidth(); 

    calculateHeight(); 

    return 0; 
}