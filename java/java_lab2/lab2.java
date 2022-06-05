import java.util.StringTokenizer;  //lab2 using StringTokenizer
import java.util.regex.Pattern;    //lab3 using regular exprition
import java.util.regex.Matcher ;    //lab3 using regular exprition
class lab2 {
	public static void main(String args[]){
		int arr[] = new int[10];
		String choose = args[0]; //first input to choose which lab
		int counter = 0 ;
		//input
		String sentance = args[1];
		String find = args[2] ;
		switch(choose){
			case "lab1" :
			/******lab 1*******/
				
				String str_arr [] = sentance.split(" ");
				for(int i = 0 ; i< str_arr.length;i++){
					if (str_arr[i].equals(find))
						counter++;
				}
				
			      	System.out.println("number of word "+find +" : "+counter); 
		      		break;
		      	/********lab2 ********/
			case "lab2" :
				StringTokenizer tokens = new StringTokenizer(sentance," ");
				while(tokens.hasMoreTokens()){
					if(tokens.nextToken().equals(find))
						counter++;
					
				}
				System.out.println("number of word "+find +" : "+counter); 
				break ; 
			/********lab3*******/
			case "lab3" :
				Pattern pt = Pattern.compile(find); //compile is static function return pattern object  from compiled regular exprition 
				//then we will use method matcher to find pattern in given sentance
				Matcher ma = pt.matcher(sentance); // it take pargraph to serch for pattern in it and return Matcher object 
				//after we we found pattern in pargraph then we will count it
				//for check if thier result or no we use find(true when find first match) or matches (true when find match throw entire pargraph 
				counter = 0 ;
				
				if(ma.find()){
					counter++;
					while(ma.find())
						counter++;	
				 	System.out.println("number of word "+find +" : "+counter); 
			 	}
			 	else
			 		System.out.println(":(there is no matches found!!"); 
			
				break;
			/////////////////////////
			default :
			System.out.println("no lab chosee");
			
			
		}
		
	}
	
	 
	
	


}
