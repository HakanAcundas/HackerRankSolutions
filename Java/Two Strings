import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the twoStrings function below.
    static String twoStrings(String s1, String s2) {
        Map<Character, Integer> s1h = new HashMap<Character, Integer>();
        Map<Character, Integer> s2h = new HashMap<Character, Integer>();
        for(char s : s1.toCharArray()){
            if(!s1h.containsKey(s)){
                s1h.put(s, 0);
            }
            s1h.put(s, s1h.get(s) + 1);
        }
        
        for(char s : s2.toCharArray()){
            if(!s2h.containsKey(s)){
                s2h.put(s, 0);
            }
            s2h.put(s, s2h.get(s) + 1);
        }
        
        for(char c : s1h.keySet()){
            if(s2h.containsKey(c)){
                return "YES";
            }
        }
        return "NO";
        
    }
}
