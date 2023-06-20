package Übungen;

public class Konto {
    protected double kontostand;

    public Konto() {
        kontostand = 0;
    }

    public Konto(double _kontostand) {
        kontostand = _kontostand;
    }

    public String toString() {
        return "Kontostand: " + kontostand + "€";
    }
}
