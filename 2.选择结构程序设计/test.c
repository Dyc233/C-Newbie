/*输入四个整数，要求按由小到大的顺序输出，
 在得到正确的结果后，修改程序使之按由大到小顺序输出*/
 
 #include <stdio.h>
 #include <stdlib.h>
 
 void swap(int *,int *);
 
 int main(void){
 	int n1,n2,n3,n4;
 	int *a,*b;
 	
 	printf("Please enter 4 numbers:");
 	scanf("%d,%d,%d,%d",&n1,&n2,&n3,&n4);
 	
 	if(n1>n2){a=&n1;b=&n2;swap(a,b);}
	if(n1>n3){a=&n1;b=&n3;swap(a,b);}
	if(n1>n4){a=&n1;b=&n4;swap(a,b);}
	if(n2>n3){a=&n2;b=&n3;swap(a,b);}
	if(n2>n4){a=&n2;b=&n4;swap(a,b);}
	if(n3>n4){a=&n3;b=&n4;swap(a,b);}
	printf("\nFrom small to big:%d,%d,%d,%d",n1,n2,n3,n4);
	
	system("pause");
	return 0;
 }
 
 void swap(int *a,int *b){
	int t;
	t  = *a;
	*a = *b;
	*b = t;
 }