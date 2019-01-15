package bogdan.limbaje.test.e3;

public class Person {
    int age;

    public Person() {
        age = 0;
        c.show();
    }
     public Person(int newAge) {
        age = newAge;
        System.out.println("Cu argumente");
     }

     public class Familie {
        public void salut() {
            System.out.println("Familia lui Gheorghe");
        }
     }
     static Clasa c = new Clasa() {
        void show() {
            super.show();
            System.out.println("suntem in Person:show()");
        }
     };

}

class Clasa {
    void show() {
        System.out.println("suntem in Clasa:show()");
    }
}
