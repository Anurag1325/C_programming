//1. Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary,  and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary. 
//CODE :  
#include <stdio.h> 
int main() { 
float basic, da, hra, gross; 
printf("Enter the basic salary of Ramesh: "); 
scanf("%f", &basic); 
da = basic * 0.4; // dearness allowance is 40% of basic salary 
hra = basic * 0.2; // house rent allowance is 20% of basic salary 
gross = basic + da + hra; // gross salary is the sum of basic, da and hra 
printf("The gross salary of Ramesh is: %.2f\n", gross); 
return 0;
}
//2. The distance between two cities (in km.) is input through the keyboard. Write a program to  convert and print this distance in meters, feet, inches and centimeters 
//Code:
#include <stdio.h> 
#define M_PER_KM 1000 // meters per kilometer 
#define CM_PER_M 100 // centimeters per meter 
#define MM_PER_M 1000 // millimeters per meter 
#define FT_PER_M 3.28084 // feet per meter 
#define IN_PER_M 39.3701 // inches per meter 
int main() 
{ 
float km, m, cm, mm, ft, in; 
printf("Enter the distance between two cities in km: "); 
scanf("%f", &km); 
m = km * M_PER_KM; // convert km to m
cm = m * CM_PER_M; // convert m to cm 
mm = m * MM_PER_M; // convert m to mm 
ft = m * FT_PER_M; // convert m to ft 
in = m * IN_PER_M; // convert m to in 
printf("The distance in meters is: %.2f m\n", m); 
printf("The distance in centimeters is: %.2f cm\n", cm); 
printf("The distance in millimeters is: %.2f mm\n", mm); 
printf("The distance in feet is: %.2f ft\n", ft); 
printf("The distance in inches is: %.2f in\n", in); 
return 0; 
} 
//3. If the marks obtained by a student in five different subjects are input through the keyboard, find  out the aggregate marks and percentage marks obtained by the student. Assume that the maximum  marks that can be obtained by a student in each subject is 100 
//Code:
#include <stdio.h> 
int main() 
{ 
} 
float marks[5]; // array to store marks of five subjects 
float total = 0, average, percentage; 
int i; 
printf("Enter the marks of five subjects:\n"); 
for(i = 0; i < 5; i++) 
{ 

scanf("%f", &marks[i]); // input marks of each subject 
total += marks[i]; // calculate total marks 
}
average = total / 5; // calculate average marks 
percentage = (total / 500) * 100; // calculate percentage marks 
printf("The total marks is: %.2f / 500.00\n", total); 
printf("The average marks is: %.2f\n", average); 
printf("The percentage is: %.2f%%\n", percentage); 
return 0;}
//4. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to  convert this temperature into Centigrade degrees.
//Code:
#include <stdio.h> 
int main() 
{ 
float f, c; // variables to store temperature in Fahrenheit and Centigrade 
printf("Enter the temperature of the city in Fahrenheit: "); 
scanf("%f", &f); // input temperature in Fahrenheit 
c = (f - 32) * 5 / 9; // formula to convert Fahrenheit to Centigrade 
printf("The temperature of the city in Centigrade is: %.2f\n", c); // output temperature in 
Centigrade 
return 0; 
} 
//5. The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a  program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.
//Code:
#include <stdio.h> 
#define PI 3.14 // define the value of pi 
int main() 
{ 
float length, breadth, radius; // variables to store the input values 
float area_rect, peri_rect, area_circ, circ_circ; // variables to store the output values 
// input the length and breadth of the rectangle 
printf("Enter the length and breadth of the rectangle: "); 
scanf("%f %f", &length, &breadth);
// input the radius of the circle 
printf("Enter the radius of the circle: "); 
scanf("%f", &radius); 
// calculate the area and perimeter of the rectangle 
area_rect = length * breadth; 
peri_rect = 2 * (length + breadth); 
// calculate the area and circumference of the circle 
area_circ = PI * radius * radius; 
circ_circ = 2 * PI * radius; 
// output the results 
printf("The area of the rectangle is: %.2f\n", area_rect); 
printf("The perimeter of the rectangle is: %.2f\n", peri_rect); 
printf("The area of the circle is: %.2f\n", area_circ); 
printf("The circumference of the circle is: %.2f\n", circ_circ); 
return 0; 
} 
//6.9. An electricity board charges the following rates for the use of electricity: for the first 200 units 80 paise per unit: for the next 100 units 90 paise per unit: beyond 300 units Rs 1 per unit. All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount is charged. Write a program to read the name of the  user, number of units consumed and print out the charge
//Code:
#include <stdio.h> 
int main() 
{ 
  char name[50]; // to store the name of the user 
    int units; // to store the number of units consumed 
    float bill; // to store the bill amount 
    float surcharge; // to store the surcharge amount 
     
    // input the name and units from the user 
    printf("Enter your name: "); 
    scanf("%s", name); 
    printf("Enter the number of units consumed: "); 
    scanf("%d", &units); 
     
    // calculate the bill amount based on the units and rates 
    if (units <= 200) 
    { 
        bill = units * 0.8; 
    } 
    else if (units <= 300) 
    { 
        bill = (200 * 0.8) + (units - 200) * 0.9; 
    } 
    else 
    { 
        bill = (200 * 0.8) + (100 * 0.9) + (units - 300) * 1.0; 
    } 
     
    // add the meter charge of Rs. 100 
    bill = bill + 100; 
     
    // check if the bill amount is more than Rs. 400 
    if (bill > 400) 
    {
    surcharge = bill * 0.15; // calculate the surcharge of 15% of the bill amount 
// add the surcharge to the bill amount 
    bill = bill + surcharge; 
    } 
// print the name and bill amount 
printf("Hello %s, your electricity bill is Rs. %.2f\n", name, bill); 
return 0; 
} 















