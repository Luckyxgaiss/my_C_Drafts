//按身高排序 测试：输入6      7 0    4 4   7 1   5 0   6 1   5 2
//输出：5 0   7 0   5 2   6 1   4 4   7 1 
#include <stdio.h>
void swap(int *x,int *y){
      int a,b;
      a=*x;
      b=*y;
      *x=b;
      *y=a;
}
int main(){
    
    int n,a[100],b[100],i,k,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n-1;i++){
        for(k=0;k<n-1;k++){
             if(a[k]<a[k+1]){
                 swap(&a[k],&a[k+1]);
                 swap(&b[k],&b[k+1]);
             }
             if(a[k]==a[k+1]){
                if(b[k]>b[k+1]){
                    swap(&b[k],&b[k+1]);
                }
             }
        }
    }
    printf("第一次排序结果：\n");
    for(i=0;i<n;i++){
    printf("%d,%d  ",a[i],b[i]);
    }
    printf("\n");
    int place;
    for(i=0;i<n;i++){
         place=b[i];
         x=a[i];
         y=b[i];
         for(k=i;k>place;k--){
               a[k]=a[k-1];
               b[k]=b[k-1];
         }
         a[place]=x;
         b[place]=y;
    }
    printf("最终排序结果：\n");
    for(i=0;i<n;i++){
          printf("%d,%d  ",a[i],b[i]);
    }
    return 0;
}

