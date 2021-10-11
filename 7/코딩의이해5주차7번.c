#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int code, age, p ;
	double rate, dc, rp;

	printf("회원번호, 정가, 나이를 차례로 입력하시오.\n");
	scanf("%d %d %d", &code, &p, &age);

	if (age < 18 || age >= 70) {
		rate = 0.2;
	}
	else if (age >= 60) {
		rate = 0.15;
	}
	else {
		rate = 0;
	}

	dc = p * rate;
	rp = p - dc;
	
	printf("회원번호 %d번의 할인액은 %.2lf이며, 실구입가는 %.lf입니다.", code, dc, rp);

	return 0;
}