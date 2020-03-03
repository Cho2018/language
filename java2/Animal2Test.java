import java.util.Arrays;

public class Animal2Test {
    public static void main(String[] args) {
        Animal[] animals = {
                new Fish("붕어"), new Bird("뻐꾸기"),
                new Bird("독수리"), new Fish("상어") };

        System.out.print("[");
        for (Animal a : animals) {
            System.out.print(a.toString() + ", ");
        }
        System.out.print("]");

        System.out.println();
        Arrays.sort(animals, Animal::compareTo);

        System.out.print("[");
        for (Animal a : animals) {
            System.out.print(a.toString() + ", ");
        }
        System.out.print("]");
    }
}

interface Animal extends Comparable {
    String getName();
}

class Fish implements Animal {
    String name;

    public Fish(String name) {
        this.name = name;
    }
    
    @Override
    public String getName() {
        return name;
    }

    @Override
    public String toString() {
        return "Fish(" + name + ")";
    }

    @Override
    public int compareTo(Object o) {
        return this.name.compareTo(((Animal)o).getName());
    }
}

class Bird implements Animal {
    String name;

    public Bird(String name) {
        this.name = name;
    }

    @Override
    public String getName() {
        return name;
    }
    
    @Override
    public String toString() {
        return "Bird(" + name + ")";
    }

    @Override
    public int compareTo(Object o) {
        return this.name.compareTo(((Animal)o).getName());
    }
}
