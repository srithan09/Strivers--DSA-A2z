class Person
{
    String name;
    int age;
    Person(String name,int age)
    {
        this.age = age;
        this.name = name;
    }
}
public class MemoryManagement {
    public static void main(String[] args) {
        int a =10;
        Person p1 = new Person("Abc",31);
        String aString = "24";
        MemoryManagement memoryManagement = new MemoryManagement();
    }
    public void MemeoryMangementFunction(Person p1Person)
    {
        Person p2Person = p1Person;
        String a = "sri";
        String name = new String("Srithan M S");
    }
}
