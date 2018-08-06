package Linux;

import abst.Button;
import abst.GuiFac;
import abst.TextArea;

public class LinuxGuiFac implements GuiFac {
    @Override
    public Button createButton() {
        // 버튼을 구현함
        return new LinuxButton();
    }

    @Override
    public TextArea createTextArea() {
        return new LinuxTextArea();
    }
}
