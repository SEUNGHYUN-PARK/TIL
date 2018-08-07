package Classes;

import Implementation.ITV;

public abstract class AbstRemoteController {
    private ITV itv;
    public AbstRemoteController(ITV _itv)
    {
        this.itv = _itv;
        System.out.println("해당 리모컨이 " + itv.getClass().getName()+" 에 연결되었습니다.");
    }
    public void turnON()
    {
        itv.tvTURNON();
    }
    public void turnOFF()
    {
        itv.tvTURNOFF();
    }
    public void setChannel(int _target)
    {
        itv.switchChannel(_target);
    }

}
