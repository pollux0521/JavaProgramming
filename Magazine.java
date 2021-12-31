public class Magazine{	
	String _title;
	String _publishment;
	
	void show(){ System.out.println(_title + " " + _publishment);}
	
	public Magazine(){
		this("","");
		System.out.println("called creator");
	}
	
	public Magazine(String title){
		this(title, "no publishment");	
	}

	public Magazine(String title, String publishment){
		this._title = title; this._publishment = publishment;
	}
	
	public static void main(String[] args){
		Magazine nylon = new Magazine("nylon", "Seoul_Culture_history");
		
		nylon.show();
	}
}
		
	