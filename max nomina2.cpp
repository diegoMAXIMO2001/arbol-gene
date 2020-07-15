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
	int valida = 711;
	int clave;
	int i,op;
	do
	{
		
	gotoxy(5,50);printf("introduzca su clave numerica: ");
		scanf("%d", &clave);
		
	} 
	while (clave != valida);
	gotoxy(5,52);printf("aceptada.\n");
		
    for (i=4;i<=44;i++)
    {gotoxy(i,41);printf("*");}
    
    for (i=4;i<=44;i++)
    {gotoxy(i,46);printf("*");}
    
    gotoxy(5,42);printf("<Bienvenido a tu nomina>");
	gotoxy(5,43);printf("1.Primera informacion");
	gotoxy(5,44);printf("2.Segunda informacion ");
	gotoxy(5,45);printf("3.cuentas de nomina");

	
	gotoxy(5,47);printf("Seleccione una opcion (1-3): ");
	fflush(stdin);
	scanf("%d",  &op);
	
	switch(op)
	{
		case 1:
			gotoxy(1,1);printf("Calculo de nomina");

gotoxy(110,1);printf("Pag.: 1");
for (i=1;i<=118;i++)
    {gotoxy(i,2);printf("=");}
    gotoxy(1,4);printf("Empresa");
    gotoxy(1,6);printf("Empresa DEMO Division 01");
     gotoxy(46,6);printf("12345678910");
    
    gotoxy(46,1);printf("Mes:");
     gotoxy(53,1);printf("Enero 2016");
      gotoxy(46,4);printf("N inscripcion");
      gotoxy(46,5);printf("Empresa a S.S.");
for (i=1;i<=119;i++)
    {gotoxy(i,8);printf("=");}  
	   gotoxy (0,27); printf ("");

	   	gotoxy(66,4);printf("N Centro Seg.Soc.");
gotoxy(66,5);printf("S.S.");
gotoxy(66,6);printf("001");
gotoxy(1,10);printf("Empleado");
gotoxy(46,10);printf("Alta");
gotoxy(66,10);printf("N personal");
gotoxy(84,10);printf("N afil.Seg.Soc.");
gotoxy(1,11);printf("Sr.Lopez Gomez Diego");
gotoxy(46,11);printf("01.01.2016.");
gotoxy(66,11);printf("00006006");
gotoxy(84,11);printf("233456789037");
for (i=1;i<=119;i++)
    {gotoxy(i,12);printf("=");} 
    gotoxy (0,27); printf ("");
    break;
	  
	  case 2:
	   	gotoxy(1,13);printf("Prim");
gotoxy(46,14);printf("DNI/CIF");
gotoxy(66,14);printf("GRCOT CatProf");
gotoxy(84,14);printf("CNAE  CL.TR.");
gotoxy(1,14);printf("28000 Madrid");
gotoxy(46,15);printf("00000001R");
gotoxy(66,15);printf("01");


for (i=1;i<=119;i++)
    {gotoxy(i,16);printf("=");} 
    gotoxy(1,18);printf("Moneda calculo  nomina:  EUR");
for (i=1;i<=119;i++)
    {gotoxy(i,20);printf("=");}
   
    gotoxy (0,27); printf ("");
    break;
			
			case 3:
				 gotoxy(1,22);printf("Clv. Descripcion");
gotoxy(66,22);printf("Impt./Un.");
gotoxy(46,22);printf("Unidad");
gotoxy(84,22);printf("Devengo");
gotoxy(99,22);printf("Deduccion");
for (i=1;i<=119;i++)
    {gotoxy(i,23);printf("-");}
    gotoxy(1,24);printf("Pto.trabajo:");
gotoxy(84,25);printf("1,391.49");
gotoxy(1,25);printf("M101 Salario base co");
gotoxy(84,26);printf("200.00");
gotoxy(1,26);printf("M102 Plus convenio");
gotoxy(1,29);printf("Cotisaciones SS:");
gotoxy(1,30);printf("/350 Trab.cont.comunes");
gotoxy(99,30);printf("98.18");
gotoxy(1,31);printf("/370 Trab.desempleo");
gotoxy(99,31);printf("32.38");
gotoxy(1,32);printf("/380 Trab.formac.profesion");
gotoxy(99,32);printf("/2.09");
gotoxy(1,33);printf("/Rentencion IRPF:");
gotoxy(1,34);printf("/410 Retencion a cta. IRP");
gotoxy(99,34);printf("139.26");
gotoxy(1,35);printf("/101 Toltal Bruto");
gotoxy(46,35);printf("1,591.49");
gotoxy(66,35);printf("1,591.49");
gotoxy(99,35);printf("1,591.49");
gotoxy(1,36);printf("/550=Neto legal");
gotoxy(46,36);printf("1,319.58");
gotoxy(66,36);printf("1,319.58");
gotoxy(99,36);printf("1,319.58");
gotoxy (0,50); printf ("");
break;
	}
	return 0;
}


