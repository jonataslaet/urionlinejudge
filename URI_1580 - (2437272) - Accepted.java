import java.math.BigInteger;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author wcs
 */
public class Main {
    
    
    public static void main(String []args) {
        BigInteger fat[] = new BigInteger[1010];
        fat[0] = new BigInteger("1");
        BigInteger atual=new BigInteger("1");
        int i;
        for (i=1; i<1010; i++) {
            fat[i]=fat[i-1].multiply(atual);
            atual = atual.add(new BigInteger("1"));
        }
        Scanner s = new Scanner(System.in);
        while (s.hasNext()) {

            String num = s.next();
            int[] quant = new int[255];
            for (i=0; i<quant.length; i++) {
                quant[i]=0;
            }

            for (i=0; i<num.length(); i++) {
                quant[num.charAt(i)]++;
            }

            BigInteger denominador = new BigInteger("1");
            for (i='A'; i<='Z'; i++) {
                denominador = denominador.multiply(fat[quant[i]]);
            }

            BigInteger numerador = fat[num.length()];

            BigInteger res = numerador.divide(denominador);

            res = res.mod(new BigInteger("1000000007"));

            System.out.println(res);
        }

        
    }
    
}