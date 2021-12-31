public class Rectangle extends Shape{
	private double _width;
	private double _height;
	
	public Rectangle(){
		_width = 0;
		_height = 0;
	}
	
	public Rectangle(double width, double height){
		_width = width;
		_height = height;
	}
	
	public int setwidth(double width){
		_width = width;
		return 0;
	}
	public double getwidth(){
		return _width;
	}
	public int setheight(double height){
		_height = height;
		return 0;
	}
	public double getheight(){
		return _height;
	}
	public double getArea(){
		return _height*_width;
	}
}