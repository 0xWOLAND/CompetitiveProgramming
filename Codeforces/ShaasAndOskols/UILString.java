public class UILString implements Comparable<UILString>{
private String str;
public UILString(String str){
this.str = str;
}
public int compareTo(UILString uil) {
String s = uil.toString();
String y,z;
boolean x = true;
if(s.length() > str.length()) {
y = s;
z = str;
x = false;
}
else {
y = str;
z = s;
}
int d = y.length() - z.length();
for(int i = y.length() - 1; i >= d; i--)
if(y.charAt(i) != z.charAt(i - d))
if(x)
return y.charAt(i) - z.charAt(i - d);
else
return z.charAt(i - d) - y.charAt(i);
if(d == 0) return 0;
return str.length() < s.length() ? -1 : 1;
}
public String toString() {
return str;
}
}