package bogdan.limbaje.test.e1;

final public class Child extends Parent {

    private String privateMethod() {
        return "Child#privateMethod";
    }

    protected String protectedMethod() {
        return "Child#protectedMethod";
    }

    public String publicMethod() {
        return "Child#publicMethod";
    }
}