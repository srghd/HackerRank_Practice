int lonelyinteger(vector<int> a) {

int answer=0;
int size = a.size();

for (int i=0; i<size; i++)
{
    bool unique=true;
    
    for (int j=0; j<size; j++){
        
        if(i!=j && a[i]==a[j]){
            unique=false;
        }
        
    }
    if(unique)
    {
        answer=a[i];
    }
}
return answer;
}
