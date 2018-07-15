
public abstract class Unit {
    protected int HP;
    protected int attackPoint;
    protected int armor;

    public abstract void go();
    public abstract void stop();
    public abstract void hold();
    public abstract void patroll();
    public abstract void attack(Unit unit);

}
