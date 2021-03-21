import java.util.*;
public class LongestNiceSubstring {
  public String longestNiceSubstring(String s) {
    if (s.length() < 2)
      return "";
    char[] arr = s.toCharArray();
    Set<Character> set = new HashSet<>();
    for (char c : arr)
      set.add(c);
    for (int i = 0; i < arr.length; i++) {
      char c = arr[i];
      if (set.contains(Character.toUpperCase(c)) && set.contains(Character.toLowerCase(c)))
        continue;
      String sub1 = longestNiceSubstring(s.substring(0, i));
      String sub2 = longestNiceSubstring(s.substring(i + 1));
      return sub1.length() >= sub2.length() ? sub1 : sub2;
    }
    return s;
  }
  public static void main(String[] args) {
    System.out.print("Enter String: ");
    Scanner scan = new Scanner(System.in);
    String test = scan.next();
    System.out.println("Longest Nice Substring: " + longestNiceSubstring(test));
    scan.close();
  }
}

