import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the checkMagazine function below.
    static void checkMagazine(String[] magazine, String[] note) {
        Map<String, Integer> m_hash = new HashMap<String, Integer>();
        Map<String, Integer> n_hash = new HashMap<String, Integer>();
        boolean result = true;
        
        for(String m: magazine){
            if (!m_hash.containsKey(m)){
                m_hash.put(m, 0);
            }
            m_hash.put(m, m_hash.get(m)+1);
        }
        
        
        for(String n: note){
            if(!n_hash.containsKey(n)){
                n_hash.put(n, 0);
            }
            n_hash.put(n, n_hash.get(n)+1);
        }
        
        for(String key: n_hash.keySet()){
            if(!m_hash.containsKey(key)){
                result = false;
            }
            int needed = n_hash.get(key);
            if(needed > m_hash.get(key)){
                result = false;
            }
        }
        
        if(result){
            System.out.print("Yes");
        }
        else{
            System.out.print("No");
        }

    }
}
