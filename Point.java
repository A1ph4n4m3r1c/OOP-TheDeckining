//Point.java

package lab_4;


public class Point {
    
   static double x; //Class variables
    static double y;
    
    Point(){  //Default Constructor
        x=3.1415D;
        y=2.17D;
    }
    
    Point(double X){ //Ctor #2
        x=X;
    }
    
    Point(double X, double Y){ //Ctor #3
        x=X;
        y=Y; 
    }
    
    public  double getX(){  //Getpoint X method
        return x;
       }
    
    public double getY(){ //Getpoint Y method
    
        return y;
    }
    
   
    
    
    
    
    
    
    
    
}
