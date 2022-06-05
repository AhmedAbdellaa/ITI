//import java.lang.Exception;
import java.util.Scanner ;
import java.io.FileInputStream;
import java.io.FileNotFoundException ;
import java.util.NoSuchElementException ; //unchaked 

class MainClass{
	public static void main(String args[]){
		String choose ;
		//unchacked  exbreation 
		if(args.length != 0 ){
			choose = args[0] ;
				
			switch(choose){
				case ("1"):
					//using my build exception class
					TestException te = new TestException();
					te.computeFactorial(Integer.parseInt(args[1]));
					//end build exciption 
					break ;
				case("2"):
					//try with resources and multi catch and try what happend if i add finally to try with resources
					try(Scanner in = new Scanner(new FileInputStream("ff.txt"))){
						
						//while(in.hasNext())
						System.out.println(in.next(":"));
					}catch(FileNotFoundException e){
						System.out.println(e);//file not found
					}catch (NoSuchElementException e){
						System.out.println(e);//if no more tokens are available
					}catch(IllegalStateException e){
						System.out.println(e);//if this scanner is closed
					}
					/*
					finally {
						in.close();
					}
					*/// error: cannot find symbol
					break ;

				case("3"):
					//finally

					Scanner in =new Scanner();
					try{
						in =  new FileInputStream("ffs.txt");
						System.out.println(in.next(":"));
						System.out.println("hellos inside ");
					}catch(Exception e){
						System.out.println(e);
					}finally{
										System.out.println("hellos out ");
						in.close();
					}
					break ;
			}//end switch cases
			
		}else{
			System.out.println("no parmater enter !! this massage from unchacked exsiption");
			
		}
		//end of unchacke		
	}//end main funcion	
}//end MainClass
class TestException 
{
	private int fact(int n) throws NewException
	{
		if(n<0) throw new NewException() ;
		if(n== 1) return 1;
		return n*fact(n-1);
	}
	public void computeFactorial(int n){
		try{	
			System.out.println(this.fact(n));
		}catch(NewException ne){
			ne.printStackTrace();
			System.out.println("enter positive number");
		}
	}//end computeFactorial
}//end TestException class

class NewException extends Exception
{
	public NewException(){
		System.out.println("new exception found");
	}
	public NewException(String ss){
		System.out.println("all things closed success " + ss);
	}
}
