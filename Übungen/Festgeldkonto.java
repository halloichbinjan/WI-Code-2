package Übungen;

public class Festgeldkonto extends Konto {
    private double zinsen;
    private int laufzeit;

    public Festgeldkonto() {
        super();
        zinsen = 0;
        laufzeit = 0;
    }

    public Festgeldkonto(double _zinsen, int _laufzeit, int _kontostand) {
        super(_kontostand);
        zinsen = _zinsen;
        laufzeit = _laufzeit;
    }

    public String toString() {
        return "Zinsen: " + zinsen + "%, Laufzeit: " + laufzeit + " Monate" + ", " + super.toString();
    }
}
