package Uebungsblatt2;

public class Anschrift {
    private String strasse;
    private String hausnr;
    private String plz;
    private String ort;
    private String telnr;

    public Anschrift() {
        strasse = "Keine Straße";
        hausnr = "Keine Hausnummer";
        plz = "Keine Postleitzahl";
        ort = "Kein Ort";
        telnr = "Keine Telefonnummer";
    } // Die drei Punkte bedeuten etwas Arbeit fuer Sie...

    public Anschrift(String strasse, String hausnr, String plz, String ort, String telnr) {
        this.strasse = strasse;
        this.hausnr = hausnr;
        this.plz = plz;
        this.ort = ort;
        this.telnr = telnr;
    }

    public String getStrasse() {
        return strasse;
    }

    public String getHausnr() {
        return hausnr;
    }

    public String getPlz() {
        return plz;
    }

    public String getOrt() {
        return ort;
    }

    public String getTelnr() {
        return telnr;
    }

    // ... weitere Methoden ...
    public void ausgabe() {
        System.out.println(strasse + " " + hausnr);
        System.out.println(plz + " " + ort);
        System.out.println(telnr);
    }

}
