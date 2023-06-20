package Übungen;

public class Tagesgeldkonto extends Konto {
    private double zinsen;

    public Tagesgeldkonto(double _zinsen, int _kontostand) {
        super(_kontostand);
        zinsen = _zinsen;
    }

    public Tagesgeldkonto() {
        super();
        zinsen = 0;
    }

    public String toString() {
        return "Zinsen: " + zinsen + "%, " + super.toString();
    }

}
