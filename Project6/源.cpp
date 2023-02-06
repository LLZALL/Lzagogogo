#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d" "%d", &a, &b);
//	Max(a, b);
//	int m = Max(a, b);
//	printf("%d", m);
////
////	return 0;
////}
//#include <stdio.h>
//
//int main() {
//    printf("     **\n     **\n************\n************\n    *  *\n    *  *");
//    return 0;
//}
//int main()
//{
//	int M = 0;
//	int N = 0;
//	scanf("%d", &M);
//	N = M % 5;
//	if (N == 0)
//		printf("YES");
////	else
////		printf("NO");
////
////	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	printf("%d\n%d\n%d", a, b, c);
//	float e, f, g;
//	printf("%f\n%f\n%f", e, f, g);
//	//输出不了任何数值
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("       *\n");
//	printf("      *\n");
//	printf("     *\n");
//	printf("*   *\n");
//	printf(" * *\n");
//	printf("  *");
//	return 0;
////}
//// 求球体公式
//#include<stdio.h>
//#define K 3.14f*4.0f/3.0f
//int main()
//{
//	int  r;
//	double v;
//	scanf("%d", &r);
//	v = K * r * r * r;
//	printf("%f", v);
//	return 0;
//}
//算税收
//int main()
//{
//	float enter = 0;
//	float taxadd = 0;
//	printf("Enter an amount:");
//	scanf("%f", &enter);
//	taxadd = enter * 1.05f;
//	printf("With tax added:%.2f", taxadd);
//	return 0;
//}
//int main()
//{
//	float x;
//	scanf("%lf", &x);
//	float y;
//	y = ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
//	printf("%f", y);
//	return 0;
////}
////美元找补器
//int main()
//{
//	printf("Enter a dollar amount :");
//	int a = 0;
//	scanf("%d", &a);
//	int b20 = 0;
//	b20 = a /20;
//	int c10;
//	c10 = (a - 20 * b20) / 10;
//	int d5;
//	d5 = (a - 20 * b20 - 10 * c10) / 5; 
//	int e = 0;
//	e = (a - 20 * b20 - 10 * c10 - 5 * d5) / 1;
//	printf("$20 bills:%d\n", b20);
//	printf("$10 bills:%d\n", c10);
//	printf("$5 bills:%d\n", d5);
//	printf("$1 bills:%d\n", e);
//	return 0;
//}

//贷款余额计算
int main()
{
	float amount_of_loan;
	float interest_rate;
	float monthly_payment;
	printf("Enter amount of loan:");
	scanf("%f", &amount_of_loan);
	printf("Enter interest rate : ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment :" );
	scanf("%f", & monthly_payment);
	float month_rate = interest_rate *0.01f / 12.0f;
	printf("%f", month_rate);
	float frt = amount_of_loan - monthly_payment + amount_of_loan* month_rate;
	float snd = frt - monthly_payment + frt * month_rate;
	float trd = snd - monthly_payment + snd * month_rate;
	printf("\nBalance remaining after first paymen:%.2f\nBalance remaining after second payment:%.2f\nBalance remaining after third payment:%.2f", frt,snd,trd);
	return 0;
}
