package macOS;

import abst.Button;
import abst.GuiFac;
import abst.TextArea;

public class macOSGuiFac implements GuiFac {
    @Override
    public Button createButton() {
        return new macOSButton();
    }

    @Override
    public TextArea createTextArea() {
        return new macOSTextArea();
    }
}
