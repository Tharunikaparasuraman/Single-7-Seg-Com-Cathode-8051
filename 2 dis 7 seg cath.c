#include <reg51.h>
unsigned char num[]=
{
0x3F,
0x06,
0x5B,
0x4F,
0x66,
0x6D,
0x7D,
0x07,
0x7F,
0x6F
};
void delay()
{
unsigned int i,j;
for(i=0;i<=100;i++)
{
for(j=0;j<=1000;j++);
}
}
void main()
{
int n;
for(n=0;n<=99;n++)
{
P2=num[n/10];
P3=num[n%10];
delay();
}}