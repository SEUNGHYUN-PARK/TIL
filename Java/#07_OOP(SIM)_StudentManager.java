import java.util.ArrayList;

public class StudentManager {

    ArrayList<Student> students = new ArrayList<Student>(); //ArrayList 라는 자료구조가 있다 그냥 참고만하자
    StudentExpel studentExpel = new StudentExpel();

    public static void main(String[] args) {
        StudentManager studentManager = new StudentManager();
        studentManager.addstudent("김수현",31,20180713,"연극영화");
        studentManager.addstudent("정지훈",20,20180712,"컴퓨터공학과");
        studentManager.addstudent("권혁수",30,20180711,"정보통신공학과");
        studentManager.addstudent("제주도",25,20180710,"화학공학과");
        studentManager.addstudent("우워우",35,20180709,"법학과");

        //학생의 정보를 출력
        printstudent(studentManager);
        studentManager.students.get(0).updateInfo(1,"15");

        printstudent(studentManager);

    }
    public void addstudent(String name, int age, int studentNum, String major)
    {
        students.add(new Student(name,age,studentNum,major));
        System.out.println(name+"학생 등록 완료했습니다.");
    }
    public static void printstudent(StudentManager studentManager)
    {
        for (int i = 0; i < studentManager.students.size(); i++) {
            System.out.println(studentManager.students.get(i).getName()+" "+studentManager.students.get(i).getAge()+" "+studentManager.students.get(i).getMajor()+" "+studentManager.students.get(i).getStudentnum());
        }
        System.out.println();
    }
}
