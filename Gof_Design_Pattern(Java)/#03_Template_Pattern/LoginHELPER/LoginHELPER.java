package LoginHELPER;

public class LoginHELPER extends abstLoginHelper {
    @Override
    protected String doSecurity(String _info) {
        System.out.println("doSecurity를 시도합니다.");
        return _info;
    }

    @Override
    protected String authentication(String _id, String _Password) {
        System.out.println("authentication을 시도합니다");
        if(_id.equals("abc")&& _Password.equals("abc"))
            return "true info";
        else
            return "false info";
    }

    @Override
    protected int authorization(String _UserName) {
        System.out.println("authorization을 시도합니다");
        return 0;
    }

    @Override
    protected String connection(String _info) {
        System.out.println("connection을 시도합니다");
        return _info;

    }
}
