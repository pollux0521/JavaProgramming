import java.util.*;

class Student{
	int id;
	String tel;
	public Student(int id, String tel){
		this.id = id; this.tel = tel;
	}
	public int getId(){
		return this.id;
	}
	public String getTel(){
		return this.tel;
	}
}

public class HashMapStudentEx{
	public static void main(String[] args){
		HashMap<String, Student> map = new HashMap<String, Student>();
		
		map.put("hwang", new Student(1,"010-111-1111"));
		map.put("lee", new Student(2, "010-222-2222"));
		map.put("kim" , new Student(3, "010-333-3333"));
		
		Scanner scanner = new Scanner(System.in);
		
		while(true){
			System.out.print("search name:");
			String name = scanner.nextLine();
			if(name.equals("exit"))
				break;
			Student student = map.get(name);
			
			if(student == null)
				System.out.println(name + "is no member");
			else
				System.out.println("id : " + student.getId() + "call : " + student.getTel());
			
		}
		scanner.close();
	}
}