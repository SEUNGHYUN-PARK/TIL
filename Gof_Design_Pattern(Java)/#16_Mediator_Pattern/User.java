public class User {
    private String name;

    public User(String _name)
    {
        this.name=_name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void sendMessage(String _message)
    {
        ChatRoom.showMessage(this,_message);
    }
}