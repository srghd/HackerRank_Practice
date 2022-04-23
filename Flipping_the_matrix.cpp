int flippingMatrix(vector<vector<int>> matrix) {
long sum=0;
int n= matrix.size();
for(int i =0; i<n/2; i++)
{
    for (int j =0; j<n/2;j++)
    {
        int mx= matrix[i][j];
        mx=max(mx,max(matrix[n-i-1][j],matrix[i][n-j-1]));
        mx=max(mx,matrix[n-i-1][n-j-1]);
        sum+=mx;
    }
}
return sum;
}
