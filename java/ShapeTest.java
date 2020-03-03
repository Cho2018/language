import java.util.Arrays;

public class ShapeTest {
    public static void main(String[] args) {
        Shape[] shapes = { new Circle(3.0, "red"),
                new Circle(4.0, "green"),
                new Square(6.0, "blue") };

        System.out.println("--- 정렬하기 전 ---");
        Arrays.stream(shapes).forEach(s -> System.out.print(s + " "));

        Arrays.sort(shapes, (first, second) -> first.getColor().compareTo(second.getColor()));
        System.out.println("\n--- 색상 순으로 정렬 ---");
        Arrays.stream(shapes).forEach(s -> System.out.print(s + " "));

        Arrays.sort(shapes);
        System.out.println("\n--- 면적 순으로 정렬 ---");
        Arrays.stream(shapes).forEach(s -> System.out.print(s + " "));
    }
}

interface Shape  extends Comparable {
    double getArea();
    String getColor();
}

class Circle implements Shape {
    double radius;
    String color;

    public Circle(double radius, String color) {
        this.radius = radius;
        this.color = color;
    }
    
    @Override
    public double getArea() {
        return radius * radius * 3.14;
    }

    @Override
    public String getColor() {
        return color;
    }

    public String toString() {
        return "Circle(" + radius + ", " + color + ")";
    }

    @Override
    public int compareTo(Object o) {
        return (int)this.getArea() - (int)((Shape) o).getArea();
    }
}

class Square implements Shape {
    double width;
    String color;

    public Square(double width, String color) {
        this.width = width;
        this.color = color;
    }

    @Override
    public double getArea() {
        return width * width;
    }

    @Override
    public String getColor() {
        return color;
    }

    public String toString() {
        return "Square(" + width + ", " + color + ")";
    }

    @Override
    public int compareTo(Object o) {
        return (int)this.getArea() - (int)((Shape) o).getArea();
    }
}
