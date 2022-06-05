import java.util.function.Function ;

class MainClassF{
	public static void main(String args[]){

		sqrtfun ff = new sqrtfun() ;
		
		Double data[] = {Double.parseDouble(args[0]) ,Double.parseDouble(args[1]) ,Double.parseDouble(args[2])};
		Double result[] = ff.apply(data) ;
		System.out.println("root1 is : " + result[0]);
		System.out.println("root1 is : " + result[1]);				
	}
	
}

class sqrtfun implements Function<Double[],Double[]>{
	
	public  Double[] apply(Double eq[]){
	
		double a = eq[0] ;
		double b = eq[1] ;
		double c = eq[2] ;
		
		Double result [] = new Double[2];
		result[0] = (-b + (Math.sqrt(b*b - 4 *a *c)))/2*a ; 
		result[1] = (-b - (Math.sqrt(b*b - 4 *a *c)))/2*a ; 
		return result ;
	}
	
}
