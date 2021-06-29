public class main implements Runnable {
    String str1, str2;

public void run()
{
for (int i = 0; i < 10; i++)

str1 = "Welcome";
str2 = "TO Java";
System.out.println(str1 + " " + str2 + " ");
}

    public static void main(String args[]) {
        main run = new main();
        Thread objl = new Thread(run);
        Thread obj2 = new Thread();
        objl.start();
        obj2.run();
    }
}