public class Circle1{
	int _radius;
	String _name;
	
	public Circle1(){
		_radius = 1; _name = "";
	}
	
	public Circle1(int r, String n){
		_radius = r; _name = n;
	}
	
	public double getArea(){
		return 3.14*_radius*_radius;
	}
	
	public static void main(String[] args){
		Circle1 pizza = new Circle1(10, "java_pizza");
		
		double area = pizza.getArea();
		System.out.println(pizza._name + "area is " + area);
		
		Circle1 donut = new Circle1();
		donut._name = "donut_pizza";
		area = donut.getArea();
		System.out.println(donut._name + "area is " + area);
	}
}