package Element;

import Visitor.CarElementVisitor;

public interface CarElement {
    void accept(CarElementVisitor visitor);
}
