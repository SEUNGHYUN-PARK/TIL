public class Main {
    public static void main(String[] args) {

        Adapter adapter = new AdapterC();
        System.out.println(adapter.halfof(100f));
        System.out.println(adapter.twiceof(200f));
    }
}
