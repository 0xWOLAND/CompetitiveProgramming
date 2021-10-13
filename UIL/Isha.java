import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
import java.lang.*;
public class Isha {
    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("isha.dat");
        Scanner sc = new Scanner(f);
        HashMap<String, Integer>id = new HashMap<String, Integer>();
        id.put("Charlotte", 0);
        id.put("Orlando", 1);
        id.put("Houston", 2);
        id.put("Denver", 3);
        id.put("SanDiego", 4);

        int[][] times = {
            {-1,89,130,-1,240 + 23},
            {89,-1,120 + 1,-1,-1},
            {-1,120 + 1,-1,120 + 5, 120 + 54},
            {-1,-1,120 + 5,-1,60 + 59},
            {-1,-1,-1,-1,-1},

        };
        int[] zones = {0,0,1,2,3};
        int n; n = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < n; i++){
            String tmp = sc.nextLine();
            tmp = tmp.replaceAll("San Diego", "SanDiego");
            String[] s = tmp.split(" ");
            String from = s[0];
            String to = s[3];
            String[] clock = s[1].split(":");
            int time = Integer.parseInt(clock[0]) * 60 + Integer.parseInt(clock[1]);
            int dist =times[id.get(from)][id.get(to)]; 
            int zoneDiff =  60 * (zones[id.get(from)] - zones[id.get(to)]);
            int a = dist + time + zoneDiff;
            boolean pm = false;
            if(a > 12 * 60){
                pm = true;
                a -= 12;
            }
            else if(s[2].equals("P.M.")){
                pm = true;
            }
            int hour = a / 60;
            int minute = a % 60;
            String min_string = String.format("%02d", minute);
            if(pm){
                min_string += " P.M.";
            }
            else{
                min_string += " A.M.";
            }
            for(int j = 0; j < s.length; j++){
                if(s[j].equals("SanDiego")){
                    s[j] = "San Diego";
                }
            }
            System.out.println(s[0] + " " + s[1] + " " + s[2] + " "  + s[3] + " " + hour + ":" + min_string);

        }
    }
}
