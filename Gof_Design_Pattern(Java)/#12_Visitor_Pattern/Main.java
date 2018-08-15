import Element.Car;
import Visitor.CarElementDoVisitor;
import Visitor.CarElementPrintVisitor;

public class Main {
    public static void main(String[] args) {
        Car car = new Car();
        car.accept(new CarElementPrintVisitor());
        System.out.println();
        car.accept(new CarElementDoVisitor());
    }
}
