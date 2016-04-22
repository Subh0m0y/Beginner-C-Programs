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
#include <math.h>

/*
 * area.c
 * ------
 * This program prompts the user for the side length of an equilateral
 * triangle and displays its area.
 */
int main(int argc, char const *argv[])
{
    // Declarations
    double side;
    double area;

    // The heading
    printf("Area of an Equilateral Triangle\n");
    printf("-------------------------------\n\n");

    // The prompt for side length
    printf("Please enter the side length of the triangle : ");
    scanf("%lf", &side);

    // Area calculation
    area = sqrt(3) / 4.0 * side * side;

    // Displaying the result
    printf("The area of the equilateral triangle is %.2f square units.\n", area);

    return 0;
}