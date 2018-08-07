public abstract class Topping implements Cookie {
    protected Cookie cookie;
    public Topping(Cookie _cookie)
    {
        this.cookie=_cookie;
    }

    @Override
    public abstract String getName();
}
