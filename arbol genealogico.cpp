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
	gotoxy(5,6);printf("1.Primera Generacion ");
	gotoxy(5,7);printf("2.Segunda Generacion ");
	gotoxy(5,8);printf("3.Tercer Generacion");
	gotoxy(5,9);printf("4.Cuarta Generacion");
	
	gotoxy(5,15);printf("Seleccione una opcion (1-4): ");
	fflush(stdin);
	scanf("%d",  &op);
	
	switch(op)
	{
		case 1:
			gotoxy(5,20);printf("Primer generacion (Bisabuelos)");
		    gotoxy(50,20);printf("lado paterno");
		    gotoxy(50,21);printf("Amado Lopez");
		    gotoxy(50,22);printf("Marcelina Florez");
		    gotoxy(50,23);printf("Gertrudiz Lopez");
		    gotoxy(80,20);printf("lado materno");
		    gotoxy(80,21);printf("Francisco Gomez Garcia");
		    gotoxy(80,22);printf("Celia Zaragosa Gonzales");
		    gotoxy(80,23);printf("Jorge Figueroa");
		    gotoxy(80,24);printf("Carlota Ramos");
		    gotoxy (0,27); printf ("");
			break;
			
			case 2:
			gotoxy(5,20);printf("Segunda generacion (Abuelos)");
		    gotoxy(50,20);printf("lado paterno");
		    gotoxy(50,21);printf("Amado Lopez Flores");
		    gotoxy(50,22);printf("Delfina Hernandez Lopez");
		    gotoxy(80,20);printf("lado materno");
		    gotoxy(80,21);printf("Francisco Gomez Zaragosa");
		    gotoxy(80,22);printf("Guadalupe Figueroa Ramos");
		    gotoxy (0,27); printf ("");
			break;
			
			case 3:
			gotoxy(5,20);printf("Tercer generacion (Padres y Tios)");
		    gotoxy(50,20);printf("lado paterno");
		    gotoxy(50,21);printf("Carlos Armando Lopez Hernandez");
		    gotoxy(50,22);printf("Veronica Lopez Hernandez");
		    gotoxy(82,20);printf("lado materno");
		    gotoxy(82,21);printf("Maria de Lourdes Gomez Figueroa");
		    gotoxy(82,22);printf("Jorge Gonzales Urtado");
		    gotoxy(82,23);printf("Jorge Gomez Figueroa");
		    gotoxy(82,24);printf("Celia Gomez Figueroa");
		    gotoxy (0,27); printf ("");
			break;
			
			case 4:
			gotoxy(5,20);printf("Cuarta generacion (Primos y Hermanos)");
		    gotoxy(50,20);printf("lado primos");
		    gotoxy(50,21);printf("Jorge  Aaron Gomez Lopez");
		    gotoxy(50,22);printf("Jorge Emilio Gomez Lopez");
		    gotoxy(50,23);printf("Celia Renata Gonzalez Gomez");
		    gotoxy(50,24);printf("Alberto Sebastian Gonzales Gomez");
		    gotoxy(85,20);printf("lado hermanos");
		    gotoxy(85,21);printf("Carlos Armando Lopez Gomez");
		    gotoxy(85,22);printf("Diego Maximo Lopez Gomez");
		    gotoxy(85,23);printf("Piero Iñaki Lopez Gomez");
		    gotoxy(85,24);printf("Braulio Alexis Lopez Gomez");
		    gotoxy (0,27); printf ("");
			break;
	}
	return 0;
}
