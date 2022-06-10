#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

int pack4Chars2Int(char a, char b, char c, char d);
int checkEvenParity(short input);

void main()
{
	pack4Chars2Int('a', 'b', 'c', 'd');
	printf("%d\n", pack4Chars2Int);
	printf("even or odd: %d", checkEvenParity(24));


}


int pack4Chars2Int(char a, char b, char c, char d)
{
	int res = 0;	res |= a;	res <<= 8;// sizeof(char) =1	res |=b;	res <<= 8;	res |= c;	res <<= 8;	res |= d;	return res;

}

int checkEvenParity(short input){
	int counter = 0;
	unsigned short mask = 1;
	for (int i = 0; i < 8 * sizeof(short); i++)
	{
		if (input&mask != 0)
		{
			counter++;
		}
		mask << 1;
	}	return 1 - (counter % 2);}