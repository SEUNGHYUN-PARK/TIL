package Element;

import Visitor.CarElementVisitor;

public class Wheel implements CarElement{
    private  String name;

    public Wheel(String _name)
    {
        name = _name;
    }

    public String getName()
    {
        return this.name;
    }

    @Override
    public void accept(CarElementVisitor visitor) {
        visitor.visit(this);
    }
}
