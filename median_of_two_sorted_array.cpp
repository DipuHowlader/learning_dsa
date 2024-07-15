#include <iostream>
#include <string>
#include <vector>
using namespace std;

class solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double total = 0;
        if(nums1.empty()){
            if(nums1.size() % 2){
                return nums1[nums1.size()/2];
            }else{
                return nums1[nums1.size()/2 + nums1.size()/2 +3];
            }
        }

    }

};


int main() {
    solution sol;
    vector<int>num1 = { 1,3 }, num2 = { 2 };
    double ans = sol.findMedianSortedArrays(num1, num2);
    cout << ans;
}