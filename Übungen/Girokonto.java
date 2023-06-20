package Übungen;

public class Girokonto extends Konto {
    private double kreditrahmen;
    private int kartennummer;
    private boolean bonuszahlungen;

    public Girokonto() {
        super();
        kreditrahmen = 0;
        kartennummer = 0;
        bonuszahlungen = false;
    }

    public Girokonto(double _kreditrahmen, int _kartennummer, boolean _bonuszahlungen, int _kontostand) {
        super(_kontostand);
        kreditrahmen = _kreditrahmen;
        kartennummer = _kartennummer;
        bonuszahlungen = _bonuszahlungen;
    }

    public String toString() {
        return "Kreditrahmen: " + kreditrahmen + "€, Kartennummer: " + kartennummer + ", Bonuszahlungen: "
                + bonuszahlungen + ", " + super.toString();
    }
}
