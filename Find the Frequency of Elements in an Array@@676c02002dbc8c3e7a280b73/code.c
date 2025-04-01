#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int vis[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++){
        vis[i]=0;
    }
    for(int i = 0; i<n; i++ ){
        if(vis[i]==1) continue;
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                vis[j]=1;
                
            }

        }
            printf("%d %d\n",arr[i],count);
        
    }
}