class please{
	int _radius;
	public please(int radius){
		this._radius = radius;
	}
	
	public void setplease(test[] t){
		for(int i=0;i<t.length;i++)
			t[i] = new please(i);
	}
	
}
public class test{
	public static void main(String [] args){
		please t = new please[5];
		t.settest(t);
	}
}