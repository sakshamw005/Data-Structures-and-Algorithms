class Solution {
    public int countCompleteComponents(int n, int[][] edges) {
        Map<Integer, List<Integer>> map = new HashMap<>();
        for (int i = 0; i < n; i++){
            map.put(i, new ArrayList<>());
        }
        for (int[] e : edges) {
            map.get(e[0]).add(e[1]);
            map.get(e[1]).add(e[0]);
        }
        boolean[] seen = new boolean[n];
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (seen[i]) continue;

            Queue<Integer> q = new LinkedList<>();
            q.add(i);
            seen[i] = true;

            int nodes = 0;
            int sum = 0;

            while (!q.isEmpty()) {
                int curr = q.poll();
                nodes++;
                sum += map.get(curr).size();

                for (int ne : map.get(curr)) {
                    if (!seen[ne]) {
                        seen[ne] = true;
                        q.add(ne);
                    }
                }
            }

            int ec = sum / 2;

            if (ec == nodes * (nodes - 1) / 2){
                ans++;
            }
        }
        return ans;
    }
}