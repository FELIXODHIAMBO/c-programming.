1. //C++ program to find 
the area of a circle.

2. #include <iostream>

3. using namespace std;

4.

5.  int main() {

6.   float radius, area_circle;

7.

8.   // take radius as input

9.   cout << "Enter the radius of circle: ";

10.   cin >> radius;

11.

12.   area_circle = 3.14 * radius * radius;

13.   cout << "Area of circle: " << area_circle << endl;

14.

15.   return 0;

16.   }