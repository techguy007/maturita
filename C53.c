#include <stdio.h>

struct Komplexni_cislo{
    int realna_slozka;
    int imaginarni_slozka;
};

struct Komplexni_cislo SOUCET_CISEL(struct Komplexni_cislo kc1, struct Komplexni_cislo kc2){
    struct Komplexni_cislo soucet;

    soucet.realna_slozka = kc1.realna_slozka + kc2.realna_slozka;
    soucet.imaginarni_slozka = kc1.imaginarni_slozka + kc2.imaginarni_slozka;
    
    return soucet;

}


int main(){
    struct Komplexni_cislo kc1;
    struct Komplexni_cislo kc2;
    struct Komplexni_cislo soucet;

    printf("Soucet komplexnich cisel \n");

    printf("Zadejte prvni cislo ve tvaru a + bi \n");
    printf("a: ");
    scanf("%i",&kc1.realna_slozka);
    printf("b: ");
    scanf("%i",&kc1.imaginarni_slozka);

    printf("\n");

    printf("Zadejte druhe cislo ve tvaru a + bi \n");
    printf("a: ");
    scanf("%i",&kc2.realna_slozka);
    printf("b: ");
    scanf("%i",&kc2.imaginarni_slozka);

    printf("cislo 1: %i + %i*i \n",kc1.realna_slozka,kc1.imaginarni_slozka);
    printf("cislo 2: %i + %i*i \n",kc2.realna_slozka,kc2.imaginarni_slozka);

    soucet = SOUCET_CISEL(kc1,kc2);

    printf("Soucet cisel: %i + %i*i \n",soucet.realna_slozka,soucet.imaginarni_slozka);

    return 0;
}