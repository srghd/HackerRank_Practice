int diagonalDifference(vector<vector<int>> arr) {
long sum1=0;
long sum2=0;

int size=arr.size();
for (int i=0; i<size; i++)
{
    sum1+=arr[i][i];
    sum2+=arr[i][size-i-1];
}
return abs(sum1-sum2);
}
