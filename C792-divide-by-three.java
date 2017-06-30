public class Main {
    public int divideByThree(long n) {
        char[] nums = String.valueOf(n).toCharArray();
        int[] dp = new int[nums.length];
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i] - '0';
            if (sum % 3 == 0) {
                dp[i] = 0;
            } else {
                dp[i] = dp[i-1] + 1;
            }
        }
        int cnt = dp[n.length-1];
        for (int i = 0; dp[i] == 0; i++) cnt++;
        if (cnt >= n.length) return -1;
        else return cnt;
        // 10011001100110001
    }
    public static void main(String args[]) {
        
    }
}
