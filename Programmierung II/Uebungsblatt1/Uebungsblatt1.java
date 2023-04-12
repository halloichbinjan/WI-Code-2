package Uebungsblatt1;

public class Uebungsblatt1 {
    public static void main(String[] args) {
        // Damit man nicht alle Methoden static machen muss.. Aufrufe dadurch dann so:
        // "mainObj.ausgabe('c');"" anstatt nur "ausgabe('c');""
        Uebungsblatt1 mainObj = new Uebungsblatt1();

    }

    // 1-1
    public void ausgabe(char c) {
        System.out.println("*****");
        System.out.println("* " + c + " *");
        System.out.println("*****");
    }

    // 1-1 Erweiterung
    public void ausgabe(String s) {
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print("*");
        }
        System.out.println(" \n* " + s + " *");
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print("*");
        }
    }

    // 1-2
    public void ausgabe(String s, char zeichen) {
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print(zeichen);
        }
        System.out.println(" \n" + zeichen + " " + s + " " + zeichen);
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print(zeichen);
        }
    }

    // 1-3
    public void tauschen(float[] data1, float[] data2) {
        float[] temp = new float[data1.length];
        for (int i = 0; i < data1.length; i++) {
            temp[i] = data1[i];
            data1[i] = data2[i];
            data2[i] = temp[i];
        }
    }

    // 1-4
    public int mini(int[] arr) {
        int min = arr[0];
        for (int i : arr) {
            if (i < min)
                min = i;
        }
        return min;
    }

    // 1-4
    public int maxi(int[] arr) {
        int max = arr[0];
        for (int i : arr) {
            if (i > max)
                max = i;
        }
        return max;
    }

}