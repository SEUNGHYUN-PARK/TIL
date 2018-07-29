
public class Marine extends Unit{

	public Marine(String name) {
		// TODO Auto-generated constructor stub
		super(name);
		super.setAttack(new Gun());
		super.setMove(new Walk());
	}

}
