import java.util.ArrayList;


class MainClass{
	public static void main(String args[]){
		//ArrayList<Rectangle> rectangles= new ArrayList<>();
				
		//rectangles.add(new Rectangle());
		//rectangles.add(new Rectangle());
		ArrayList<Shape> circles= new ArrayList<>();
		circles.add(new Circle());
		circles.add(new Circle());
		Test tt = new Test();
		
		//tt.print(rectangles);
		tt.print(circles);
		
		Shape ss = new Rectangle();
		
		ss.draw();
	}
}

 class Shape{
	  void draw(){
	  System.out.println("it's ");
	  }
}

class Rectangle extends Shape{

	public void draw(){
		System.out.println("it's rectangle");
	}
}

class Circle extends Shape{
	public void draw(){
		System.out.println("it's circle");
	}
}

class Test {
	public void print(ArrayList<Shape> shapes){
		for(Shape shape :shapes){
			shape.draw();
		}
	}
}




