public class Article{	
	private String _title;
	private String _publishment;
	
	void show(){ System.out.println(_title + " " + _publishment);}
	
	public Article(){
		_title = "";
		_publishment = "";
		System.out.println("called creator");
	}
	
	public Article(String title){
		this(title, "no publishment");	
	}

	public Article(String title, String publishment){
		this._title = title; this._publishment = publishment;
	}
	
	public static void main(String[] args){
		Article Chosun = new Article("The Chosun Ilbo@", "Chosun Ilbo Corporation");
		
		Chosun.show();
	}
}