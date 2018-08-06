package Windows;

import abst.Button;
import abst.GuiFac;
import abst.TextArea;
import macOS.macOSButton;
import macOS.macOSTextArea;

public class WindowsGuiFac implements GuiFac {
    @Override
    public Button createButton() {
        return new WindowsButton();
    }

    @Override
    public TextArea createTextArea() {
        return new WindowsTextArea();
    }
}
