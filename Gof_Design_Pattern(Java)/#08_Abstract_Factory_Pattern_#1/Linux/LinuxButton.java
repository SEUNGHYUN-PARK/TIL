package Linux;

import abst.Button;

public class LinuxButton implements Button {
    @Override
    public void click() {
        System.out.println("리눅스버튼");
    }
}
