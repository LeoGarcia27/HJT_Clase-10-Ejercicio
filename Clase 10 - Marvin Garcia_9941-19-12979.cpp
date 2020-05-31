#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;


struct info_emp{
	char nom[25];
	char puesto[25];
	char depto[25];
	int cod;
	int salario;
}info_emp = {"Informacion"};



main(){
	
	int n;
	
	cout<<"\n\n\t\t\t ----- Lista de Empleados -----";
	cout<<"\n\n\t Ingrese el numero de empleados que desee registrar: "; cin>>n;
	
		for(int x = 0; x<=n; x++){
			
			system("cls");
			cout<<"\n\n\t Ingrese el codigo del empleado "<<x+1<<" : "; cin>>info_emp.cod;
			cout<<"\n\t ----------------------------------------------------\n";
			cout<<"\n\t\t Nombre del empleado "<<x+1<<" : "; cin>>info_emp.nom;
			cout<<"\n\t\t Puesto del empleado: "; cin>>info_emp.puesto;
			cout<<"\n\t\t Departamento o Area del empleado "; 
				cout<<"\n\t\t\t - Gerencia";
				cout<<"\n\t\t\t - Administracion";
				cout<<"\n\t\t\t - Produccion";
				cout<<"\n\n\t\t\t Depto.: "; cin>>info_emp.depto;
			cout<<"\n\t\t\t Salario del empleado: "; cin>>info_emp.salario;
			
			for(int y = 0; y<x; y++){
		
					ofstream emp("empleados.txt");
					emp <<"\n\n\t Codigo del empleado "<<x+1<<" : " << info_emp.cod;
					emp <<"\n\t\t Nombre del empleado "<<x+1<<" : " << info_emp.nom;
					emp <<"\n\t\t Puesto del empleado: " << info_emp.puesto;
					emp <<"\n\t\t Departamento o Area del empleado "; 
						emp <<"\n\t\t\t - Gerencia";
						emp <<"\n\t\t\t - Administracion";
						emp <<"\n\t\t\t - Produccion";
						emp <<"\n\n\t\t\t Depto.: " << info_emp.depto;
					emp <<"\n\t\t\t Salario del empleado: " << info_emp.salario;
					emp <<"\n\n\t ----------------------------------------------------\n";
					
				}
		}
		
				
	
	
getch();	
}
