public class Main {
    public static void main(String[] args) {
        Main mainObj = new Main();
        int[] data = { 4, 8, 23, -17, 2, -6 };
        System.out.println("Minimum: " + mainObj.mini(data) + ", Maximum: " + mainObj.maxi(data));
    }

    public void ausgabe(char c) {
        System.out.println();
        System.out.println("* " + c + " *");
    }

    public void ausgabe(String s) {
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print("*");
        }
        System.out.println(" \n* " + s + " *");
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print("*");
        }
    }

    public void ausgabe(String s, char zeichen) {
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print(zeichen);
        }
        System.out.println(" \n" + zeichen + " " + s + " " + zeichen);
        for (int i = 0; i < s.length() + 4; i++) {
            System.out.print(zeichen);
        }
    }

    public int mini(int[] arr) {
        int min = arr[0];
        for (int i : arr) {
            if (i < min)
                min = i;
        }
        return min;
    }

    public int maxi(int[] arr) {
        int max = arr[0];
        for (int i : arr) {
            if (i > max)
                max = i;
        }
        return max;
    }
}