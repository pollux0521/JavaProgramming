public class Circle3{
	int radius;
	public Circle3(int radius){ this.radius = radius;}
	public void set(int radius) {this.radius = radius;}
	public static void main(String[] args){
		Circle3 ob1 = new circlr3(1);
		Circle3 ob2 = new circlr3(2);
		Circle3 s;
		
		s = ob2;
		ob1 = ob2;
		System.out.println("ob1.radius = " + ob1.radius);
		System.out.println("ob2.radius = " + ob2.radius);
	}
}