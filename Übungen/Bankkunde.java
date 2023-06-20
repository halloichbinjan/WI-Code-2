package Übungen;

public class Bankkunde {
    private String name;
    private Girokonto girokonto;
    private Tagesgeldkonto tagesgeldkonto;
    private Festgeldkonto festgeldkonto;

    public Bankkunde() {
        name = "";
        girokonto = new Girokonto();
        tagesgeldkonto = new Tagesgeldkonto();
        festgeldkonto = new Festgeldkonto();
    }

    public Bankkunde(String _name, Girokonto _girokonto, Tagesgeldkonto _tagesgeldkonto, Festgeldkonto _festgeldkonto) {
        name = _name;
        girokonto = _girokonto;
        tagesgeldkonto = _tagesgeldkonto;
        festgeldkonto = _festgeldkonto;
    }

    public String toString() {

        return "Name: " + name + "\nGirokonto: " + girokonto.toString() + "\nTagesgeldkonto: "
                + tagesgeldkonto.toString() + "\nFestgeldkonto: " + festgeldkonto.toString();
    }

    public static void main(String[] args) {
        Girokonto g = new Girokonto(1000, 98765, true, 4000);
        Tagesgeldkonto t = new Tagesgeldkonto(2.3, 12237);
        Festgeldkonto f = new Festgeldkonto(0.23, 24, 1233);
        Bankkunde b = new Bankkunde("Jan Schmidt", g, t, f);
        System.out.println(b.toString());
    }
}