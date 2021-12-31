public class Student{
	private String _Name;
	private	String _S_Num;
	private	String _Address;
	private	String _Phone;
	
	public Student(){
		System.out.println("hi");
	}
	
	public void setName(String name){
		_Name = name;
	}
	
	public String getName(){
		return _Name;
	}
	public void setS_Num(String s_num){
		_S_Num = s_num;
	}
	
	public String getS_Num(){
		return _S_Num;
	}
	public void setAddress(String address){
		_Address = address;
	}
	
	public String getAddress(){
		return _Address;
	}
	public void setPhone(String phone){
		_Phone = phone;
	}
	
	public String getPhone(){
		return _Phone;
	}
	
	
	public static void main(String args[]){
		Student s = new Student();
		s.setName("InCheol");
		System.out.println(s.getName());
	}	
	
	
}