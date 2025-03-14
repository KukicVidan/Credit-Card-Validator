#include <stdio.h>

int main(){

  long card_number;

  printf("Card Number: ");
  scanf("%ld", &card_number);
  int count = 0;
  long temp = card_number;
	while (temp > 0){
	  temp /= 10;
	  count++;
	}

printf("Youre card have %d numubers in it\n ", count);
printf("Witch means.......  .......  .......\n");

long temp2 = card_number;
  while (temp2 >= 100){
	temp2 /=10;
  }
long temp3 = card_number;
  while (temp3 >=10){
	  temp3 = temp3 / 10;
  	}

if (temp2 == 51 ||temp2 == 52 || temp2 == 53 || temp2 == 54 || temp2 == 55){
	printf("I guess it is MasterCard?\n");

}else if (temp2 == 34 || temp2 == 37){
		printf("I guess it is American Express\n");
}else if (temp3 == 4) {
	printf("It is probbably Visa and it starts with number 4?\n");
}else {
	printf("Have no fcking idea....");
}

  return 0;

}
