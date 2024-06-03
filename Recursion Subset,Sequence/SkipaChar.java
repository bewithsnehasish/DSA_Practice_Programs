import java.sql.Struct;

//WAP to skip a char in the string
public class SkipaChar {
    public static void main(String[] args) {
        stream("","aabbccdja");
    }

    static void stream(String ch, String str) {
        if(str.isEmpty()) {
            System.out.println(ch);
            return;
        }
        char c = str.charAt(0);

        if (c == 'a') {
            stream(ch, str.substring(1));
        }
        else stream(ch+c,str.substring(1));
    }
}
