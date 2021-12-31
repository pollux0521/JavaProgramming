public class Book{
	String title;
	String author;
	void show(){ System.out.println(title+ ""+ author);}
	public Book2(){
		this("", "");
		System.out.println("called Creator");
	}
	
	public Book2(String title){
		this(title, " no author");
	}
	public Book2(String title, String author){
		this.title = title; this.author = author;
	}
	public static void main(String[] args){
		Book2 LittlePrince = new Book2("young prince", "mouse");
		Book2 loveStroy = new Book2("chunhyang");
		Book2 emptyBook = new Book2();
		loveStroy.show();
	}
}	
