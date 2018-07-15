public class ParentClass {
    private String FatherName;
    private String MotherName;
    protected int num;
    private static int MONEY=500;
    public ParentClass()
    {
    }
    public String getFatherName() {
        return FatherName;
    }

    public void setFatherName(String fatherName) {
        FatherName = fatherName;
    }

    public String getMotherName() {
        return MotherName;
    }

    public void setMotherName(String motherName) {
        MotherName = motherName;
    }
    public void makecook()
    {
        System.out.println("어버이는 김치찌개를 끓일 수 있어요");
    }

}
