
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define la estructura Contactos.
struct Contactos
{
	char	nombre [50];
	char	apellido [50];
	char	telefono [50];
	int 	ID;
};


struct Contactos contacto;

// Declaración de funciones
void ingresoContactos();
void imprimirContactos();
void listarContactos();
void guardarEnBase();
void editarContacto();
void buscarContacto();

 
char opcion;

FILE *archivo;


int main()
{
	archivo = fopen ("Contactos.db", "a");	
	do
	{
		//system("clear");
		printf ("\tMenú de Contactos:\n");
		printf ("1- Ingresar nuevo contacto.\n2- Listado de contactos. \n3- Buscar contacto.\n4- Editar contacto.\ns- Salir\n");
		scanf ("%c", &opcion);
	}while(!opcion, getchar()!='\n');

	switch(opcion)
	{
		case '1':
		//system ("clear");
		do
		{
			ingresoContactos();
			imprimirContactos();
		}while(!opcion, getchar()!='\n');
	}

	fclose (archivo);
	return 0;
}




void ingresoContactos()
{
	printf("Nombre:");
	fgets(contacto.nombre, sizeof (contacto.nombre), stdin);
	printf("%s", contacto.nombre);
	printf("apellido:");
	fgets(contacto.apellido, sizeof (contacto.apellido), stdin);
	printf("Telefono:");
	fgets(contacto.telefono, sizeof (contacto.telefono), stdin);
	contacto.ID ++;
	guardarEnBase();
}


void guardarEnBase()
{
	printf("%s", contacto.nombre);
	fprintf(archivo, "%d \n", contacto.ID);
	fputs(contacto.nombre, archivo);
	fputs(contacto.apellido, archivo);
	fputs(contacto.telefono, archivo);
}


void imprimirContactos()
{

}