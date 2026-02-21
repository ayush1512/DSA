''' 
Consider a triangle with three sides measuring a, b, and c units. A triangle is a right-angled triangle if
a 2 + b2 = c2

Allow a tolerance of 0.000001 in the comparison in the above case i.e
a2 + b2 = c2 +/- 0.000001

A triangle is an isosceles triangle if any two of its sides are equal.
A triangle is an equilateral triangle if all the three sides are equal.

Three values can be the dimensions of a triangle if and only if the sum of every pair of values is greater than the third value. Otherwise, it is an invalid triangle.

Write a program that reads three real numbers and finds out whether they can be the sides of the triangle and if they do, prints what type of triangle it is. Even though all equilateral triangles are isosceles, your program should classify an equilateral triangle to be an equilateral only. Similarly
isosceles right-angled triangles should be classified as right-angled and not isosceles. A valid triangle which does not belong to any of the special types belongs to the notspecial category.
The three sides will be given as real numbers separated by blanks. The program should print the type of the triangle in words using lower case letters followed by eoln without any blanks.
Thus the possible answers are
invalid
right-angled
isosceles
equilateral
notspecial

Three side of triangle separated by space

Type of the triangle 

Input:
4.0 5.0 3.0
Output:
right-angled

Input:
5.0 7.0 7.0
Output:
isosceles

Input:
3.0 3.0 8.0
Output:
invalid
'''