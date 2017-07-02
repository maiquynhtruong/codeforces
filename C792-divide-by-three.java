public class Main {
    public int divideByThree(long n) {
        char[] nums = String.valueOf(n).toCharArray();
        int[] re = new int[3];
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            re[(nums[i] - '0') % 3]++;
        }
        String single = "", pair = "";
        sum = (re[1] + re[2]*2) % 3;
        if (sum == 0) return n;
        else if (sum == 1) {
            if (re[1] > 0) single = remove(String.valueOf(n), 1, 1);
            if (re[2] > 1) pair = remove(String.valueOf(n), 2, 2);
        } else if (sum == 2) {
            String single = "", pair = "";
            if (re[1] > 2) single = remove(String.valueOf(n), 1, 2);
            if (re[2] > 0) pair = remove(String.valueOf(n), 2, 1);
        }
        if (single.isEmpty() && pair.isEmpty()) return -1;
        else if (!single.isEmpty() && !pair.isEmpty()) return single.length() > pair.length() ? Long.valueOf(pair) : Long.valueOf(single);
        else if (single.isEmpty()) return Long.valueOf(pair);
        else if (pair.isEmpty()) return Long.valueOf(single);
    }
    public String remove(String n, int remain, int cnt) {
        StringBuilder res = new StringBuilder();
        for (int i = n.length()-1; i >= 0; i--) {
            if ((n.charAt(i) - '0') % 3 == remain && cnt > 0) cnt--;
            else res.append(n.charAt(i));
        }
        res = res.reverse();
        i = 0;
        while (i < res.length() && res.charAt(i) == '0') i++;
        return res.substring(i).toString();
    }
    public static void main(String args[]) {
        
    }
}
