//package lab1 ;
//import lab1;
import Fconvert ;
class Tempreature {
	public static void main(String args[]){
	Temp tt = new temp() ;
		System.out.println("degrre in Fahrenheit is : " + tt.convert(Double.parseDouble(args[0])));
		
	}
	

}
class Temp implements fconvert{
	//@Override 
	public  double convert(double cel){
		return (cel * 9/5) + 32 ; 
	}
}

