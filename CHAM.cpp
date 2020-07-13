#include <stdio.h>
#include <windows.h>
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
int main (int argc, char *argv[])
{
	int i;
	int op;
		for (i=4;i<=10;i++)
    {gotoxy(44,i);printf("*");}
    
	for (i=4;i<=10;i++)
    {gotoxy(3,i);printf("*");}
    
    for (i=4;i<=44;i++)
    {gotoxy(i,3);printf("*");}
    
    for (i=4;i<=44;i++)
    {gotoxy(i,10);printf("*");}
    
    gotoxy(5,4);printf("<Bienvenido a el arbol genealocico!!!>");
	gotoxy(5,6);printf("1.octavos de final ");
	gotoxy(5,7);printf("2.cuartos de final ");
	gotoxy(5,8);printf("3.final");
	gotoxy(5,9);printf("4.CAMPEON");
	
	gotoxy(5,15);printf("Seleccione una opcion (1-4): ");
	fflush(stdin);
	scanf("%d",  &op);
	
	switch(op)
	{
		case 1:
			gotoxy(5,20);printf("octavos de final");
		    gotoxy(50,20);printf("Equipos");
		    gotoxy(50,21);printf("Schalke vs. Manchester City");
		    gotoxy(50,22);printf("Atletico Madrid vs. Juventus");
		    gotoxy(50,23);printf("Manchester United vs. PSG");
		    gotoxy(50,24);printf("Tottenham vs. Borussia Dortmund");
		    gotoxy(50,25);printf("Lyon vs. Barcelona");
		    gotoxy(50,26);printf("Roma vs. Porto");
		    gotoxy(50,27);printf("Ajax vs. Real Madrid");
		    gotoxy(50,28);printf("Liverpool vs Bayern Munich");
		    gotoxy (0,27); printf ("");
			break;
			
			case 2:
			gotoxy(5,20);printf("Cuartos de final");
		    gotoxy(50,20);printf("equipos");
		    gotoxy(50,21);printf("Totrenham vs. Manchester City");
		    gotoxy(50,22);printf("Liverpool vs. Porto");
		    gotoxy(50,23);printf("Manchester United vs. Barcelona");
		    gotoxy(50,24);printf("Ajax vs. Juventus");
		    gotoxy (0,27); printf ("");
			break;
			
			case 3:
			gotoxy(5,20);printf("Final");
		    gotoxy(50,20);printf("REAL MADRID");
		    gotoxy(50,21);printf("LIVERPOOL");
		    gotoxy (0,27); printf ("");
			break;
			
			case 4:
			gotoxy(5,20);printf("CAMPEON");
		    gotoxy(50,20);printf("lIVERPOOL!!!!!!!!!!");
		    gotoxy (0,27); printf ("");
			break;
	}
	return 0;
}
