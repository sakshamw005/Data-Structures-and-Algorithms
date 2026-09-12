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
        for(Map.Entry<Integer,List<Integer>> i : map.entrySet()){
            List<Integer> l = i.getValue();
            if(l.size() >= 3){
                boolean fl = true ;
                for(int j = 1 ; j<l.size()-1 ; j++){
                    if((l.get(j) - l.get(j-1)) != (l.get(j+1)-l.get(j))){
                        fl = false ; 
                        break ;
                    }
                }
                if(fl)ans++ ;
            }
        }
        return ans ;
    }
}