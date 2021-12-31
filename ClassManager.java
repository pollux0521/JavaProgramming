import java.util.Vector;
import java.io.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
class Class {
	private String _name;

	public Class(String name) { _name = name; }

	public String getName() { return _name; }
	public int print() { 
	System.out.println(_name);
	return 0;
	}
}
class ClassFileLoader{
	 private ClassManager _classes;
	 
	 public ClassFileLoader(String fName, ClassManager classes){
		 _classes = classes;
		 loadToClasses(fName);
	 }
	 
	 public int loadToClasses(String fName){
		 try{
			 File file = new File(fName);
			 FileReader fReader = new FileReader(file);
			 BufferedReader bufReader = new BufferedReader(fReader);
			 String line = "";
			 String[] str;
			 
			 while((line = bufReader.readLine()) != null){
				 str = line.split("\\,");
				 _classes.add(new Class(str[0],str[1]));
			 }
			 bufReader.close();
			 fReader.close();
		 }
		 catch(FileNotFoundException e) {}
		 catch(IOException e){ }
		return 0;
	}
}

public class ClassManager {
	private Vector<Class> _classes;
	private ClassFileLoader _cLoader;
	
	public ClassManager() {
	_classes = new Vector<Class>();
	}

	public int add(String name) {
		Class c = new Class(name);
		_classes.add(c);
	return 0;
	}
	public int printAll() {
		for(int i=0; i < _classes.size(); i++) {_classes.get(i).print();}
		return 0;
	}
	
	public Class find(String name) { 
	Class c = null;
	for(int i=0; i<_classes.size();i++){
		if(_classes.get(i).getName().equals(name)) {
			c = _classes.get(i); 
			break;
			}
	/*Find Class with the name from the parameter*/
		}
	return c;
	}	
	//public Class search
	
	public static void main(String[] args) {
		ClassManager cm = new ClassManager();
		ClassFileLoader cf = new ClassFileLoader("classes", cm);
		cm.printAll();
	}
}
		
