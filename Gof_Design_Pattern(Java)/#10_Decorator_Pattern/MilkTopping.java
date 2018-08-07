public class MilkTopping extends Topping {

    public MilkTopping(Cookie _cookie) {
        super(_cookie);
    }

    @Override
    public String getName() {
        return "우유맛 "+cookie.getName();
    }
}
