import java.util.*;


public class Test  {
    public static void main(String[] args){
        int x = 1, y = 1, z;
        int n = 8;
if(n == 1 || n == 2)
        System.out.println(1);
else
for(int r = 3; r <= n; r++ ) {
z = x + y;
x = y;
y = z;
}
System.out.println(y);
    }
}