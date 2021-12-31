import java.swing.*;
import java.awt.*;

public calss ContentPaneEx extends JFrame{
	public ContentPaneEx(){
		setTitle("CintantPane and JFrame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane();
		contentPane.setBackground(Color.ORANGE);
		contentPane.etLayout(new FlowLAyout());
		
		contentPane.add(new JButton("OK"));
		contentPane.add(new JButton("Cancle"));
		contentPane.add(new JButton("Ignore"));
		
		setSize(300, 150);
		setVisible(true);
	}
	public static void main(String[] args){
		new ContentPAneEx();
	}
}