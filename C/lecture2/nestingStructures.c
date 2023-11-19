#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int speed;
        int attack;
        char type[10];
    }pokemon;
    
    typedef struct legendryPokeymon
    {
        pokemon p;
        char ability[10];
    }legendryPokeymon;

    pokemon pikachu = {100,70,"Electric"};
    pokemon charizard = {80,120,"Fire"};
    
    legendryPokeymon mewtwo;

    mewtwo.p.attack = 180;
    mewtwo.p.speed = 185;
    strcpy(mewtwo.p.type,"Psychic");
    strcpy(mewtwo.ability,"Pressure");
    
    printf("%d\n",mewtwo.p.attack);
    printf("%s",mewtwo.ability);

    return 0;
}