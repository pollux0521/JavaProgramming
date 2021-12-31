import javax.swing.*;

public class MyFrame extends JFrame{
	public MyFrame(){
		setTitle("300x300 make swing frame");
		setSize(300,300);
		setVisible(false);
	}
	
	public static void main(String[] args){
		MyFrame frame = new MyFrame();
	}
}