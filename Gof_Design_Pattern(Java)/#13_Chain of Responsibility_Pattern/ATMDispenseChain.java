import Handler.DispenseChain;
import Handler.Dollar10Dispenser;
import Handler.Dollar20Dispenser;
import Handler.Dollar50Dispenser;

public class ATMDispenseChain {
    private DispenseChain dispenseChain;
    public ATMDispenseChain()
    {
        this.dispenseChain = new Dollar50Dispenser();
        DispenseChain dispenseChain1 = new Dollar20Dispenser();
        DispenseChain dispenseChain2 = new Dollar10Dispenser();

        dispenseChain.setNextChain(dispenseChain1);
        dispenseChain1.setNextChain(dispenseChain2);
    }

    public DispenseChain getDispenseChain() {
        return dispenseChain;
    }
}
