class Circle{
	int _radius;
	public Circle(int radius){
		this._radius = radius;
	}
	
	public double getArea(){
		return 3.14*_radius*_radius;
	}
}

public class CircleArray{
	private Circle[] c;
	
	public CircleArray(){
		c = new Circle[5];
		
		for(int i = 0; i < c.length; i++)
			c[i] = new Circle(i);
	}
	
	public void print_getArea(){
		for(int i=0; i < c.length; i++)
			System.out.print((int)(c[i].getArea())+" ");
	}
	
	public static void main(String[] args){
		CircleArray ch = new CircleArray();
		ch.print_getArea();
	}
}