#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int code, age, p ;
	double rate, dc, rp;

	printf("ȸ����ȣ, ����, ���̸� ���ʷ� �Է��Ͻÿ�.\n");
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
	
	printf("ȸ����ȣ %d���� ���ξ��� %.2lf�̸�, �Ǳ��԰��� %.lf�Դϴ�.", code, dc, rp);

	return 0;
}