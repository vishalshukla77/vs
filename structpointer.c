#include<stdio.h>
typedef struct pokemon{
	int hp;
	int speed;
	int attack;
	int tier;
	char name[15];	
}pokemon ;
void fun(pokemon p)
{ printf("%d",p.hp);
return ;
}
void change(pokemon p)
{ p.hp=70;
p.attack=90;
retutn;//structure are pass by value so copy of pokemon will be created
}
int main()
{  pokemon pikachu;
pikachu.hp=40;
pikachu.attack=30;
pikachu.speed=90;
change(pukachu);
printf("%d\n",pikachu.hp)
printf("%d\n",pikachu.attack)
printf("%d\n",pikachu.speed)}
