public class LineTest {
    public static void main(String[] args) {
        Line a = new Line("a", 1);
        Line b = new Line("b", 1);
        Line c = new Line("c", 2);

        System.out.println("라인 a는 라인 b와 길이가 같다? " + a.isSameLine(b));
        System.out.println("라인 a는 라인 b와 동일한 객체? " + (a == b));
        System.out.println("라인 a와 라인 c 중에 누가 긴가? " + a.WhosLonger(c).getName());
        System.out.println("생성한 라인의 개수는 " + Line.getNumOfLines());
    }
}

class Line {
    private String name;
    private int len;
    private static int numOfLines = 0;

    public Line(String name, int len) {
        this.name = name;
        this.len = len;
        numOfLines++;
    }

    public String getName() {
        return name;
    }

    public int getLen() {
        return len;
    }

    public static int getNumOfLines() {
        return numOfLines;
    }

    public Line WhosLonger(Line l) {
        if (this.len > l.len) {
            return this;
        }

        else if (this.len == l.len) {
            System.out.println("길이가 동일하다.");
        }

        else
            return l;

        return this;
    }

    public boolean isSameLine(Line l) {
        return this.len == l.len;
    }
}
