#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,i,t,e,j;
    int a[4];
    char s[100];
    scanf("%s",s);
    for(n=i=t=e=j=0; j<strlen(s); j++){
        switch(s[j]){
            case 'n':
                n++;
            break;
            case 'i':
                i++;
                break;
            case 't':
                t++;
                break;
            case 'e':
                e++;
                break;
        }
    }
    e=e/3;
    n=((n-1)/2);
    a[0]=n;
    a[1]=e;
    a[2]=t;
    a[3]=i;
    sort(a , a+4);
    printf("%d\n", a[0]);
    return 0;
}
