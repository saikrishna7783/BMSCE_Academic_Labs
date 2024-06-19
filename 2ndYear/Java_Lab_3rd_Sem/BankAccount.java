import java.util.Scanner;

class Account {
    String customerName;
    String accType;
    int accNum;

    double balance = 1000;

    void deposit(int amount) {
        balance += amount;
    }

    void displayBalance() {
        System.out.println("The balance in the account is : " + balance);
    }
}

class SavAcct extends Account {
    int n = 4;
    double r = 0.07;

    void interest(double y) {
        double x = balance;
        balance = balance * Math.pow((1 + r / n), (y * n));
        System.out.println("An amount of " + (balance - x) + " has been deposited as interest");
    }

    void withdrawal(int amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            System.out.println("You dont have the sufficient balance");
        }
    }
}

class CurrAcct extends Account {
    int minBalance = 1000, penalty = 7;

    void withdrawal(int amount) {
        if (balance < minBalance) {
            balance -= penalty;
            System.out.println("A penalty of 7 rupees has been imposed!");
        }

        if (balance >= amount) {
            balance -= amount;
        } else {
            System.out.println("You dont have the sufficient balance");
        }
    }
}

class Bank {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println(
                "Enter the account you want to open :\n1) Savings Account\n2) Current Account\nYour choice : ");
        int choice = sc.nextInt();
        if (choice == 1) {
            SavAcct act = new SavAcct();
            while (true) {
                System.out.println(
                        "Enter the transactions you would like to do :\n1) Deposit\n2) Withdraw\n3) Maintain balance for interest\n4) Display Balance\nYour choice : ");
                choice = sc.nextInt();
                switch (choice) {
                    case 1:
                        System.out.println("Enter the amount to be deposited : ");
                        int amount = sc.nextInt();
                        act.deposit(amount);
                        break;
                    case 2:
                        System.out.println("Enter the amount to be withdrawn : ");
                        int amt = sc.nextInt();
                        act.withdrawal(amt);
                        break;
                    case 3:
                        System.out.println("Enter the duration in years : ");
                        double y = sc.nextDouble();
                        act.interest(y);
                        break;
                    case 4:
                        act.displayBalance();
                        break;
                    default:
                        System.out.println("Enter a valid choice!");
                        break;
                }
            }
        }

        else if (choice == 2) {
            CurrAcct act = new CurrAcct();
            while (true) {
                System.out.println(
                        "Enter the transactions you would like to do :\n1) Deposit via chequebook\n2) Withdraw via chequebook\n3) Display Balance\nYour choice : ");
                choice = sc.nextInt();
                switch (choice) {
                    case 1:
                        System.out.println("Enter the amount to be deposited : ");
                        int amount = sc.nextInt();
                        if (amount < act.minBalance) {
                            act.balance -= act.penalty;
                            System.out.println("A penalty of 7 rupees has been imposed!");
                        }
                        act.deposit(amount);
                        break;
                    case 2:
                        System.out.println("Enter the amount to be withdrawn : ");
                        int amt = sc.nextInt();
                        act.withdrawal(amt);
                        break;
                    case 3:
                        act.displayBalance();
                        break;
                    default:
                        System.out.println("Enter a valid choice!");
                        break;
                }
            }
        }

        else {
            System.out.println("Ënter a valid choice!");
            System.exit(0);
        }
        sc.close();
    }
}
