import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class CounterTest extends JFrame implements ActionListener {
    private int count = 0;
    private JLabel label;
    private JButton b1;
    private JButton b2;
    Thread thread;

    CounterTest() {
        setTitle("카운터");

        JPanel p1 = new JPanel();
        label = new JLabel("개수 = 0");
        p1.add(label);
        add("Center", p1);

        JPanel p2 = new JPanel();
        b1 = new JButton("시작");
        b2 = new JButton("리셋");
        b1.addActionListener(this);
        b2.addActionListener(this);
        p2.add(b1);
        p2.add(b2);
        add("South", p2);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 120);
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b2) {
            count = 0;
            label.setText("개수 = " + count);
            thread.interrupt();
        }

        else {
            if (thread == null || thread.isAlive() == false) {
                b1.setText("정지");
                thread = new Thread(new Counter());
                thread.setDaemon(true);
                thread.start();
            }

            else {
                b1.setText("시작");
                thread.interrupt();
            }
        }
    }

    public static void main(String[] args) {
        new CounterTest();
    }

    class Counter implements Runnable {
        public void run() {
            while (true) {
                count++;
                label.setText("개수 = " + count);
                try {
                    Thread.sleep(500);
                } catch (InterruptedException ex) {
                    return;
                }
            }
        }
    }
}
