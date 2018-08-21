import java.util.Date;

public class ChatRoom
{
    public static void showMessage(User _user, String _message)
    {
        System.out.println(new Date().toString()+ "[ "+_user.getName()+" ] : "+ _message);
    }
}