public class AnimalDemo {
    public static void main(String[] args) {
        Animal[] animals = {
                new Tiger("호돌이"),
                new Tiger("호순이"),
                new Fish("붕어", "지느러미"),
                new Fish("숭어", "지느러미")
        };

        for (Animal a : animals)
            a.move();
    }
}

class Animal {
    String name;
    String leg;

    public Animal(String name) {
        this.name = name;
    }

    public Animal(String name, String leg) {
        this.name = name;
        this.leg = leg;
    }

    void move() {
        System.out.println("move");
    }
}

class Tiger extends Animal {
    public Tiger(String name) {
        super(name);
    }

    void move() {
        System.out.println(name + "가 다리로 달려간다." );
    }
}

class Fish extends Animal {
    public Fish(String name, String leg) {
        super(name, leg);
    }

    void move() {
        System.out.println(name + "가 " + leg + "로 헤엄친다.");
    }
}
