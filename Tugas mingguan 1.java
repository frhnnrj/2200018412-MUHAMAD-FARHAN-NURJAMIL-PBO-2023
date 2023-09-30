public class Main {
    public static void main(String[] args) {
        // Variabel dan tipe data
        int angka = 5;

        // Output
        System.out.println("Angka: " + angka);

        // Perulangan for
        for (int i = 1; i <= angka; i++) {
            // Percabangan if
            if (i % 2 == 0) {
                System.out.println(i + " adalah angka genap");
            } else {
                System.out.println(i + " adalah angka ganjil");
            }
        }

        // Perulangan while
        int j = 1;
        while (j <= angka) {
            System.out.println("Iterasi while ke-" + j);
            j++;
        }

        // Perulangan do-while
        int k = 1;
        do {
            System.out.println("Iterasi do-while ke-" + k);
            k++;
        } while (k <= angka);

        // Array satu dimensi
        int[] arr = {1, 2, 3, 4, 5};
        System.out.print("Elemen array satu dimensi: ");
        for (int i = 0; i < 5; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        // Array multidimensi
        int[][] matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        System.out.println("Elemen matriks: ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}
