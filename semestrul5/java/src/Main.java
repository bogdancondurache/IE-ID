import bogdan.limbaje.test.e1.Child;
import bogdan.limbaje.test.e2.Counter;
import bogdan.limbaje.test.e3.*;

public class Main {
    public static void main(String[] args) {
//        Child child = new Child();
//        System.out.println(child.showAll());
//        Main.m2();
        Person.Familie fam = new Person().new Familie();
        fam.salut();
        Person Gheorghe = new Person(5);
    }

    private static void m2() {
        Counter counterA = new Counter();
        Counter counterB = new Counter();
        Counter counterC = new Counter();

        counterA.incrementTotal();
        counterA.incrementTotal();
        counterA.incrementTotal();

        counterB.incrementTotal();
        counterB.incrementTotal();

        counterC.incrementTotal();

        System.out.println(counterA.getTotal());
        System.out.println(counterB.getTotal());
        System.out.println(counterC.getTotal());
    }
}