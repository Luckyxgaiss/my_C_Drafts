#include <stdio.h>

#include <windows.h>

int main()

{

float i,j,a;

int index=0;

system("color 0C");

for(i=1.5f;i>=-1.5f;i-=0.05f)

{

for(j=-1.5f;j<=1.5f;j+=0.025f)

{

index%=9;

a=(j*j+i*i-1)*(j*j+i*i-1)*(j*j+i*i-1);

putchar((j*j+i*i-1)*(j*j+i*i-1)*(j*j+i*i-1)-j*j*i*i*i<=0.0f? " LOVE YOU" [index++]:' ');

}

puts("");

}

}





