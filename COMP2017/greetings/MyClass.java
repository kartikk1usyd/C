public class MyClass{
    public static void main (String[] args){
        Account a1 = new Account();
        a1.setInitialValues("Harry Potter", 10000);
        DefaultAccount da = new DefaultAccount();
        double interestRate = 3.5;
        da.setDefaultValues(a1, interestRate);
        a1.print();
        System.out.println(interestRate);
        
    }
        
}

class Account{
    private String name;
    private double balance;
    
    public void setInitialValues(String name, double balance){
        this.name = name;
        this.balance = balance;
        
    }
    public void print(){
        system.out.println(name + " " + balance);
        
    }
    
}
class DefaultAccount{
    public void setDefaultValues(Account a, double interestRate){
        a.setInitialValues("NoName", 0);
        interestRate = interestRate - 1;
    }
    }

