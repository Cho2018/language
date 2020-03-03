import java.time.LocalDate;

public class LocalDateDemo {
    public static void main(String[] args) {
        LocalDate date = LocalDate.now().withDayOfMonth(1);
        int month;
        if (args.length >= 2) {
            month = Integer.parseInt(args[0]);
            int year = Integer.parseInt(args[1]);
            date = LocalDate.of(year, month, 1);
        } else {
            month = date.getMonthValue();
        }

        String title = date.getMonth().toString().substring(0, 3)
                + " " + date.getYear();
        System.out.println("\t\t  " + title);
        System.out.println(" Sun Mon Tue Wed Thu Fri Sat");

        int s = date.withDayOfMonth(1).getDayOfWeek().getValue();

        for (int i = 0; i < s; i++) {
            if (s == 7) {}

            else {
                System.out.print("\t");
            }
        }

        for (int i = 1; i < date.lengthOfMonth() + 1; i++) {
            if (i < 10) {
                System.out.print("  " + i + "\t");
            }

            else {
                System.out.print(" " + i + "\t");
            }

            if ((i + s) % 7 == 0)
                System.out.println();
        }
    }
}
