import java.util.Scanner;

class Book {
    String name, author;
    int price, num_pages;

    // Book() {
    // Scanner sc = new Scanner(System.in);
    // System.out.print("Enter the Book title : ");
    // name = sc.nextLine();
    // System.out.print("Enter the name of Author : ");
    // author = sc.nextLine();
    // System.out.print("Enter the price of the book : ");
    // price = sc.nextInt();
    // System.out.print("Enter the number of pages of the book : ");
    // num_pages = sc.nextInt();
    // }

    void assign() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Book title : ");
        name = sc.nextLine();
        System.out.print("Enter the name of Author : ");
        author = sc.nextLine();
        System.out.print("Enter the price of the book : ");
        price = sc.nextInt();
        System.out.print("Enter the number of pages of the book : ");
        num_pages = sc.nextInt();
    }

    public String toString() {
        return ("------------------------------------------------------------\nBook Title : " + name + "\nAuthor : "
                + author + "\nPrice : " + price + "\nNo of pages : " + num_pages
                + "\n------------------------------------------------------------\n");
    }
}

class hi {
    public static void main(String args[]) {
        System.out.print("Enter the number of books : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Book[] b = new Book[n];
        int i;
        for (i = 0; i < n; i++) {
            System.out.print("\nEnter the details of Book " + (i + 1) + "\n");
            b[i] = new Book();
            b[i].assign();
        }
        for (i = 0; i < n; i++) {
            System.out.print("\nThe details of Book " + (i + 1) + " are :\n");
            System.out.print(b[i]);
        }
    }
}
