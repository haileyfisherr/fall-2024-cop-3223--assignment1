# include <stdio.h>
# include <math.h> 

// Define PI as the special restrictions
#define PI 3.14159

// The prototypes of the function 
int main(int argc, char **argv);
double calculate_distance(); 
double calculate_perimeter(); 
double calculate_area(); 
double calculate_width();
double calculate_height();
double ask_user_for_input();

// Main function
int main(int argc, char **argv) {
calculate_distance();
calculate_perimeter();
calculate_area();
calculate_width();
calculate_height();
ask_user_for_input();1

    return 0; 
    // This function returns 0 
}

// Function that calculates distance 
double calculate_distance() { 
    double x1, y1, x2, y2, distance;

    // Ask user for input 
    printf("Enter x1: ");
    scanf("%1lf", &x1);
    printf("Enter y1: ");
    scanf("%1lf", &y1);
    printf("Enter x2: ");
    scanf("%1lf", &x2);
    printf("Enter y2: ");
    scanf("%1lf", &y2); 

    // Printing the output 
    printf("Point #1 entered: x1 =" 
"%.2lf; y1 = %.2lf\n", x1, y1); 
    printf("Point #2 entered: x2 =" 
"%.2lf; y2 = %.2lf\n", x2, y2);

    // Calculate the distance 
    distance = sqrt(pow(x2 - x1, 2)
+ pow(y2 - y1, 2));
   // Output the distance to user 
   printf("The distance between the" 
"two points is %.2lf\n", distance);
   return distance;
}

// Calculating the perimeter function 
double calculate_perimeter() {
    double perimeter = 2 * PI * 
calculate_distance(); 
    printf("The perimeter of the" 
"city encompassed by your request is "
"%.2lf\n", perimeter);
    return perimeter; 
}

// Function that calculates the area 
double calculate_area() {
    double area = PI * 
pow(calculate_distance(), 2);
    printf("The area of the city"
"encompassed by your request is"
"%.2lf\n", area);
    return area;
}

// Function that calculates width 
double calculate_width() {
    double width = 
calculate_distance();
    printf("The width of the city"
"encompassed by your request is"
"%.2lf\n", width);
    return width;
}

// Calculating the height 
double calculate_height() {
    double height = 
calculate_distance(); 
    printf("The height of the city" 
"encompassed by your request is"
"%.2lf\n", height);
    return height;
}

double ask_user_for_input() {
    double input;
    // Get user input, except function does not output anything
    printf("Please enter a value: ");
    scanf("%lf", &input);
    return input;
}