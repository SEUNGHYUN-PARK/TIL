import java.math.BigDecimal;
import java.math.BigInteger;

public class BigInteger_N_BigDecimalMain {

    public static void main(String[] args) {
        BigInteger bigInteger = new BigInteger("5000000000000000000");
        BigInteger bigInteger1 = new BigInteger("4999990000000000000");

        BigInteger plus = bigInteger.add(bigInteger1);
        BigInteger sub = bigInteger.subtract(bigInteger1);
        BigInteger mul = bigInteger.multiply(bigInteger1);
        BigInteger div = bigInteger.divide(bigInteger1);
        System.out.println(plus);
        System.out.println(sub);
        System.out.println(mul);
        System.out.println(div);

        System.out.println(bigInteger.pow(10));

        BigDecimal b1 = new BigDecimal("0.3");
        BigDecimal b2 = new BigDecimal("0.4");
        System.out.println(b1.add(BigDecimal.valueOf(0.5)));
        System.out.println(b1.multiply(b2));
        System.out.println(b1.divide(b2));
        System.out.println(b1.divide(b2, 5, BigDecimal.ROUND_UP)); // 소수 Scale번째자리에서 올림
    }
}
