#pragma once

#include<ctime>
#include<stdlib.h>
#include <ctime>

using namespace System::Drawing;
enum Estado_Enemigo{Eliminado , Normal };

class Enemigo{
	public:
		Enemigo() {
			srand(time(NULL));
			i = rand()% 13 +1;  // enemigo .. > movimiento aleatorio
			j = rand()% 13 +2;
			x = 715;// ubicacion aleatoria
			y = 650;
			dx = 5;
			indiceX = 0;
			indiceY = 0;
			alto = 0 ;
			ancho = 0 ; //  
			ubicado = false;
			estado = Normal;
		}
		~Enemigo(){} 
		void dibujar(Graphics ^g , Bitmap ^bmpEnemigo , int **matriz){
			Rectangle porcionAUsar = Rectangle(indiceX * ancho , indiceY * alto,ancho ,alto);
			while((matriz[i][j-]  != 2 || matriz[i][j] != 2 || matriz[i][j+1]!= 2) && ubicado ==(false)                                                                                                                                                                                                                                                                                                                                              2:ubicado==false){
				j++;
				if(j == 15){
					j = 0   // vuelve a la comlun
				}
			}
			ubicado = true;
			Rectangle Aumento = Rectangle(x,y,40,40); // almacena posicion en x y en y
}			g-> DrawImage(bmpEnemigo, Aumento, porcionAUsar , GraphicsUnit::Pixel);
		


			void animar(){
			if(indiceX >= 0 && indiceX < 5){
				indiceX++;
			}
			if(indiceX == 5){
				while(indiceX != 0){
					indiceX--;
				}
			}
		}
	private:
		int x;
		int y;

		int i;
		int j;
		
		int dx;

		int indiceX;
		int indiceY;

		int ancho;
		int alto;

		bool ubicado;
		
}