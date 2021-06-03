import java.util.Scanner;

public class problemA {
    public static void main(String[] args) {
        Scanner sks=new Scanner(System.in);
        int no=sks.nextInt();
        int a[]=new int[no];
        for (int i=1;i<=no;i++){
            String str=sks.nextLine();
            int an=sks.nextInt();
            int bn=sks.nextInt();
            a[i-1]=an+bn;
        }
        for (int i=1;i<=no;i++){
            System.out.println("Case "+i+": "+a[i-1]);
        }
    }
}
