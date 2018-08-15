package ComputerParts;

public class CPU {
    public void freeze() {
        System.out.println("CPU freeze");
    }
    public void jump(long position) {
        System.out.println(position+" 주소로 점프 함");
    }
    public void execute() {
        System.out.println("CPU를 실행합니다.");
    }
}
