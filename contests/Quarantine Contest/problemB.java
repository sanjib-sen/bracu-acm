import java.util.Scanner;
public class problemB {
    public static void main(String[] args) {
        Scanner sks = new Scanner(System.in);
        int no = sks.nextInt();
        Character a[] = new Character[no];
        for (int i = 1; i <= no; i++) {
            String str = sks.nextLine();
            int an = sks.nextInt();
            int bn = sks.nextInt();
            if (an > bn) {
                a[i - 1] = '>';
            }
            else if (bn>an){
                a[i - 1] = '<';
            }
            else{
                a[i - 1] = '=';
            }
        }
        for (int i = 1; i <= no; i++) {
            System.out.println(a[i - 1]);
        }
    }
}
