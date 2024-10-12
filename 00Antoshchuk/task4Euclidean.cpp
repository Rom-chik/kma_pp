int findDiv(int g, int c) {

    while (g != c) {
        if (g > c) {
            g -= c;
        }
        else {
            c -= g;
        }
    }

    return g;
}