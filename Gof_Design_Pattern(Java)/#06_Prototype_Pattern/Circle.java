import java.util.logging.SocketHandler;

public class Circle extends Shape {
    private int x,y,r;

    public Circle(int x,int y,int r)
    {
        super();
        this.x=x;
        this.y=y;
        this.r=r;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int getR() {
        return r;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setR(int r) {
        this.r = r;
    }

    public Circle copy() throws CloneNotSupportedException
    {
        Circle circle = (Circle) clone();
        circle.x+=1;
        circle.y+=1;

        return circle;
    }
}
