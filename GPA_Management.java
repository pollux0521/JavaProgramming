class Student{
	private String _name;
	private String _num;
	private Lecture[] _lectures;
	private Grade[] _grades;
	private int _num_of_lectures;
	private final int LECTURE_SIZE = 50;
	
	public Student(String name, String num){
		_name = name; 
		_num = num;
		_num_of_lectures = 0;
		Lecture[] _lectures = new Lecture[LECTURE_SIZE];
	}
	public int register(Lecture lecture){
		_lectures[(_num_of_lectures++)] = lecture;
		return 0;
	}
	public int printInfo(){
		System.out.println(_name + " " + _num);
		return 0;
	}
}

class Professor{
	private String _name;
	private String _num;
	private Lecture[] _lectures;
	private Grade[] _grades;
	public Professor(String name, String num){
		_name = name; 
		_num = num;
	}
	
	
		

}
class Lecture{
	private String _title;
	private Student[] _students;
	private Professor[] _professor;
	private Grade[] _grades;
	private int _num_of_students;
	private final int STUDENT_SIZE = 50;
	public Lecture(String title){
		_title = title;
		_num_of_students = 0;
		Student[] _student = new Student[STUDENT_SIZE];
	
	}
	public int enroll(Student student){
		_students[_num_of_students++] = student;
		return 0;
	}
	public int printEnrollment(){
		for(int i = 0; i<_num_of_students; i++){
			_students[i].printInfo();
		}
	return 0;
	}
}
class Grade{
	private double _gpa;
	private Student _student;
	private Lecture _lectures;
	private Professor _professor;
	
	public Grade(double gpa){
		_gpa = gpa;
	}
	
}
public class GPA_Management{
	public static void main(String[] args){
		Lecture OOP = new Lecture("Object Oriented Programming");
		Lecture Computer_Programming = new Lecture("Computer Programming");
		
		Student Na = new Student("Jiun Na", "1111");
		Student Lee = new Student("Jongwhi", "1112");
		
		Na.register(OOP);
		Lee.register(OOP);
		
		OOP.enroll(Na);
		OOP.enroll(Lee);
		OOP.printEnrollment();
	}
}
		
		
		