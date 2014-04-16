// File to test your complex number class



#include <string>

#include <iostream>

#include <cmath>

#include <sstream>

using namespace std;



#include "complex.h"










int main (void)

{

  double magnitude;

  double angle;

  double real;

  double imaginary;





  complex a;// test the default ctor



  real      = a.getRealPart();

  imaginary = a.getImaginaryPart();

  magnitude = a.getMagnitude();

  angle     = a.getAngle();



  cout << "Testing default ctor" << endl;

  cout << "a.real = (" << real << ") and a.imaginary = (" << imaginary << ")." << endl;

  cout << "a.magnitude = (" << magnitude << "and a.angle = (" << angle << ")." << endl;



  complex b(4.0, 3.0);// test the preferred ctor



  real      = b.getRealPart();

  imaginary = b.getImaginaryPart();

  magnitude = b.getMagnitude();

  angle     = b.getAngle();



  cout << "Testing preferred ctor" << endl;

  cout << "b.real = (" << real << ") and b.imaginary = (" << imaginary << ")." << endl;

  cout << "b.magnitude = (" << magnitude << "and b.angle = (" << angle << ")." << endl;







  complex c = b;// test the copy ctor



  real      = c.getRealPart();

  imaginary = c.getImaginaryPart();

  magnitude = c.getMagnitude();

  angle     = c.getAngle();



  cout << "Testing copy ctor" << endl;

  cout << "c.real = (" << real << ") and c.imaginary = (" << imaginary << ")." << endl;

  cout << "c.magnitude = (" << magnitude << "and c.angle = (" << angle << ")." << endl;



  a = b;// test the assignment operator



  real      = a.getRealPart();

  imaginary = a.getImaginaryPart();

  magnitude = a.getMagnitude();

  angle     = a.getAngle();



  cout << "Testing assignment operator" << endl;

  cout << "a.real = (" << real << ") and a.imaginary = (" << imaginary << ")." << endl;

  cout << "a.magnitude = (" << magnitude << "and a.angle = (" << angle << ")." << endl;

  



  return 0;

}
