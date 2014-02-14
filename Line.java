//Line.java

package lab_4;

public class Line {
    
    static double x; 
    static double y;
    
    public double getLength(double X, double Y){
        x=X;
        y=Y;
        return Math.sqrt((x*x)+(y*y)); //Return length
    }
    
    public double getAngle(double X, double Y){
        x=X;
        y=Y;
        return (Math.acos((x/Math.sqrt((x*x)+(y*y))))*57.29); //Return the angle (Degrees)
    }
    
    
    
    
    
    
    
    

}


