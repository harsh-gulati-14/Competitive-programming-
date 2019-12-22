#include<stdio.h>

int main(){
   int T,i;
   long int count0,count1;
   char s[100001];
   scanf("%d",&T);
   while(T--){
      scanf("%s",s);
      count0=0;
      count1=0;
      for(i=0;s[i]!='\0';i++){
         if(s[i]=='0'){
            count0++;
         }
         else{
            count1++;
         }
      }
      if(count0==1||count1==1){
         printf("Yes\n");
      }
      else{
         printf("No\n");
      }
   }
   return 0;
}
