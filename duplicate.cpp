/*
题目:在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是
重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中
任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对
应的输出是重复的数字2或者3。
*/
/*
思路: hash表判断就可以了； 
*/
class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        vector<int> frequency(length, 0);// 最消耗时间的操作
        for(int i = 0; i < length; i++){
            if(frequency[numbers[i]] == 0 ){
               frequency[numbers[i]]++; 
            }else {
                *duplication = numbers[i];
                return true;
            }
        }
        return false;
        
    }
};