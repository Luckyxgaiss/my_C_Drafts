#include <stdio.h>
int  def(int a){
       int f;
       f=-a;
       return f;}
int main(){
     int i,S[i],F[i],Z[i],m,n,x=0,y=0,X,Y,MAX1,MAX2,d;
     scanf("%d",&i);
     for(m=0;m<i;m++){
           scanf("%d",&S[m]);
          }
     for(m=0;m<i;m++){
           if(S[m]<0) {F[x]=S[m];     x++;}
           else if(S[m]>=0) {Z[y]=S[m];   y++;}
           }
      //对负数组判断出最小值
      for(m=0;m<=10;m++){
            for(n=0;n<9;n++){
                   if(F[n]>=F[n+1]){
                       X=F[n];
                       Y=F[n+1];
                       F[n]=Y;
                       F[n+1]=X;}
                                          }      
                         }
                         d=F[0];
                  MAX1=def(F[0]);
       //对正数判断最大值
       for(m=0;m<=10;m++){
            for(n=0;n<9;n++){
                   if(Z[n]<=Z[n+1]){
                       X=Z[n];
                       Y=Z[n+1];
                       Z[n]=Y;
                       Z[n+1]=X;}
                                          }      
                         }
                  MAX2=def(Z[0]);
      if(MAX1>MAX2)  printf("%d",d);
      else   printf("%d",Z[0]);
                        
    
    return 0;
}

