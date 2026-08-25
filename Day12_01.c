 // Write a program to calculate library fine based on late days as follows:  First 5 days late: ₹2/day  Next 5 days late: ₹4/day  Next 20 days days late: ₹6/day  More than 30 days: Membership Cancelled.
 #include <stdio.h>

int main()
{
	int lateDays;
	int fine = 0;

	printf("Enter the number of late days: ");
	scanf("%d", &lateDays);

	if (lateDays < 0) {
		printf("Invalid number of days.\n");
	} else if (lateDays > 30) {
		printf("Membership Cancelled.\n");
	} else {
		if (lateDays > 20) {
			fine += (lateDays - 20) * 6;
			lateDays = 20;
		}
		if (lateDays > 5) {
			fine += (lateDays - 5) * 4;
			lateDays = 5;
		}
		fine += lateDays * 2;

		printf("Library fine: Rs. %d\n", fine);
	}

	return 0;
}
