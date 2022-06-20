#include "iostream"
int main()
{
int i, a[8];
a[0] = 0;
a[1] = 1;
for (i = 2; i < 8; i++){
a[i] = a[i - 1] + a[i- 2];
for (i = 0; i < 8; i++)
{
printf("%d ", a[i+2]);
return 0;
}}}
