#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>


class complex {

 private:
  double real;
  double img;

 public:
  complex(void); // default c-tor                                                      

  complex(double, double);

  virtual ~complex(void); // d-tor                                                     

  double getRealPart();
  double getImaginaryPart();
  double getMagnitude();
  double getAngle();

};

#endif






