import java.util.function.Function ;

class MainClassF{
	public static void main(String args[]){
		Convert_to tt = new Convert_to() ;
		System.out.println("degree in Fahrenheit is : " + tt.apply(Double.parseDouble(args[0])));
		//Function<Double ,Double> convert = cel ->(cel * 9/5) + 32 ; //why Double not double
		
		//System.out.println("degree is " +convert.apply(Double.parseDouble(args[0])));
		
	}
	
}

class Convert_to implements Function<Double,Double>{
	public Double apply(Double cel){
		return (cel * 9/5) + 32 ; 
	}
	
}
