//1 :-Write a program to compute the sum of the first n terms of the following serie= 1-1/2²+1/3²-1/4²+1/5² .....The number of terms n is to be taken from the user through the command line. If thecommand line argument is not found ### then prompt the user to enter the value of n.
#include <iostream>
#include <iostream> 
#include <vector> 
#include <set> 
using namespace std; 

double seriesSum(int n) { 
   double sum=0; 
   for (int i =1; i <= n; i++) {  
      double term =1.0/ pow(i, 1); 
      if ( i% 2==0) {
         sum -= term; 
      } else { 
         sum += term;
      }
   } 
   return sum; 
} 
int main() {  
   int n; 
   cout << "Enter the number of terms: "; 
   cin>>n; 
   cout "Sum of series: <<< seriesSum(n) endl;  
   return 0; 
}
