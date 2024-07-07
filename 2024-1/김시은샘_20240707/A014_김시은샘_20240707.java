class Solution {
    public List<String> summaryRanges(int[] nums) {

        List<String> ans = new ArrayList<>();

        int prev = 0;
        for(int i = 0; i < nums.length; i ++){
            if((i < nums.length - 1 && nums[i] != nums[i + 1] - 1) || i == nums.length - 1){
                StringBuilder s = new StringBuilder();
                s.append(Integer.toString(nums[prev]));
                if(prev < i){
                    s.append("->");
                    s.append(Integer.toString(nums[i]));
                }
                ans.add(s.toString());
                prev = i + 1;
            }
        }

        return ans;
    }
}