class Solution {
    public int minScore(int n, int[][] roads) {
        Map<Integer,List<int[]>> map = new HashMap<>() ;
        for(int i = 1 ; i<=n ; i++)map.put(i,new ArrayList<>()) ;
        for(int[] i : roads){
            map.get(i[0]).add(new int[]{i[1],i[2]}) ;
            map.get(i[1]).add(new int[]{i[0],i[2]}) ;
        }
        boolean[] vis = new boolean[n+1] ;
        return dfs(1,map,vis) ;
    }
    public int dfs(int node , Map<Integer,List<int[]>> map , boolean[] vis){
        vis[node] = true;
        int ans = Integer.MAX_VALUE;
        for (int[] nei : map.get(node)) {
            ans = Math.min(ans, nei[1]);
            if (!vis[nei[0]]) {
                ans = Math.min(ans, dfs(nei[0], map, vis));
            }
        }
        return ans;
    }
}