/*

Description: Takes a radius from the user and returns the area of a circle with that radius. 
Author: Olivia Clarke-Edwards

*/

int printAreaOfCircle() {

  cout << "Calculate the area of a circle." << endl;
  cout << endl;

  double radius;
  cout << "Enter radius: ";
  cin >> radius;

  double area = M_PI * pow(radius, 2);
  cout << "The area of a circle with radius " << radius << " is " << area << "." << endl << endl;

  return 0;

}