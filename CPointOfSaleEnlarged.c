#include <stdio.h>
#include <stdlib.h>

int code, qty;
float price, amt, totalAmount, cash, change, shopTotal, banking, banked;
float coin1 = 0.10, coin2 = 0.20, coin3 = 0.50, coin4 = 1.00, coin5 = 2.00, coin6 = 5.00;
float note1 = 10.00, note2 = 20.00, note3 = 50.00, note4 = 100.00, note5 = 200.00; 
char addAnother, conti;

void main() {
	
	
	do {
		do {
			system("cls");
			printf("\n\n\t\t\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n");
			printf("\t\t\t|********************************************************|\n");
			printf("\t\t\t|>>>>>>|         WELCOME TO FARMTON KOTAS         |<<<<<<|\n");
			printf("\t\t\t|********************************************************|\n");
			printf("\t\t\t|>>>>>>|      Please...Select from the Menu       |<<<<<<|\n");
			printf("\t\t\t|********************************************************|\n");
			printf("\t\t\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n\t\t\t|******| Press Enter for Menu\t");
			getch();
			system("cls");
			printf("\n\n\t|***************************************************************************************************|\n");
			printf("\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|\n");
			printf("\t|******|                                                                                     |******|\n");
			printf("\t|>>>>>>|                                      MENU                                           |<<<<<<|\n");
			printf("\t|******|                                                                                     |******|\n");
			printf("\t|***************************************************************************************************|\n");
			printf("\t|>>>>>>| CODE |>>>>>>|                       KOTAS                      |<<<<<<|   PRICE     |<<<<<<|\n");
			printf("\t|***************************************************************************************************|\n");
			printf("\t|>>>>>>| [1]  |>>>>>>| Palony, Special and Chips                        |<<<<<<| R15.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [2]  |>>>>>>| Palony, Special, Vienna and Chips                |<<<<<<| R20.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [3]  |>>>>>>| Palony, Special, Vienna, Egg and Chips           |<<<<<<| R25.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [4]  |>>>>>>| Palony, Special, Vienna, Egg, Russian and chips  |<<<<<<| R30.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [5]  |>>>>>>| Mince, Potato and Atchar                         |<<<<<<| R15.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [6]  |>>>>>>| Mince, Potato, Leotoana and Atchar               |<<<<<<| R20.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [7]  |>>>>>>| Mince, Potato, Leotoana, Palony and Atchar       |<<<<<<| R25.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [8]  |>>>>>>| Mince, Potato, Palony, Snoekfish and Atchar      |<<<<<<| R30.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [9]  |>>>>>>| Kota Chicken Stew and Atchar                     |<<<<<<| R30.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [10] |>>>>>>| Kota Beef Stew and Atchar                        |<<<<<<| R40.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [11] |>>>>>>| Kota taco                                        |<<<<<<| R45.00      |<<<<<<|\n");
			printf("\t|>>>>>>| [12] |>>>>>>| Kota Pizza                                       |<<<<<<| R50.00      |<<<<<<|\n");
			printf("\t|***************************************************************************************************|\n");
			printf("\t|******************************************************| Atchar and Sources are optional |**********|\n");
			printf("\t|***************************************************************************************************|\n");
			printf("\t|>>>>>>| Select your Kota by entering a code from 1 to 10                                    |<<<<<<|\n\t|>>>>>>| ");
			scanf("%d", &code);
			printf("\t|***************************************************************************************************|\n");
			printf("\t|>>>>>>| How many Kotas would you like?                                                      |<<<<<<|\n\t|>>>>>>| ");
			scanf("%d", &qty);
			switch(code)
			{
				case 1: price = 14.95;
				break;
				case 2: price = 19.95;
				break;
				case 3: price = 24.95;
				break;
				case 4: price = 29.95;
				break;
				case 5: price = 14.95;
				break;
				case 6: price = 19.95;
				break;
				case 7: price = 24.95;
				break;
				case 8: price = 29.95;
				break;
				case 9: price = 29.95;
				break;
				case 10: price = 39.95;
				break;
			}
			system("cls");
			amt = price * qty;
			printf("\n\n\t\t\t|*************************************************************|\n");
			printf("\t\t\t|******| Amount           |******| R%.2f     \n", amt);
			printf("\t\t\t|*************************************************************|\n");
			totalAmount = totalAmount + amt;
			printf("\t\t\t|******| Total Amount     |******| R%.2f   \n", totalAmount);
			printf("\t\t\t|*************************************************************|\n");
			printf("\t\t\t|******| Would you like to add another order? (Y/N)    |******|\n\t\t\t|****** ");
			addAnother = getch();
		}while(addAnother == 'y' || addAnother == 'Y');
		do {
			printf("\n\t\t\t|>>>>>>| Cash Tendered:\t");
			scanf("%f", &cash);
		}while(cash < totalAmount);
		change = cash - totalAmount;
		printf("\t\t\t|>>>>>>| Change:\tR%.2f\n", change);
		printf("\t\t\t|*****************************************************************|\n");
		printf("\t\t\t|>>>>>>| Perform Another Sale? (Y/N)                       |<<<<<<|\n\t\t\t|>>>>>>| ");
		scanf("%s", &conti);
	}while(conti == 'y' || conti == 'Y');
	
	shopTotal = shopTotal + totalAmount;
	printf("The shop total should be %.2f in the till", shopTotal);
	printf("Would you like to bank the cash?(Y/N)");
	scanf("%s", &conti);
	if(conti == 'y' || conti == 'Y')
	{
		banking +banking - shopTotal;
		system("cls");
		printf("Banking so far %.2f", banking);
		printf("Enter the Coins and Notes accordingly to balance banking\n");
		printf("Enter 10 cents amount\n");
		scanf("%d", &qty);
		coin1+coin1*qty;
		printf("Enter 20 cents amount\n");
		scanf("%f", &qty);
		coin2+coin2*qty;
		printf("Enter 50 cents amount\n");
		scanf("%f", &qty);
		coin3+coin3*qty;
		printf("Enter R1.00 amount\n");
		scanf("%f", &qty);
		coin4+coin4*qty;
		printf("Enter R2.00 amount\n");
		scanf("%f", &qty);
		coin5+coin5*qty;
		printf("Enter R5.00 amount\n");
		scanf("%f", &qty);
		coin6+coin6*qty;
		printf("Enter R10.00 amount\n");
		scanf("%f", &qty);
		note1+note1*qty;
		banking = coin1+coin2+coin3+coin4+coin5+coin5+note1;
		printf("Banking is %.2f", banking);
		banked = banked + banking;
		printf("The cash to be banked is %.2f in total.", banked);
	}
	else 
	{
		getch();
	}
	getch();
	
	system("cls");
	printf("\n\n\t\t\t|******************************************************************************|\n");
	printf("\t\t\t|>>>>>>| Thank you for shopping at FARMTON Kotas...Please come again.   <<<<<<|\n");
	printf("\t\t\t|******************************************************************************|\n");
	getch();
	
	return;
}
