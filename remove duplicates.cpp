#include<iostream>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0; 
    
    int index = 0; 
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[index]) {
            arr[++index] = arr[i];  
        }
    }
    
    return index + 1;
}
int main() {
    int nums[] = {2, 3, 2, 4, 5, 2, 6, 7, 8};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int newSize = removeDuplicates(nums, n);
    
    std::cout << "Array with duplicates removed:\n";
    for (int i = 0; i < newSize; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}