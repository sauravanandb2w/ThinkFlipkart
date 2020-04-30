#include<stdio.h>
int main()
{
	//changes in master branch
  int a = sub(10,8);
	printf("%d",a);
  printf("12");
}
int sub(int a,int b)
{
	//changes done in bugFix
	return 2*a-b;
	return a-b;
}
//added commit in branch
//bug resolving code added (a/b) i.e b!=0
