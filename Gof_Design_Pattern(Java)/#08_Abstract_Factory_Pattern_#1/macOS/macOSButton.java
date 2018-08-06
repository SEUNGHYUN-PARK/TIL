package macOS;

import abst.Button;

public class macOSButton implements Button {
    @Override
    public void click() {
        System.out.println("맥버튼");
    }
}
