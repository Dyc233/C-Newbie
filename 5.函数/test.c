/*用一个函数来实现将一行字符串中最长的单词输出，
 此字符串从主函数传递给该函数。*/
 
#include <stdio.h>
#include <stdlib.h>

void lest(char[]);

int main(void){
	char s[50] = "Program administrator desktop debug";
	lest(s);
	printf("\n");
	
	system("pause");
	return 0;
}

void lest(char ss[]){
	int i,l,lst,op,ed;
	
	for(i=0;i<50;i++){
		if(ss[i]==' '||ss[i]=='\0') l = 0;
		if(l>lst){
			lst = l;
			ed  = i;
			op  = ed-lst+1;
		}
		l++;
	}
	for(i=op;i<=ed;i++)
		printf("%c",ss[i]);
}