#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    // Create new array for unique elements
    vector<int> unique_arr;
    sort(arr.begin(), arr.end());
    // Set n equal to the size of the original array
    int n = arr.size();
    // Go through original array and add unique elements to unique array
    // Unique is determined by if the lement in front of it is or is not equal
    for(int i=0; i<n; i++){
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]);
        }
            // Add removed duplicates to removed array.
        else{
            removed_elements.push_back(arr[i]);
        }
    }
    return unique_arr;
}

int main(){
    // Test the function
    // Create new original vector
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    // Create empty removed elements vector
    vector<int> removed_elements;
    // Create unique vector using original array and calling remove_duplicates
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    // Print vector of objects with duplicates
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // Print vector of objects without duplicates
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    // Print of objects to be removed to make unique vector unique
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
