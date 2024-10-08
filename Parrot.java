
public class Parrot {

    String[] messages = new String[100];
    int messagesCount = 1;
    int repeatCount;

    public Parrot(String message, int repeatCount) {

        this.messages[0] = message;
        this.repeatCount = repeatCount;
    }

    public void say() {
        for (int i = 0; i < this.repeatCount; i++) {

            int index = getRandomNumber(0, messagesCount - 1);
            System.out.println(this.messages[index]);
        }

    }

    public void add(String message) {
        messages[messagesCount] = message;
        messagesCount++;
    }

    public static int getRandomNumber(int min, int max) {
        return (int) Math.floor(Math.random() * (max - min + 1)) + min;
    }

    public static void main(String[] args) {

        Parrot p = new Parrot("Hello", 2);
        p.add("Hey");
        p.add("Hi");
        p.say();
    }
}
