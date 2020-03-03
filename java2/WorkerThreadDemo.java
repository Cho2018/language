import java.util.Random;

class Worker extends Thread {
    Random r = new Random();
    int num;
    int a;
    int sum;

    public Worker(String name, int num) {
        super(name);
        this.num = num;
    }

    @Override
    public void run() {
        for (int i = 1; i <= num; i++) {
            a = r.nextInt(9);
            System.out.println(this.getName() + " : " + a);
            sum += a;
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
            }
        }
    }
}

public class WorkerThreadDemo {
    public static void main(String[] args) {
        Worker w = new Worker("Worker",  4);
        w.start();
        int total = 0;

        for (int i = 1; i <= 10; i++) {
            total += i;
            try {
                w.join();
                Thread.sleep(1000);
            } catch (InterruptedException e) {
            }
        }
        System.out.println("누적 값(" + total + " + " + w.sum + ") = " + (total + w.sum));
    }
}
