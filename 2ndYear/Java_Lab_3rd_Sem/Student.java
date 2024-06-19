import java.util.Scanner;

class student {
    String usn, name;
    int no_of_sub, credits[], marks[];

    double sgpa() {
        int i, p;
        double avg, c = 0, s = 0;
        for (i = 0; i < no_of_sub; i++) {
            p = (marks[i] / 10 + 1);
            if (marks[i] == 100) {
                p = 10;
            }
            s += credits[i] * p;
            c += credits[i];
        }
        avg = s / c;
        return avg;
    }
}

class ex {
    public static void main(String args[]) {
        student st = new student();
        Scanner sc = new Scanner(System.in);
        int i;
        System.out.println("Student Name : ");
        st.name = sc.nextLine();
        System.out.println("Student USN : ");
        st.usn = sc.nextLine();
        System.out.println("Enter the number of subjects : ");
        st.no_of_sub = sc.nextInt();
        System.out.println("Enter the credits of the subjects in order : ");
        st.credits = new int[st.no_of_sub];
        for (i = 0; i < st.no_of_sub; i++) {
            st.credits[i] = sc.nextInt();
        }
        System.out.println("Enter the marks of the subjects in order : ");
        st.marks = new int[st.no_of_sub];
        for (i = 0; i < st.no_of_sub; i++) {
            st.marks[i] = sc.nextInt();
        }
        sc.close();
        System.out.println("---------------------------------------------");
        System.out.println("The SGPA of " + st.name + " having usn " + st.usn + " is " + st.sgpa());
    }
}
