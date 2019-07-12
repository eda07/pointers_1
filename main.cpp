#include <stdio.h>

int main() {
    char cumle [10];
    printf("Cumle giriniz >");
    gets(cumle);
    printf("Girdiginiz cumle\n");
    printf("%s" , &cumle);


    char* cp = cumle;
    printf("\n");
    printf("%x" ,cp);
    printf("\n");
    printf("%c" ,*cp);
    cp ++;
    printf("\n");
    printf("%c" , *cp);
    cp +=2;
    printf("\n");
    printf("%c" , *cp);
    cp +=5;
    printf("\n");
    printf("%c" , *cp);
    return 0;
}