class Solution {
    static final long MOD = 1000000007L;
    public int assignEdgeWeights(int[][] edges) {

        Map<Integer, List<Integer>> map = new HashMap<>();

        int n = edges.length + 1;

        for (int i = 1; i <= n; i++) {
            map.put(i, new ArrayList<>());
        }

        for (int[] e : edges) {
            map.get(e[0]).add(e[1]);
            map.get(e[1]).add(e[0]);
        }

        Stack<int[]> st = new Stack<>();
        st.push(new int[]{1, 0}); 

        boolean[] seen = new boolean[n + 1];
        int dep = 0;

        while (!st.isEmpty()) {
            int[] curr = st.pop();

            int node = curr[0];
            int depth = curr[1];

            if (seen[node]) continue;

            seen[node] = true;
            dep = Math.max(dep, depth);

            for (int ne : map.get(node)) {
                if (!seen[ne]) {
                    st.push(new int[]{ne, depth + 1});
                }
            }
        }
        return (int) modPow(2, dep - 1);
    }
    private long modPow(long base, long exp) {
        long ans = 1;

        while (exp > 0) {
            if ((exp & 1) == 1) {
                ans = (ans * base) % MOD;
            }

            base = (base * base) % MOD;
            exp >>= 1;
        }
        return ans;
    }
}