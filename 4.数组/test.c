/*用选择法对10个整数排序。10个整数用scanf函数输入*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n[10],i,j;
	
	printf("Please enter 10 numbers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	puts("\n");
	
	for(i=0;i<9;i++){
		int min = i;
		for(j=i+1;j<10;j++){
			if(n[j]<n[min]) min = j;
		}
		if(i != min){
			int temp = n[i];
			n[i]     = n[min];
			n[min]   = temp;
		}
	}
	for(i=0;i<10;i++)
		printf("%d   ",n[i]);
		
	system("pause");
	return 0;
}