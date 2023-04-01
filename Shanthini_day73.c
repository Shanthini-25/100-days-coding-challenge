#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void ans(){
    int a;
    scanf("%d", &a);
    char arr[a];
    char alpha[26]={0};
    scanf("%s", arr);
    int count=1;
    int max=0;
    for(int i=0;i<a-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            if(count>max){
                max=count;
            }
            count=1;
        }
    }   
    if(count>max){
        max=count;
    }
    count=1;
    int ans=0;
    for(int i=0;i<a-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            if(count==max){
                if(alpha[arr[i]-'a']==1){
                    ans++;
                    break;
                }
                alpha[arr[i]-'a']=1;
            }
            count=1;
        }
    }
    if(count==max){
        if(alpha[arr[a-1]-'a']==1){
            ans++;
        }
    }
    if(ans>=1){
        printf("%d\n", max);
    }
    else{
        printf("%d\n", max-1);
    }
    

}
int main(void){ 
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        ans();
    }
}