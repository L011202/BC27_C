#define _CRT_SECURE_NO_DEPRECATE    
//只有VS编译器需要这个语句，防止有些C关键词使用的时候会报警告

/*BC27 计算球体面积
	@author:liang
	time:2024年3月31日15点25分
	题目描述:{给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4/3*πr3，其中 π = 3.1415926。
			  数据范围：输入一个浮点值 0≤n≤15 
	}
*/

/*输入描述
	一行，用浮点数表示的球体的半径。
*/

/*输出描述
	一行，球体的体积，小数点后保留3位。
*/

/*示例
	输入:3.0
	输出:113.097
*/

#include <stdio.h>
#include "math.h"		//包含数学公式
int main()
{
	double n = 0;
	double V = 0;
	double PI = 3.1415926;
	scanf("%lf", &n);
	if (0 <= n && n <= 15) {					 //范围判断
		V = (double)4/(double)3 * PI * pow(n, 3);//pow(n,m)  n的m次方
		printf("%.3lf\n", V);
	}
	return 0;
}