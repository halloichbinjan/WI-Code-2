package Uebungsblatt2;

public class Student {
    private String matnr; // 7-stellige Matrikelnummer
    private String nachname;
    private String vorname;
    private Anschrift semesterAdresse;
    private Anschrift privatAdresse;

    public Student(String matnr, String nachname, String vorname,
            Anschrift semesterAdresse, Anschrift privatAdresse) {
        this.matnr = matnr;
        this.nachname = nachname;
        this.vorname = vorname;
        this.semesterAdresse = semesterAdresse;
        this.privatAdresse = privatAdresse;

    }

    public String getMatnr() {
        return matnr;
    }

    public String getNachname() {
        return nachname;
    }

    public String getVorname() {
        return vorname;
    }

    public Anschrift getSemesterAdresse() {
        return semesterAdresse;
    }

    public Anschrift getPrivatAdresse() {
        return privatAdresse;
    }

    public void ausgabe() {
        System.out.println("Matrikelnummer: " + matnr);
        System.out.println("Name: " + nachname + ", " + vorname);
        System.out.println("Semesteradresse:");
        semesterAdresse.ausgabe();
        System.out.println("Privatadresse:");
        privatAdresse.ausgabe();
    }

};