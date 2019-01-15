package bogdan.limbaje.test.e1;

public class Parent {
    public String showAll() {
        return privateMethod() + " " + protectedMethod() + " " + publicMethod();
    }

    private String privateMethod() {
        return "Parent#private";
    }

    protected String protectedMethod() {
        return "Parent#protected";
    }

    public String publicMethod() {
        return "Parent#public";
    }
}