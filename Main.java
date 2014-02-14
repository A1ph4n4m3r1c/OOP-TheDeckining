/* 
* Tyler McCabe (mccabet@wit.edu) 
* Professor Decker
* Object Oriented Programming 
* 2-11-2014
*/

package lab_4;

/*
* ///////////////Lab Four\\\\\\\\\\\\\\\
* Fun with classes, constructors, methods, and math!
*/

public class Main {
        public static void main(String[] args){ //Main funcion
        
            System.out.println("-----------------Lab Four--------------------"); //Who doesnt like CLI ASCII?
           
           Point point1= new Point(); //Construct new Point default object
            
           System.out.println("DEFAULT:");  // 
           System.out.println(point1.getX());
            
           Point point2=new Point(2432.634,5645.23); //Construct more detailed object
           
           System.out.println("CTOR 2 Xget:"); //Check variables with methods
           System.out.println(point2.getX());
           
           System.out.println("CTOR 2 YGET:");
           System.out.println(point2.getY());
           
            Line line=new Line(); //Construct line object
   
           System.out.println("Length of line:");
           System.out.println(line.getLength(point2.getX(),point2.getY())); //Call and execute Line class methods
           
           System.out.println("Angle of line:");
           System.out.println(line.getAngle(point2.getX(),point2.getY()));
   
           System.out.println("-----------------DONE--------------------");

    }
    
}
