class Solution {
    public String mostCommonWord(String paragraph, String[] banned) {
        paragraph = paragraph.toLowerCase();
        paragraph = paragraph.replaceAll("[^a-z]", " ");
        String[] arr = paragraph.trim().split("\\s+");

        Map<String,Integer> map = new HashMap<>();
        Set<String> set = new HashSet<>();

        for(String ban : banned){
            set.add(ban.toLowerCase());
        }
        int val = 0;
        String ans = "";
        for(String word : arr){
            if(!set.contains(word)){
                map.put(word, map.getOrDefault(word,0) + 1);
                if(map.get(word) > val){
                    val = map.get(word); 
                    ans = word; 
                }
            }
        }
        return ans;
    }
}