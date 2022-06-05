import java.lang.Iterable ;
class MainClass{
	public static void main(String args[]){
		Utils us = new Utils();
		String str = "ahmed";
		us.is_alpha(args[0],us::letter );
		
	}
}

@FunctionalInterface
interface StringFunction{
	boolean letter_only(String str);
}

class Utils{

	public void is_alpha(String s1 , StringFunction sf){
		 if (sf.letter_only(s1))
		 	System.out.println("it's contain alphapet only");
		 else 
		 	System.out.println("it's not contain alphapet only");
	}/*
	StringFunction letter = (str)->{
	
		for(Character ch : str){
			if(!Character.isLetter(ch))
				return false ;
		}
	}*/
	
	
	public  boolean letter(String str){
		for (int i = 0; i < str.length(); i++) {
			if(!Character.isLetter(str.charAt(i)));
			return false ;
		}
		return true ;		
	}
}
