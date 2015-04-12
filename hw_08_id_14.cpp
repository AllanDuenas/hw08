// Author:OSCAR GARCIA AVILA
// Date:
// Version:

/*
  Homework DD
  this assignment ...
*/

#include <iostream>
int main (){
	int e,n;
	std::cout<<"BIENVENIDO ESTE PROGRAMA MUESTRA FIGURAS GEOMETRICAS";
	std::cout<<"\n1)triangulo";
	std::cout<<"\n2)cuadrado lleno";
	std::cout<<"\n3)cuadrado sin rellenar";
	std::cout<<"\nESCRIBE EL NUMERO QUE TIENE EL MENU DE LA FIGURA QUE QUIERES VER: ";
	std::cin>>e;//el usuario escribe el numero que quiere ver y lo guardamos
	switch (e)//para elegir el caso de la variable e que elegimos
	 {
		case 1://numero de caso
	    std::cout<<"INGRESE LA MEDIDA DEL TRIANGULO: ";
	    std::cin>>n;//para ingresar el dato de las filas y coluumnas del triangulo
	    for (int r=0;r<=n;r++)//filas para que sean igual que n se declaa r<=n
       {
	    std::cout<<std::endl;//salto de linea
	    for(int i=0;i<r;i++)
	     {// i<r para que cuando r aumente vaya aumentando tambien i uno en uno
		   std::cout<<"*";//imprimimos asterisco
			   
	     }
       }
	   break;
			case 2:
	            std::cout<<"INGRESE LA MEDIDA DEL CUADRADO: ";
	            std::cin>>n;
	            for (int i=1; i<=n;i++)
	            {
	             for(int k=0;k<n;k++)
		          std::cout<<"*";	
	        	  std::cout<< std ::endl;
	            }
				break;
				case 3:
					 int n,i,j; 
                     std::cout<<"INGRESE LA MEDIDA DEL CUADRADO: "; 
                     std::cin>>n; 
                     for(i=1;i<=n;i++)
                     { 
					   if (i==1 || i==n) 
                        for(j=1;j<=n;j++) 
                        { 
                             std::cout<<"*"; 
                         } 
                         else 
                         {  {
                                   std::cout<<"*"; 
                             } 
                               for(j=1;j<=n-2;j++) 
                               std::cout<<" "; 
                               std::cout<<"*"; 
                          } 

                          std::cout<<std::endl; 

                      } 
					break;//al finalizar cada caso
					default:std::cout<<"NUMERO NO VALIDO";//si no es ninguno de los casos
			
	}
	return 0;
}
