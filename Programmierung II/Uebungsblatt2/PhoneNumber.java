package Uebungsblatt2;

import java.util.Scanner;

public class PhoneNumber {
    private String laenderVorwahl, netzwerkVorwahl, nummer;

    PhoneNumber() {
        laenderVorwahl = getUserInput(2, 3, "Ländervorwahl");
        netzwerkVorwahl = getUserInput(3, 4, "Netzwerkvorwahl");
        nummer = getUserInput(8, 9, "Nummer");
    }

    public String getUserInput(int start, int end, String title) {
        String input;
        do {
            System.out.print(
                    "Bitte geben Sie eine " + title + " mit einer Länge zwischen " + start + " und " + end + " ein: ");
            Scanner scanner = new Scanner(System.in);
            input = scanner.nextLine();
        } while (input.length() < start || input.length() > end);
        return input;
    }

    public String getLeanderVorwahl() {
        return laenderVorwahl;
    }

    public String getNetzwerkVorwahl() {
        return netzwerkVorwahl;
    }

    public boolean equals(PhoneNumber phoneNumber) {
        return laenderVorwahl.equals(phoneNumber.getLeanderVorwahl())
                && netzwerkVorwahl.equals(phoneNumber.getNetzwerkVorwahl());
    }

    public void ausgabe(int mode) {
        switch (mode) {
            case 0:
                System.out.println("+" + laenderVorwahl + " " + netzwerkVorwahl + " " + nummer);
                break;
            case 1:
                System.out.println(0 + netzwerkVorwahl + " " + nummer);
                break;
            default:
                System.out.println("Falscher Modus");
                break;
        }
    }

    public static void main(String[] args) {
        PhoneNumber phoneNumber1 = new PhoneNumber();
        PhoneNumber phoneNumber2 = new PhoneNumber();
        System.out.println(phoneNumber1.equals(phoneNumber2));
        phoneNumber1.ausgabe(0);
        phoneNumber1.ausgabe(1);
    }

}
