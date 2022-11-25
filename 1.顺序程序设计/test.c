/*用scanf输入圆半径、高，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(void){
	float r,h=0;
	float c_y,s_y,s_q,v_q,v_z=0;
	
	printf("Please enter the height and the radius:\n");
	scanf("%f,%f",&r,&h);
	
	c_y = 2*PI*r;
	s_y = PI*r*r;
	s_q = 4*PI*r*r;
	v_q = 4/3*PI*r*r*r;
	v_z = s_y*h;
	
	printf("\n圆周长%.2f\n圆面积%.2f\n球表面积%.2f\n球体积%.2f\n圆柱体积%.2f\n",c_y,s_y,s_q,v_q,v_z);
	
	system("pause");
	return 0;
}
