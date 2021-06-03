import java.util.Scanner;

public class problemC {
    public static void main(String[] args) {
        Scanner sks=new Scanner(System.in);
        int no=3;
        int a[]=new int[no];
        for (int i=1;i<=no;i++){
            int an=sks.nextInt();
            int bn=sks.nextInt();
            a[i-1]=an-bn;
            if (a[i-1]<0){
                a[i-1]*=-1;
            }
        }
        for (int i=1;i<=no;i++){
            System.out.println(a[i-1]);
        }
    }
}
