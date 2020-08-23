#include<stdio.h>
#include<math.h>
int main() {
	float bill, check;
	scanf_s("%f", &bill);
	if (bill > 0) {
		if (bill >= 1000 && bill < 10000) bill = bill * (0.9);
		else if (bill >= 10000 && bill < 50000) bill = bill * (0.85);
		else if (bill >= 50000) bill = bill * (0.8);
		check = bill - (floor(bill));
	}
	else {
		printf("It's impossible\n");
		return 0;
	}
	if (check >= 0.5) bill = ceil(bill);
	else bill = floor(bill);
	printf("%.2f", bill);
	return 0;
}