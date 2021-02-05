import java.util.Scanner;

// Ganti nama file ke 'App.java'
public class App {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        String[] nama = new String [n];

        for(int i=0; i<n; i++) {
            nama[i] = input.next();
        }

        for(int i=0; i<n; i++) {
            int posisi = 1;
            for(int j=0; j<i; j++) {
                if((nama[i].compareTo(nama[j]) > 0)) {
                    posisi = posisi + 1;
                }
            }

            System.out.println(posisi);
        }
    }
}
