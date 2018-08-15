import Currency.Currency;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ATMDispenseChain atmDispenseChain = new ATMDispenseChain();
        Scanner sc = new Scanner(System.in);
        while(true)
        {
            System.out.print("Enter Amount to dispense : ");
            int amount = sc.nextInt();
            if(amount%10!=0)
            {
                System.out.println("Amount should be in multiple of 10s");
                continue;
            }
            atmDispenseChain.getDispenseChain().dispense(new Currency(amount));
        }
    }
}
