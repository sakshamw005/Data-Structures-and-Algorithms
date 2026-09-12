class Solution {
    public int countSpecialIntegers(int[] nums) {
        Map<Integer,List<Integer>> map = new HashMap<>();
        for(int i = 0 ; i<nums.length ; i++){
            if(!map.containsKey(nums[i])){
                map.put(nums[i],new ArrayList<>());
            }
            map.get(nums[i]).add(i);
        }
        int ans = 0 ;
        for(Map.Entry<Integer, List<Integer>> i : map.entrySet()){
            List<Integer> l = i.getValue();
            if(l.size() == 3 && l.get(1) - l.get(0) == l.get(2) - l.get(1))ans++ ;
        }
        return ans ;
    }
}