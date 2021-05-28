import java.util.Scanner;
import java.util.BitSet;
public class BitSieve {
   static int N = 100000001;
   /*
    * You can set size of "marker" dynamically unlike me. What I mean is you can set the
    * size of marker according to the given "n" in the problem rather than setting 10^8
    * at beginning here like I did. But this isn't a big issue to be concerned about.
    * 
    * There are other helpful methods in the BitSet class. Do check out the documentation.
    */
   static BitSet marker = new BitSet(N);
   static void sieve() {
      for(int i=4; i<N; i+=2) {
         marker.set(i,true);
      }
      /*
       * The reason why we can start the inner loop from i*i is because -
       * lets say i = 7.. so our inner loop "j" will start from i*i which means 49.
       * So you could ask why didn't we start from 7*2 ? So the reason is, 
       * 7*2 = 14 which was already handled when the value of i was 2
       * 7*3 = 21 which was already handled when the value of i was 3
       * 7*4 = 28 which was already handled when the value of i was 2 since 4 is a multiple of 2.
       * ... so on. 
       */
      for(int i=3; i*i<N; i+=2) {
         if(!marker.get(i)) {
            for(int j=i*i; j<N; j+=i) {
               marker.set(j,true);
            }
         }
      }
   }
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      sieve();
      for(int i=2; i<100; i++) {
         if(marker.get(i)) {
            System.out.println("i = " + i + " is not a prime");
         } else {
            System.out.println("i = " + i + " is a prime");
         }
      }
   }
}