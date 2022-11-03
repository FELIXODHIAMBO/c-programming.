

 1. // C++ program to convert temperature from degrees fahrenheit to degrees celcius.
  
 2. 
    
 3. #include <iostream>

 4. using namespace std;

 5.

 6. int main() {

 7. float fahren, celsius;

 8.

 9.  cout << "Enter the temperature in fahrenheit\n";

 10.  cin >> fahren;

 11.

 12.   // convert fahreneheit to celsius
 
 13.   // Subtract 32, then multiply it by 5, then divide by 9

 14.    

 15.   celsius = 5 * (fahren - 32) / 9;

 16.
 
 17.   cout << fahren <<" Fahrenheit is equal to " << celsius <<" celsius.
     
 18.	

 19.  return 0;


 20.}