#include<stdio.h>
int main()
{ typedef stuct pokemon
{ int hp;
int speed; 
int attack;
char tier;
}
pokemon;
pokemon arr[3];
arr[0].attack=50;
arr[0].hp=100;
arr[0].speed=30;
arr[0].tier='A';
arr[1].attack=50;
arr[1].hp=100;
arr[1].speed=30;
arr[1].tier='A';
arr[2].attack=50;
arr[2].hp=100;
arr[2].speed=30;
arr[2].tier='A';
}
for( int i=0;i<3;i++)
{ printf("%d\n",arr[i].attack);
printf("%d\n",arr[i].hp);
printf("%d\n",arr[i].speed);
printf("%c\n",arr[i].tier);
}
return 0;

}
}
