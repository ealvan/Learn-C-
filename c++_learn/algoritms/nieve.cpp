

#include<iostream>

using std::cout;
using std::cin;

int CalculoNieve(int [],int);

int main(){
	
	int alturasEdificios[]={0,1,0,2,1,0,3,2,1,1,1,5,0,2};
	
	//Obtengo la longitud de la lista
	int cantidadEdificios = sizeof(alturasEdificios)/sizeof(*alturasEdificios);
	
	cout<<"La cantidad de nieve atrapa es: "<<CalculoNieve(alturasEdificios,cantidadEdificios)<<"\n";
	
	return 0;
}


int CalculoNieve(int alturas[],int longitud){
	
   int i=1,nieveAcumulada=0;
   int limite,menor=0;
   int cEspacioEdificio[]={0,0};
   
   limite=alturas[0];
   
   while(i<longitud){
    //int alturasEdificios[]=
    //  {0,1,0,2,1,0,3,2,1,1,1,5,0,2};
   	    if(alturas[i] >= limite){
   	      nieveAcumulada += (limite*cEspacioEdificio[1])-cEspacioEdificio[0];
   	      cEspacioEdificio[0] = 0;
   	      cEspacioEdificio[1] = 0;   	      
		  limite = alturas[i];//1
		}else{
		  cEspacioEdificio[0] += alturas[i];
		  cEspacioEdificio[1] += 1;
		  menor = alturas[i];
		}
   	   i++;
    }
   
//En caso, de que ya no se encuentre 
//un edifico de mayor altura al que se tiene guardado en la variable limite
    if(menor!=0){
    	nieveAcumulada+=(menor*cEspacioEdificio[1])-cEspacioEdificio[0];
	}
     
   return nieveAcumulada;	
}
