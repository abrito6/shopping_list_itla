
#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "string"

using namespace std;

struct nodo
{
    nodo *siguiente;
	string nombre;
	int id;
	int cantidad;

};

   typedef struct nodo *Producto;
   
   
   void agregarElemento(Producto &pnombre, string nombre, int id, int cantidad)
   {

	   Producto producto, ultimo;
	   producto = new (struct nodo);
	   producto->nombre = nombre;
	   producto->id = id;
	   producto->cantidad = cantidad;
	   producto->siguiente = NULL;

	   if(pnombre == NULL)
	   {
		   pnombre = producto;

	   }else{
		
		   ultimo = pnombre;

		   while(ultimo->siguiente != NULL)
		   {
			   ultimo = ultimo->siguiente;
		   }
			
		    ultimo->siguiente = producto;
	   }
	  
  }

void mostrar(Producto producto)
{
				
		while(producto != NULL)
		{
						
			cout <<endl <<producto->id <<" -> "<<"Producto: " << producto->nombre <<"\t" <<"Cantidad: " << producto->cantidad << endl;
			producto = producto->siguiente;
		
		}
	
	   
}

  void eliminarProducto(Producto &producto, int id)
   {
		
	   Producto aux, ant = NULL;
	   aux = producto;

	   if(producto != NULL)
	   {
		   while(aux != NULL)
		   {
			   if(aux->id == id)
			   {
				   if(aux==producto)
					   aux = aux->siguiente;
               	   else
					   ant->siguiente = aux->siguiente;
    				   delete(aux);
                return;
			   }
			   
			   ant = aux;
			   aux = aux->siguiente;
		   }
	   
	   }else 
		   cout << "Lista vacia" <<endl;
   
   }




	void menu()
	{
		system("cls");
		cout <<" Lista de producto"<<endl;
		cout << endl <<" 1 - Agregar Producto"<<endl;
		cout << endl <<" 2 - Ver Producto" << endl;
		cout << endl <<" 3 - Eliminar Producto" << endl;
		cout << endl <<" 4 - Salir" << endl;
		cout << endl <<" Seleccione una opcion => ";
			
	}