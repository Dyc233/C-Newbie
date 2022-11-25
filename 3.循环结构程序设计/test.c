/*输出所有的“水仙花数”。
 所谓的“水仙花数”是指一个三位数，
  其各位数字立方和等于该数本身。*/
  
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b,c;
	
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				if(a*100+b*10+c == a*a*a+b*b*b+c*c*c)
					printf("%d\n",a*100+b*10+c);
				else continue;
			}
		}
	}
	
	system("pause");
	return 0;
}