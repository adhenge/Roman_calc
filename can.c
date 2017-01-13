#include<stdio.h>

int temp,st1,st2,acc,ct,timer;
int temp1,st11,st21,acc1,ct1;
int timer1;
char array[12];


void main(){
while(1){
printf("Enter the temperature(0 to 1023) -\n");
scanf("%d", &temp);

printf("Enter the status(0-3) -\n");
scanf("%d", &st1);

printf("Enter the accelerometer value(0 to 1023) -\n");
scanf("%d", &acc);

printf("Enter the status(0-3) -\n");
scanf("%d", &st2);

printf("Enter the counter(0-255) -\n");
scanf("%d", &ct);

printf("Enter the timer -\n");
scanf("%d", &timer);

//temp1 = temp << 2;
array[0] = temp;
printf("the temperature value -%x\n",array[0]);
acc = acc1;
array[1] = (temp << 6) | (st1 << 4) | (acc >>6);
//array[1] = st11;
printf("the temperature value -%x\n",array[1]);

array[2] = (acc1 << 10 | st2);
printf("the temperature value -%x\n",array[2]);

array[3] = ct;
printf("the temperature value -%x\n",array[3]);

array[4] = timer;
array[5] = timer >> 8;
array[6] = timer >> 16;
array[7] = timer >> 24;

printf("the temperature value -%x\n",array[4]);
printf("the temperature value -%x\n",array[5]);
printf("the temperature value -%x\n",array[6]);
printf("the temperature value -%x\n",array[7]);


for(int i = 0; i < 8; i++)
	printf("0x-%c, ",array[i]);

}


return;
}
