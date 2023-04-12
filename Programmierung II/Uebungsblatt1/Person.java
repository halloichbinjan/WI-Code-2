package Uebungsblatt1;

// Aufgabe 1-6
public class Person {
    private int PersonNr;
    private String Nachname;
    private String Vorname;
    private float Gehalt;

    public Person() {
        this.PersonNr = 0;
        this.Nachname = "";
        this.Vorname = "";
        this.Gehalt = 0;
    } // Default-Konstruktor

    public Person(int PersonNr, String Nachname, String Vorname, float Gehalt) {
        this.PersonNr = PersonNr;
        this.Nachname = Nachname;
        this.Vorname = Vorname;
        this.Gehalt = Gehalt;
    } // Weiterer Konstruktor

    public void setPersonNr(int PersonNr) {
        this.PersonNr = PersonNr;
    }

    public void setNachname(String Nachname) {
        this.Nachname = Nachname;
    }

    public void setVorname(String Vorname) {
        this.Vorname = Vorname;
    }

    public void setGehalt(float Gehalt) {
        this.Gehalt = Gehalt;
    }

    public void ausgabe() {
        System.out.println("Personennummer: " + this.PersonNr);
        System.out.println("Nachname: " + this.Nachname);
        System.out.println("Vorname: " + this.Vorname);
        System.out.println("Gehalt: " + this.Gehalt);
    }

    public static void main(String[] args) {
        System.out.println("Und nun die Java-Version...");

        Person person1 = new Person(111, "Meier", "Alfons", (float) 999.99);
        Person person2 = new Person();

        person2.setNachname("Kaiser");
        person2.setVorname("Anna");
        person2.setPersonNr(112);
        person2.setGehalt((float) 1300.45);

        System.out.println("Person 1: ");
        person1.ausgabe();

        System.out.println("Person 2: ");
        person2.ausgabe();

    } // end main()

}