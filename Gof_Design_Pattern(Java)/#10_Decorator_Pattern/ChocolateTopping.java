public class ChocolateTopping extends Topping{
    public ChocolateTopping(Cookie _cookie) {
        super(_cookie);
    }

    @Override
    public String getName() {
        return "초콜릿 맛 " + cookie.getName();
    }
}
