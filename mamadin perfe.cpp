#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwpos;
	dwpos.X=x;
	dwpos.Y=y;
	SetConsoleCursorPosition(hcon,dwpos);
}
int main()
{
	char a=205;
	char b=186;
	char c=201;
	char d=200;
	char e=188;
	char f=187;
	
	int opcion,opcion2,total=0;
	bool etiqueta=1;
	
	system("color f4");
	gotoxy(49,9);
	cout<<c<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
	gotoxy(49,10);
	cout<<b;
	gotoxy(49,11);
	cout<<b;
	gotoxy(49,12);
	cout<<b;
	gotoxy(50,11);
	cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
	gotoxy(49,13);
	cout<<b;
	gotoxy(49,14);
	cout<<d<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
	gotoxy(75,14);
	cout<<e;
	gotoxy(75,13);
	cout<<b;
	gotoxy(75,12);
	cout<<b;
	gotoxy(75,11);
	cout<<b;
	gotoxy(75,10);
	cout<<b;
	gotoxy(75,9);
	cout<<f;
	
	
	gotoxy(50,10);
	cout<<"Bienvenido a Soriana"<<endl;
    gotoxy(50,12);
	cout<<"1 ingresar a la tienda"<<endl;
	gotoxy(50,13);
	cout<<"2 salir"<<endl;
	gotoxy(50,15);
	cin>>opcion;
	Beep(1800,200);
	
	if(opcion==1){
	
	
	while(opcion2!=5)
	{
		system("color ec");
		system("CLS");
		gotoxy(50,10);
		cout<<"Eliga una de las opciones de compra"<<endl;
		gotoxy(50,11);
		cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
		gotoxy(50,12);
		cout<<"1 abarrotes"<<endl;
		gotoxy(50,13);
		cout<<"2 electronica"<<endl;
		gotoxy(50,14);
		cout<<"3 electrodomesticos"<<endl;
		gotoxy(50,15);
		cout<<"4 pescados"<<endl;
		gotoxy(50,16);
		cout<<"5 salir"<<endl;
		gotoxy(50,17);
		cin>>opcion2;
		Beep(1800,200);
		switch(opcion2)
		{
		case 1:
			system("CLS");
			system("color a5");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Eligio abarrotes  el costo es: 100"<<endl;
			total+=100;
			Sleep(2000);
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Tiene etiqueta roja ?"<<endl;
			gotoxy(50,14);
			cout<<"1 SI"<<endl;
			gotoxy(50,15);
			cout<<"0 no"<<endl;
			gotoxy(50,16);
			cin>>etiqueta;
			Beep(1800,200);
			
			if(etiqueta==1){
				system("CLS");
				gotoxy(50,10);
				cout<<"VENDEDOR"<<endl;
				gotoxy(50,11);
				cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
				gotoxy(50,13);
				cout<<"Descuento de 20%"<<endl; 
				gotoxy(50,14);
				
				cout<<"menos :20$ costo total :80$"<<endl;
			total-=20;
			        					
					Sleep(2000);
		         }
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"El acumulado de su cuenta a pagar es  :"<<total<<"$"<<endl;
			Sleep(2000);
			break;
		case 2:
			system("CLS");
			system("color 3B ");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Eligio electronica  el costo es: 1000"<<endl;
			total+=1000;
			Sleep(2000);
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Tiene etiqueta roja ?"<<endl;
			gotoxy(50,14);
			cout<<"1 SI"<<endl;
			gotoxy(50,15);
			cout<<"0 no"<<endl;
			gotoxy(50,16);
			cin>>etiqueta;
			Beep(1800,200);
			
			if(etiqueta==1){
				system("CLS");
				gotoxy(50,10);
				cout<<"VENDEDOR"<<endl;
				gotoxy(50,11);
				cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
				gotoxy(50,13);
				cout<<"Descuento de 20%"<<endl; 
				gotoxy(50,14);
				
				cout<<"menos :200$ costo total :800$"<<endl;
				total-=200;
				
				Sleep(2000);
			}
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"El acumulado de su cuenta a pagar es :"<<total<<"$"<<endl;
			Sleep(2000);
			break;
		case 3:
			system("CLS");
			system("color D9");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Eligio electrodomestico  el costo es: 1500"<<endl;
			total+=1500;
			Sleep(2000);
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Tiene etiqueta roja ?"<<endl;
			gotoxy(50,14);
			cout<<"1 SI"<<endl;
			gotoxy(50,15);
			cout<<"0 no"<<endl;
			gotoxy(50,16);
			cin>>etiqueta;
			Beep(1800,200);
			
			if(etiqueta==1){
				system("CLS");
				gotoxy(50,10);
				cout<<"VENDEDOR"<<endl;
				gotoxy(50,11);
				cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
				gotoxy(50,13);
				cout<<"Descuento de 20%"<<endl; 
				gotoxy(50,14);
				
				cout<<"menos :300$ costo total :1200$"<<endl;
				total-=300;
				
				Sleep(2000);
			}
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"El acumulado de su cuenta a pagar es :"<<total<<"$"<<endl;
			Sleep(2000);
			break;
		case 4:
		
			system("CLS");
			system("color 19");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Eligio pescados  el costo es: 300"<<endl;
			total+=300;
			Sleep(2000);
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"Tiene etiqueta roja ?"<<endl;
			gotoxy(50,14);
			cout<<"1 SI"<<endl;
			gotoxy(50,15);
			cout<<"0 no"<<endl;
			gotoxy(50,16);
			cin>>etiqueta;
			Beep(1800,200);
			
			if(etiqueta==1){
				system("CLS");
				gotoxy(50,10);
				cout<<"VENDEDOR"<<endl;
				gotoxy(50,11);
				cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
				gotoxy(50,13);
				cout<<"Descuento de 20%"<<endl; 
				gotoxy(50,14);
				
				cout<<"menos :60$ costo total :300$"<<endl;
				total-=60;
				
				Sleep(2000);
			}
			system("CLS");
			gotoxy(50,10);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,11);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			gotoxy(50,13);
			cout<<"El acumulado de su cuenta a pagar es :"<<total<<"$"<<endl;
			Sleep(2000);
			break;
		case 5:
			system("CLS");
			system("color f4");  
			gotoxy(50,8);
			cout<<"VENDEDOR"<<endl;
			gotoxy(50,9);
			cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
			
			gotoxy(50,10);
			cout<<"Gracias por comprar aqui"<<endl;
			gotoxy(50,12);
			cout<<"Su cuenta total a pagar es :"<<total<<"$"<<endl;
			break;
		}
	}

		
	}
	Sleep(3000);
	gotoxy(50,18);
	cout<<"Hasta pronto"<<endl;

	
	system("pause>arc");
	return 0;
}
