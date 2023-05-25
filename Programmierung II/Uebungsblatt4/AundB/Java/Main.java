package Uebungsblatt4.AundB.Java;

public class Main {
    public static void main(String[] args) {
        A a1 = new A();
        A a2 = new A(50);
        B b1 = new B();
        B b2 = new B(100, 200);

        a1.ausgabe();
        System.out.println();
        a2.ausgabe();
        System.out.println();
        b1.ausgabe();
        System.out.println();
        b2.ausgabe();
        System.out.println();
    }
}
