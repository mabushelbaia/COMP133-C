int main()
{
int x=3,y=4,z=6;
int *p1,*p2,*p3;
p1=&x;
p2=&y;
p3=&z;
*p1=*p2+*p3;
(*p1)++;
(*p2)--;
*p1=(*p2)*(*p3);
*p2=(*p2)*(*p1);
x=y+z;
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",z);
printf("%d\n",*p1);
printf("%d\n",*p2);
printf("%d\n",*p3);
return 0;
}