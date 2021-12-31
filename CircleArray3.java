class Circle{
	int _radius;
	public Circle(int radius){
		this._radius = radius;
	}
	public double getArea(){
		return 3.14*_radius*_radius;
	}
	
}


public class CircleArray3{
	public int circlereturn(Circle c[]){
		return c.length;
	}
	public static void main(String[] args){
		Circle[] c;
		c = new Circle[5];
		circlereturn(c);
		for(int i=0; i<c.length; i++)
			c[i] = new Circle(i);
		
		for(int i=0; i < c.length; i++)
			System.out.print((int)(c[i].getArea()) + " ");
	}
}