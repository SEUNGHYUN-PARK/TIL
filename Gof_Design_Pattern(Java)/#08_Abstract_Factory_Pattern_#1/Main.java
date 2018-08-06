import Linux.LinuxGuiFac;
import abst.Button;
import abst.GuiFac;
import abst.TextArea;
import concrete.FactoryInstance;
import macOS.macOSGuiFac;

public class Main {
    public static void main(String[] args) {
//        GuiFac fac = new LinuxGuiFac();
//        Button button = fac.createButton();
//        TextArea area = fac.createTextArea();
//
//        System.out.println(area.getText());
//        button.click();
//
//        GuiFac macOSfac = new macOSGuiFac();
//        TextArea mactextArea = macOSfac.createTextArea();
//        Button macButton = macOSfac.createButton();
//        macButton.click();
//        System.out.println(mactextArea.getText());
//
        GuiFac factory = FactoryInstance.getGuiFac("Ubuntu");
        Button button  = factory.createButton();
        TextArea area = factory.createTextArea();
        System.out.println(area.getText());
        button.click();


    }
}
