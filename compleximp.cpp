#include "complex.h"
# <cmath>
complex::complex(double newReal, double newImg){
  real=newReal;
  img=newImg;
}

complex::complex(){                       // Set Constructor                           
  real=0.0;
  img=0.0;
}

complex::~complex(){}

double complex::getRealPart(){
  return real;
}

double complex::getImaginaryPart(){

  return img;
}


double complex::getMagnitude(){
  return (sqrt((real*real)+(img*img)));
}

double complex::getAngle(){
  return atan(img/real);
}

