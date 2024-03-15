import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.math.BigInteger; 
import java.security.MessageDigest;
public class Solution {

    public static void main(String[] args) {
         Scanner input=new Scanner(System.in);
    String str=input.nextLine();
    String output="";
    try{
         MessageDigest md = MessageDigest.getInstance("MD5");
        byte[] digest = md.digest(str.getBytes());
        BigInteger bigInteger = new BigInteger(1,digest);

        String hash = bigInteger.toString(16);
        while(hash.length() < 32){
            hash += "0" + hash;
        }
        System.out.println(hash);
    }catch(Exception e){
        System.out.println(e.getMessage());

    }
    }
}
