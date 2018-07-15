aimport java.util.Timer;
import java.util.TimerTask;

public class TimerEx {

    public TimerEx() throws InterruptedException
    {
        System.out.println("^^");
        Timer timer = new Timer(true);
        TimerTask t1 = new Timertask1();
        TimerTask t2 = new Timertask2();

        timer.schedule(t1,2000);
        timer.schedule(t2,10000);
        Thread.sleep(14000);
        System.out.println("**");
    }
}
