package Element;

import Visitor.CarElementVisitor;

public class Engine implements CarElement{
    @Override
    public void accept(CarElementVisitor visitor) {
        visitor.visit(this);
    }
}
