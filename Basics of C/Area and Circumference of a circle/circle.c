/*
    The MIT License (MIT)
    ---------------------

    Copyright (c) 2015-2016 Cristatus Solutions

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to
    deal in the Software without restriction, including without limitation the
    rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
    OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
    NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
    DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
    OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
    THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#include <stdio.h>

#define PI 3.141592653589793

/*
 * circle.c
 * --------
 * This simple C program asks the user for a radius and displays the area
 * and circumference of the corresponding circle.
 */
int main(int argc, char const *argv[])
{
    // Declarations
    double radius;
    double area;
    double circumference;


    // The heading
    printf("Area and Circumference calculator\n");
    printf("---------------------------------\n\n");

    // The prompt for the radius and the input
    printf("Please enter the radius of the circle : ");
    scanf("%lf", &radius);

    // Area and circumferene calculation
    area = PI * radius * radius;
    circumference = 2.0 * PI * radius;

    // Display the result
    printf("Area of the circle is %.2f square units.\n", area);
    printf("Circumference of the circle is %.2f units.\n", circumference);

    return 0;
}