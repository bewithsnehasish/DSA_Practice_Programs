import java.util.Arrays;

public class StringMethods {
    public static void main(String[] args) {
        String name = "Snehasish Mandal";
        System.out.println(Arrays.toString(name.toCharArray()));
        System.out.println(name);//It will print the string
        System.out.println(name.toLowerCase()); //It will convert all the charachter to lowercase
        System.out.println(name.indexOf('a'));//It will give the index of the char a
        System.out.println(name.lastIndexOf('a'));//It will show the last index of the character
        System.out.println(name.strip());//It will remove all the extra spaces from the string
        System.out.println(Arrays.toString(name.split(" ")));
    }
}
