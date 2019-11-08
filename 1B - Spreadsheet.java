import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Spreadsheets {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        String alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        Pattern pattern = Pattern.compile("R(\\d+)C(\\d+)");
        Pattern pattern2 = Pattern.compile("([A-Z]+)(\\d+)");

        for(int i=0; i<n; i++) {
            String input = br.readLine();
            Matcher m = pattern.matcher(input);
            Matcher m2 = pattern2.matcher(input);
            if(m.matches()) {
                int row = Integer.parseInt(m.group(1));
                int col = Integer.parseInt(m.group(2));
                String temp = "";
                while(col > 0) {
                    int r = col%26;
                    if(r == 0) temp = '0' + temp;
                    else temp = alphabets.charAt(r - 1) + temp;
                    col /= 26;
                }

                while(temp.contains("0")) {
                    int pos = temp.indexOf('0');
                    char[] tempChar = temp.toCharArray();
                    boolean first = false;
                    if(pos >= 1) {
                        if(tempChar[pos-1] >= 'A') {
                            if(tempChar[pos-1] == 'A') {
                                if(pos-1 == 0) first = true;
                                else tempChar[pos-1] = '0';
                            }
                            else tempChar[pos-1] = (char)(tempChar[pos-1] - 1);
                            tempChar[pos] = 'Z';
                        }
                    }
                    if (first)
                        temp = new String(tempChar).substring(1);
                    else
                        temp = new String(tempChar);
                }

                System.out.print(temp);
                System.out.println(row);    
            }
            else if(m2.matches()) {
                String col = m2.group(1);
                int row = Integer.parseInt(m2.group(2));
                int sum = 0;
                for(int j=0, k=col.length()-1; j<col.length() && k>=0; j++, k--) {
                    sum += (col.charAt(k)-64)*Math.pow(26, j);
                }
                System.out.println("R" + row + "C" + sum);
            }
        }
    }
}
