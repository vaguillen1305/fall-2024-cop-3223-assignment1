#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Declare the askForUserInput function, which will return the user's entered values.

double askForUserInput(){

    // The value double will represent the value of each coordinate, and implemented in main.

    double value; 

    scanf(" %lf", &value); 

    return value; 
}

// Declare the calculateDistance function, which will return the computed distance between two points.

double distanceFormula(double x1, double x2, double y1, double y2){

    double a = x2 - x1; 
    double c = pow(a, 2); 

    double b = y2 - y1; 
    double d = pow(b, 2); 

    double e = c + d; 

    double distance = sqrt(e); 

    return distance; 
}

void printDistance(){

    double x1, x2, y1, y2; 
    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printf("\nThe distance between the two points is %.4lf\n", distance); 

}

double calculateDistance(){  

    double x1, x2, y1, y2; 

    // The coordinates for Point A will be asked from the user, stored in the program, but won't be displayed back to the user.

    printf("Enter the x-coordinates for Point #1 and Point #2: \n"); 
    
    // The askForUserInput double function will be called into the main function to store the respective values of x1 and y1.

    x1 = askForUserInput(); 
    x2 = askForUserInput(); 

    // Same thing goes for Point B. 

    printf("Enter the y-coordinates for Point #1 and Point #2: \n"); 

    // Same thing goes for Point B. 
    
    y1 = askForUserInput(); 
    y2 = askForUserInput(); 

    printf("\nPoint #1: x1 = %.0lf; y1 = %.0lf", x1, y1); 
    printf("\nPoint #2: x2 = %.0lf; y2 = %.0lf\n", x2, y2); 

    // Distance formula between two points in a circle: square root of ((x2 - x1)^2 + (y2 - y1)^2).

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    // The output will return the calculated distance between the two points.

    printDistance(x1, x2, y1, y2); 

   return distance; 
}

double calculatePerimeter (){

    double x1, x2, y1, y2; 

    printf("\nPoint #1: x1 = %.0lf; y1 = %.0lf", x1, y1); 
    printf("\nPoint #2: x2 = %.0lf; y2 = %.0lf\n", x2, y2); 

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    // If each set of points represents the diameter, then perimeter = pi * diameter.

    double perimeter = PI * distance; 

    printf("The perimeter of the city encompassed by your request is %.4lf\n", perimeter); 

    return 3.0; 
}

int main(int argc, char**argv){

    double x1, x2, y1, y2; 

    // Implementing functions per assignment instruction.

    calculateDistance(); 

    calculatePerimeter(); 

    return 0; 
}