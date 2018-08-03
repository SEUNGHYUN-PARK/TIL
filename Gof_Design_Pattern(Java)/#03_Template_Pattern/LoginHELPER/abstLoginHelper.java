package LoginHELPER;

public abstract class abstLoginHelper {
    protected abstract String doSecurity(String _info);

    protected abstract String authentication(String _id, String _Password);

    protected abstract int authorization(String _UserName);

    protected abstract String connection(String _info);

    public String RequestConnection(String _info) {
        String id, password, UserName, decodedInfo, userInfo;

        //암호화된 정보를 복호화 합니다.
        decodedInfo = doSecurity(_info);

        //decodedinfo에서 id와 password를 추출
        id = "abc";
        password = "abc";

        userInfo = authentication(id, password);

        UserName = "abc";

        int result = authorization(UserName);

        switch (result) {
            case 0:
                //무료회원
                break;
            case 1:
                //유료회원
                break;
            case 2:// 게임마스터
                break;
            case 3: // 접속 권한 없음
                break;
            default:
                break;

        }
        return connection(userInfo);
    }
}