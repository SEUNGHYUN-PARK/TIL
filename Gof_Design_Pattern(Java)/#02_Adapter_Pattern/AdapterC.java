public class AdapterC implements Adapter {
    @Override
    public Double twiceof(Float num) {
        return Math.doubled(num.doubleValue());
    }

    @Override
    public Double halfof(Float num) {
        return Math.half(num);
    }
}
