package com.javalec.ex;

public class Wallet {
    private static int total = 500;
    private final static int num=100;
    public Wallet() {

    }

    public void withdraw(int num) {
        total = total - num;
        System.out.println(num+"원 인출완료");
    }

    public int printtotal(){
        return this.total;
    }
}
