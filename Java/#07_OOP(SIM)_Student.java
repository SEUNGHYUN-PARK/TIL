public class Student{
    private String name;
    private int age;
    private int studentnum;
    private String major;

    public Student(String _name, int _age, int _studentnum, String _major)
    {
        this.name = _name;
        this.age = _age;
        this.studentnum = _studentnum;
        this.major= _major;
    }

    public void updateInfo(int _i, String _info)
    {
        switch (_i)
        {
            case 0:
                setName(_info);
                break;
            case 1:
                setAge(Integer.parseInt(_info));
                break;
            case 2:
                setStudentnum(Integer.parseInt(_info));
                break;
            case 3:
                setMajor(_info);
                break;

        }
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getStudentnum() {
        return studentnum;
    }

    public void setStudentnum(int studentnum) {
        this.studentnum = studentnum;
    }

    public String getMajor() {
        return major;
    }

    public void setMajor(String major) {
        this.major = major;
    }
}
