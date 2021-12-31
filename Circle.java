public class Circle extends Shape{
	private double _radius;
	
	public Circle(){
		_radius = 0;
		
	}
	
	public Circle(double radius){
		_radius = radius;
	}
	public int setRadius(double radius){
		_radius = radius;
		return 0;
	}
	
	public double getRadius(){
		return _radius;
	}
	
	public double getArea(){
		return _radius*_radius*3.14;
	}
	
}