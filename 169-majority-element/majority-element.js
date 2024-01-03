/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
   let e=0;
   let c=0;

   for(let i=0;i<nums.length;i++)
   {
       if(c==0) 
       {
           e=nums[i];
       }
       if(e == nums[i]){
           c++;
       }
       else
       {
           c--;
       }
   }
   return e;

};