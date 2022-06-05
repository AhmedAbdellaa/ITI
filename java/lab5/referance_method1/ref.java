class MainClass{
	public static void main(String args[]){
		Utils us = new Utils();
		String s1 = "ahmed";
		String s2 = "ahmedMoamed";
		String result =us.betterString(s1,s2,Utils::compare );
		System.out.println(result);
	}
}

@FunctionalInterface
interface StringFunction{
	boolean compare(String s1 , String s2);
}

class Utils{

	public String betterString(String s1 , String s2 , StringFunction sf){
		 if (sf.compare(s1,s2))
		 	return s1 ;
		 else 
		 	return s2 ;
	}
	
	public static boolean compare(String s1 , String s2){
		return s1.length() >s2.length() ;
	}
}
