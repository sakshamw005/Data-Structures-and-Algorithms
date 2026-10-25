class Solution {
    public long maximizeSum(int[] nums, int k) {
        PriorityQueue<int[]> pq = new PriorityQueue<>(
            (a, b) -> Integer.compare(b[1], a[1])
        );
        long sum = 0;
        for (int num : nums) {
            sum += num;
            char[] digits = String.valueOf(num).toCharArray();
            Arrays.sort(digits);
            long max = 0;
            for (int i = digits.length - 1; i >= 0; i--) {
                max = max * 10 + (digits[i] - '0');
            }
            pq.offer(new int[]{num, (int)(max - num)});
        }
        while (k-- > 0 && !pq.isEmpty()) {
            int[] curr = pq.poll();
            sum += curr[1];
        }
        return sum;
    }
}