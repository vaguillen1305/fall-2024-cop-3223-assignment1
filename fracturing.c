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


double distanceFormula(double x1, double x2, double y1, double y2){

    double a = x2 - x1; 
    double c = pow(a, 2); 

    double b = y2 - y1; 
    double d = pow(b, 2); 

    double e = c + d; 

    double distance = sqrt(e); 

    return distance; 
}



void printDistance(double x1, double x2, double y1, double y2){
    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printf("\nThe distance between the two points is %.4lf\n", distance); 

}


double calculateDistance(){  

    static double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    // Distance formula between two points in a circle: square root of ((x2 - x1)^2 + (y2 - y1)^2).

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printDistance(x1, x2, y1, y2); 

   return distance; 
}


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

double calculateWidth(){

    double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    // Width of a circle is its diameter.

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printf("The width of the city encompassed by your request is %0.4lf", distance); 

    return 1.0; 

}

double calculateHeight(){

    double x1, x2, y1, y2; 

    getUserData(&x1, &x2, &y1, &y2); 

    // The height of a circle is its diameter.

    double distance; 

    distanceFormula(x1, x2, y1, y2); 

    printf("The height of the city encompassed by your request is %0.4lf\n", distance); 

    return 1.0; 
}


int main(int argc, char**argv){

    calculateDistance(); 

    calculatePerimeter(); 

    calculateArea(); 

    calculateWidth(); 

    calculateHeight(); 

    return 0; 
}