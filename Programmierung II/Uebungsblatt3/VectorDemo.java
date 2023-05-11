// package Uebungsblatt3;

import java.util.*;

public class VectorDemo {
    public static void main(String[] args) {
        Vector<Bruch> v = new Vector<Bruch>();
        v.add(new Bruch(1, 3));
        Bruch b1 = new Bruch(1, 5);
        v.add(b1);
        v.add(new Bruch(1, 5));
        v.add(new Bruch(1, 8));

        Bruch b2 = new Bruch(3, 7);
        v.add(b2);

        b1 = b1.addiere(b2);
        v.add(b1);

        // System.out.println("Vector of Bruch v:");
        // for (Bruch b : v) {
        // System.out.println("> " + b);
        // }

        System.out.println("Summe: " + summe(v));

    }

    public static Bruch kleinstesElement(Vector<Bruch> v) {
        Bruch smallest = v.get(0);
        for (int i = 0; i < v.size(); i++) {
            if (v.get(i).istKleiner(smallest)) {
                smallest = v.get(i);
            }
        }
        return smallest;
    }

    public static Bruch groesstesElement(Vector<Bruch> v) {
        Bruch biggest = v.get(0);
        for (int i = 0; i < v.size(); i++) {
            if (v.get(i).istGroesser(biggest)) {
                biggest = v.get(i);
            }
        }
        return biggest;
    }

    public static double summe(Vector<Bruch> v) {
        double summe = 0;
        for (int i = 0; i < v.size(); i++) {
            summe += v.get(i).getValue();
        }
        return summe;
    }
}
