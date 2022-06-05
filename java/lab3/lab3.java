

class Tempreature {
	public static void main(String args[]){
	Temp tt = new Temp() ;
		System.out.println("degrre in Fahrenheit is : " + tt.convert(Double.parseDouble(args[0])));
		
	}
	

}
class Temp implements Fconvert{
	//@Override 
	public  double convert(double cel){
		return (cel * 9/5) + 32 ; 
	}
}

@FunctionalInterface
interface Fconvert{
 public double convert(double cel);
}
