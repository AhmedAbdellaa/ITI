
import java.lang.Math;

class MainClass {
	public static void main(String args[]){
	fun ff = new fun() ;
	double result[] = ff.root(Double.parseDouble(args[0]) ,Double.parseDouble(args[1]) ,Double.parseDouble(args[2])) ;
		System.out.println("root1 is : " + result[0]);
		System.out.println("root1 is : " + result[1]);		
	}
	

}
class fun implements Root{
	//@Override 
	public  double[] root(double a , double b , double c){
		double result [] = new double[2];
		result[0] = (-b + (Math.sqrt(b*b - 4 *a *c)))/2*a ; 
		result[1] = (-b - (Math.sqrt(b*b - 4 *a *c)))/2*a ; 
		return result ;
	}
}

@FunctionalInterface
interface Root{
 public double[] root(double a , double b , double c);
}
