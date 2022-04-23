vector<int> countingSort(vector<int> arr) {

vector<int> results;
results.resize(100, 0);

int size = arr.size();
for (int i=0; i<size;i++){
    int j=arr[i];
    results[j]++;
}
return results;
}
