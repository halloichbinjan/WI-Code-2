
// package Uebungsblatt3;

import java.util.Scanner;

// Code-Auszug in Java 
public class Bruch {
    private int zaehler, nenner;

    public static void main(String[] args) {
        Bruch b1 = new Bruch(1, 1);
        Bruch b2 = new Bruch(1, 2);

        System.out.print("b1: ");
        b1.ausgabe();
        System.out.print("b2: ");
        b2.ausgabe();

        System.out.println("Addition ergibt: " + b1.addiere(b2));
        System.out.println("Subtraktion ergibt: " + b1.subtrahiere(b2));
        // ...
    }

    Bruch() {
        zaehler = 1;
        nenner = 1;
    }

    Bruch(int z, int n) {
        zaehler = z;
        nenner = n;
    }

    Bruch(Bruch other) {
        this.zaehler = other.zaehler;
        this.nenner = other.nenner;
    }

    public boolean istKleiner(Bruch other) {
        double thisValue = (double) this.zaehler / this.nenner;
        double otherValue = (double) other.zaehler / other.nenner;
        return thisValue < otherValue;
    }

    public boolean istGroesser(Bruch other) {
        double thisValue = (double) this.zaehler / this.nenner;
        double otherValue = (double) other.zaehler / other.nenner;
        return thisValue > otherValue;
    }

    public double getValue() {
        return (double) this.zaehler / this.nenner;
    }

    public void ausgabe() {
        System.out.println(zaehler + "/" + nenner);
    }

    public void eingabe() {
        // Scanner input
        Scanner input = new Scanner(System.in);
        System.out.print("Zähler: ");
        zaehler = input.nextInt();
        System.out.print("Nenner: ");
        nenner = input.nextInt();

    }

    public Bruch addiere(Bruch b) {
        Bruch ergebnis = new Bruch();
        ergebnis.zaehler = zaehler * b.nenner + nenner * b.zaehler;
        ergebnis.nenner = nenner * b.nenner;
        return ergebnis;
    }

    public Bruch subtrahiere(Bruch b) {
        Bruch ergebnis = new Bruch();
        ergebnis.zaehler = zaehler * b.nenner - nenner * b.zaehler;
        ergebnis.nenner = nenner * b.nenner;
        return ergebnis;
    }

    public Bruch multipliziere(Bruch b) {
        Bruch ergebnis = new Bruch();
        ergebnis.zaehler = zaehler * b.zaehler;
        ergebnis.nenner = nenner * b.nenner;
        return ergebnis;
    }

    public Bruch dividiere(Bruch b) {
        Bruch ergebnis = new Bruch();
        ergebnis.zaehler = zaehler * b.nenner;
        ergebnis.nenner = nenner * b.zaehler;
        return ergebnis;
    }

    public Bruch kuerze() {
        Bruch ergebnis = new Bruch();
        int ggt = ggt(zaehler, nenner);
        ergebnis.zaehler = zaehler / ggt;
        ergebnis.nenner = nenner / ggt;
        return ergebnis;
    }

    public int ggt(int a, int b) {
        if (b == 0)
            return a;
        return ggt(b, a % b);
    }

    public String toString() {
        return this.zaehler + " / " + this.nenner;
    }

    public boolean equals(Bruch b) {
        return this.zaehler == b.zaehler && this.nenner == b.nenner;
    }
}