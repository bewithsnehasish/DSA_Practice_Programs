
public class SB_StringBuilder {
    public static void main(String[] args) {
        StringBuilder storage = new StringBuilder();
        for (int i = 0; i < 26; i++) {
            char ch = (char) ('a'+i);
            storage.append(ch);
        }
        System.out.println(storage);
        System.out.println(storage.reverse());
    }
}
