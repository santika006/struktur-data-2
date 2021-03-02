#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
void push(char);
char pop();
char stack[100];
int top = -1;
int main()
{
    char str[100];
    int i, count = 0, len;

    printf("Masukan kata/kalimat : ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }

    for (i = 0; i < len; i++)
    {
        if (str[i] == pop())
            count++;
    }

    if (count == len)
        printf("kata/kalimat %s ini adalah kalimat palindrom", str);
    else
        printf("kata/kalimat %s ini adalah bukan kalimat palindrom", str);
        getch();
}

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return(stack[top--]);
}
	return 0;
}
