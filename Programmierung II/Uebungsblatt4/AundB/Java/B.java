package Uebungsblatt4.AundB.Java;

public class B extends A {
    private int b;

    public B() {
        this.b = 0;
    }

    public B(int a, int b) {
        this.a = a;
        this.b = b > 0 ? b : 0;

    }

    public void ausgabe() {
        System.out.println("a: " + a + ", b: " + b);
    }
}
