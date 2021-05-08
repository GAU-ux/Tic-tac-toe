#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gameName()
{
printf("\t\t\t      Tic - Tac - Toe\n");
printf("\t\t\t      ~~~~~~~~~~~~~~~");
}
void show()
{
printf("\n\n\t\t\t        ---|---|---");
printf("\n\t\t\t         %c | %c | %c",a[0],a[1],a[2]);
printf("\n\t\t\t        ---|---|---");
printf("\n\t\t\t         %c | %c | %c",a[3],a[4],a[5]);
printf("\n\t\t\t        ---|---|---");
printf("\n\t\t\t         %c | %c | %c",a[6],a[7],a[8]);
printf("\n\t\t\t        ---|---|---");
}
void inputSymbol()
{
printf("\nPlayer 1   Symbol :  |X|");
printf("\nPlayer 2   Symbol :  |O|");
}
void start()
{
char pa;
printf("\nWho Will Start The Game First : Player 1  OR  Player 2");
fflush(stdin);
scanf("%c",&pa);
}
int count=0;

void play()
{
char p,s;
printf("\nEnter Position And Symbol For The Player. :  \n");
fflush(stdin);
scanf("%c",&p);
fflush(stdin);
scanf("%c",&s);
count++;
check(p,s);
}

void check(char P, char S)
{
int i;
for(i=0;i<=8;i++)
  {
    if(a[i]==P)
    a[i]=S;
  }
}
int end()
{
if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
 return(100);
else if((a[0]=='o'&&a[1]=='o'&&a[2]=='o')||(a[0]=='o'&&a[3]=='o'&&a[6]=='o')||(a[0]=='o'&&a[4]=='o'&&a[8]=='o'))
 return(200);
else if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[1]=='x'&&a[4]=='x'&&a[7]=='x'))
  return(100);
else if((a[0]=='o'&&a[1]=='o'&&a[2]=='o')||(a[1]=='o'&&a[4]=='o'&&a[7]=='o'))
 return(200);
else if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
 return(100);
else if((a[0]=='o'&&a[1]=='o'&&a[2]=='o')||(a[2]=='o'&&a[5]=='o'&&a[8]=='o')||(a[2]=='o'&&a[4]=='o'&&a[6]=='o'))
 return(200);
else if((a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x'))
  return(100);
else if((a[0]=='o'&&a[3]=='o'&&a[6]=='o')||(a[3]=='o'&&a[4]=='o'&&a[5]=='o'))
 return(200);
else if((a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x'))
 return(100);
else if((a[0]=='o'&&a[4]=='o'&&a[8]=='o')||(a[1]=='o'&&a[4]=='o'&&a[7]=='o')||(a[2]=='o'&&a[4]=='o'&&a[6]=='o')||(a[3]=='o'&&a[4]=='o'&&a[5]=='o'))
 return(200);
else if((a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x'))
  return(100);
else if((a[3]=='o'&&a[4]=='o'&&a[5]=='o')||(a[2]=='o'&&a[5]=='o'&&a[8]=='o'))
 return(200);
else if((a[2]=='x'&&a[4]=='x'&&a[6]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
 return(100);
else if((a[2]=='o'&&a[4]=='o'&&a[6]=='o')||(a[0]=='o'&&a[3]=='o'&&a[6]=='o')||(a[6]=='o'&&a[7]=='o'&&a[8]=='o'))
 return(200);
else if((a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[6]=='x'&&a[8]=='x'&&a[7]=='x'))
  return(100);
else if((a[4]=='o'&&a[1]=='o'&&a[7]=='o')||(a[6]=='o'&&a[8]=='o'&&a[7]=='o'))
 return(200);
else if((a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[8]=='x'&&a[7]=='x'&&a[6]=='x')||(a[8]=='x'&&a[5]=='x'&&a[8]=='x'))
 return(100);
else if((a[0]=='o'&&a[4]=='o'&&a[8]=='o')||(a[8]=='o'&&a[7]=='o'&&a[6]=='o')||(a[8]=='o'&&a[5]=='o'&&a[8]=='o'))
 return(200);
 return(300);
}

int main()
{
int k;
char ch;
labell:

gameName();
system("cls");
show();
inputSymbol();
start();
play();

label:
    system("cls");
show();
play();
k=end();

show();
if(count<9)
{
  if(k==100)
  {
  printf("\n\t\t\t PLAYER 1 WON THE GAME");
  count=0;
  }
  else if(k==200)
  {
  printf("\n\t\t\t PLAYER 2 WON THE GAME");
  count=0;
  }
  else
     goto label;
}
else
  {
   printf("\n\t\t\tGAME DRAW ");
   count = 0;
  }
  printf("\n\nDo You Want To Play Again : Enter y/Y for YES or n/N for NO : ");
  fflush(stdin);
  scanf("%c",&ch);
  printf("\n\nPress Any key To exit : ");
  if(ch=='y'||ch=='Y')
    {
    a[0]='1';
    a[1]='2';
    a[2]='3';
    a[3]='4';
    a[4]='5';
    a[5]='6';
    a[6]='7';
    a[7]='8';
    a[8]='9';
    goto labell;
    }
getch();
return 0;
}
