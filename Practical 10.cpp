//##10  Create a Triangle class. Add exception handling statements to ensure the following conditions: all sides are greater than 0 and sum of any two sides are greater than the third side.The class should also have overloaded functions for calculating the area of a right angled triangle as well as using Heron's formula to calculate the area of any type of triangle.*

#include <iostream> 
using namespace std; 

class Triangle { 
public: 
   // Area with base & height 
   double area(double base, double height) { 
   return 0.5 *base*height; 
   } 

   // Area with 3 sides (Heron's formula) 
   double area(double a, double b, double c) { 
      double s (a + b + c) / 2; 
      return sqrt(s* (s-a)*(s-b)*(s-c)); 
   } 
}; 

int main() { 
   Triangle t; 
   cout << "Area (Base, Height): " << t.area(7, 13) << endl; 
   cout << "Area (Three Sides): " << t.area(2, 5, 9) << endl; 
   return 0;
}
