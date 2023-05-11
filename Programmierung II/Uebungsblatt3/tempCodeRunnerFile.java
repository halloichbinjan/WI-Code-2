public static Bruch kleinstesElement(Vector<Bruch> v) {
        Bruch smallest = v.get(0);
        for (int i = 0; i < v.size(); i++) {
            if (v.get(i).istKleiner(smallest)) {
                smallest = v.get(i);
            }
        }
        return smallest;
    }