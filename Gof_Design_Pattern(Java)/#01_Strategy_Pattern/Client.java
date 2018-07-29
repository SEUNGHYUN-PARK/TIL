
public class Client {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Unit marine = new Marine("marine");
		Unit vulture = new Vulture("vulture");
		marine.attack();
		marine.move();
		
		vulture.attack();
		vulture.move();

	}

}
