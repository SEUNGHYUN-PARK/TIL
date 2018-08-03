import LoginHELPER.LoginHELPER;
import LoginHELPER.abstLoginHelper;

public class Main {
    public static void main(String[] args) {
        abstLoginHelper abstLoginHelper = new LoginHELPER();
        abstLoginHelper.RequestConnection("info");
    }
}
