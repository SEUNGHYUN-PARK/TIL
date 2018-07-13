import java.util.ArrayList;

public class StudentExpel {
    ArrayList<Student> studentExpel;

    public StudentExpel()
    {
        studentExpel = new ArrayList<Student>();
    }
    public void addExpelStudent(String _name, int _age, int _studentNum, String _major)
    {
        studentExpel.add(new Student(_name,_age,_studentNum,_major));
        System.out.println(_name + "학생 제적정보 등록 완료");
    }
}
