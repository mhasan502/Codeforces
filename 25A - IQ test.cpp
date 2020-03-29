#include<stdio.h>
int main(){
    int num,even=0,odd=0,ans;
    scanf("%d",&num);
    int array[100];

    for(int i=1; i<=num; i++){
        scanf("%d",&array[i]);
        if(array[i]%2 == 0)
            even++;
        else
            odd++;
    }
    for(int i=1; i<=num; i++){
        if(even>odd){
            if(array[i]%2 != 0)
                ans = i;
        }
        else{
            if(array[i]%2 == 0)
                ans = i;
        }
    }
    printf("%d\n",ans);
}
