import java.math.BigDecimal;
class MainClass{
	public static void main(String args[]){
		Complex<BigDecimal> myComp1 = new Complex<>(new BigDecimal(5) ,new BigDecimal(7));
		Complex<BigDecimal> myComp2 = new Complex<>(new BigDecimal(3) ,new BigDecimal(2));
		Complex<BigDecimal> resultComp = new Complex<>(new BigDecimal(1) ,new BigDecimal(1));
			    

		//myComp1.setReal(Integer.parseInt(args[0])) ;
		//myComp1.setImag(Integer.parseInt(args[1])) ;
		
		System.out.println("real is " + myComp1.getReal());
		System.out.println("imag is " +myComp1.getImag());		

		//myComp2.setReal(Integer.parseInt(args[2])) ;
		//myComp2.setImag(Integer.parseInt(args[3])) ;
		
		System.out.println("real is " + myComp2.getReal());
		System.out.println("imag is " +myComp2.getImag());		
		
		resultComp = myComp1.add(myComp2) ;
		resultComp.print();
		
		resultComp = myComp1.sub(myComp2) ;
		resultComp.print();
		}
}

class Complex<T extends BigDecimal>{
	private T real;
	private T imag ;
	Complex(){
	}
	Complex(T r, T i){
		real = r;
		imag = i;
	}
	void setReal(T r)
	{
	    real = r;
	}
	void setImag(T i)
	{
	    imag = i;
	}
	T getReal()
	{
	    return real;
	}
	T getImag()
	{
	    return imag;
	}
	Complex add(Complex c)
	{
	
	    Complex tmp = new Complex(real.add(c.real),imag.add(c.imag)) ;
	   // tmp.real= real.add(c.real);
	    //tmp.imag = imag.add(c.imag);
	    return tmp ;
	    
	    /*
	     BigDecimal r= real.add(c.real);
	    BigDecimal i = imag.add(c.imag);
	    return new Complex(r,i) ;
	    */
	}
	Complex sub(Complex c)
	{
	    Complex tmp;
	    BigDecimal r = real.subtract(c.real);
	    BigDecimal i = imag.subtract(c.imag);
	    return new Complex(r,i) ;
	}
	void print()
	{
	    if(imag.compareTo(new BigDecimal(0))==-1)
	    {
	    	System.out.println(real +"-" + imag.abs()+ "i");
	    }
	    else
	    {
    	    	System.out.println(real +"+" + imag.abs()+ "i");

	    }
	}

	
}
