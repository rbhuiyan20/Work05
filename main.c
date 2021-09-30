#include<stdio.h>

int main(){
	
	//step 1
	char c = 99;
	int i = 1738;
	long l = 2021;
	//step 2
	printf("Addresses in both decimal and hexadecimal form \n");
	printf("Char decimal: %lu \t Char Hexa: %p \n", &c, &c);
	printf("Int  decimal: %lu \t Int  Hexa: %p \n", &i, &i);
	printf("Long decimal: %lu \t Long Hexa: %p \n", &l, &l);
	
	
	// step 3 pointer variables of each 
	char *pc = &c;
    int *pi = &i;
    long *pl = &l;
	// step 4
	printf("Values of Pointers\n");
	printf("Char Pointer Value: %p \n",pc);
	printf("Int Pointer Value: %p \n",pi);
	printf("Long Pointer Value: %p \n",pl);
	
	// step 5
	*pc = 'r';
	*pi = 29;
	*pl = 1234576;
	
	printf("Values of Modified Pointers\n");
	printf("Char Pointer Value: %c \n",pc);
	printf("Int Pointer Value: %i \n",pi);
	printf("Long Pointer Value: %lu \n",pl);
	
	// step 6
	
	unsigned int u = 106;
	int *ui_pointer = &u;
	char *uc_pointer = &u;
	
	// step 7
	printf("Values of Unsigned Pointers Pointers\n");
	printf("ui_pointer: %p ui_pointer points to: %u \n", ui_pointer, *ui_pointer);
	printf("uc_pointer: %p uc_pointer points to: %u \n", uc_pointer, *uc_pointer);
	
	// step 8
	printf("Unsigned int in deimal and hexidecimal\n");
	printf("Decimal: %u Hexadecimal: %x \n", u, u);
	
	// step 9
	printf("Each Individual Byte of Unsigned Int\n");
	int z = 0;
    for (z = 0; z < 4; z++) {
        printf("Decimal byte:%hhu Hexidecimalbyte:%hhx\n", *(ui_pointer + z), *(ui_pointer + z));
    }
	// step 10
	printf("Each byte incremented by 1\n ");
	 for (z = 0; z < 4; z++) {
        (*(uc_pointer + z))++;
        printf("decimal byte: %u hexidecimal byte:%x \n", *ui_pointer, *ui_pointer);
    }
    for (z = 0; z < 4; z++) {
        printf("decimal byte:%hhu hexidecimal byte:%hhx\n", *(uc_pointer + z), *(uc_pointer + z));
    }
	// step 11
	printf("Each byte incremented by 16\n");
	for (z = 0; z < 4; z++) {
        (*(uc_pointer + z))+=16;
        printf("decimal byte: %u hexidecimal byte:%x \n", *ui_pointer, *ui_pointer);
    }
    for (z = 0; z < 4; z++) {
        printf("decimal byte:%hhu hexidecimal byte:%hhx\n", *(uc_pointer + z), *(uc_pointer + z));
    }
	
}