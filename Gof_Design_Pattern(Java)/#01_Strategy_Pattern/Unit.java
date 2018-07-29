
public abstract class Unit {

	private String UnitName;
	private Attack attack;
	private Move move;
	
	public Unit(String name)
	{
		this.UnitName = name;
		System.out.println(name+ " 생성완료");
	}
	public void setAttack(Attack _attack)
	{
		this.attack = _attack;
		attack.setattack();
	}
	public void setMove(Move _move)
	{
		this.move = _move;
		move.setmove();
	}
	public void attack()
	{
		System.out.println(UnitName+"은 " + attack.getClass().getName()+"로 공격합니다");
	}
	public void move()
	{
		System.out.println(UnitName+"은 " + move.getClass().getName()+"로 움직입니다");	
	}
}
