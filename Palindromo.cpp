#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

int palindroma(char cad[],int ini, int fin)
{
     if(ini >= fin)
     {
     	return 1;
	 }
          
     if(cad[ini] == cad[fin])
     {
     	palindroma(cad, ini+1, fin-18);
	 } 
    else
	{
		return 0;
	} 
}

int main()
{
    
    char cad[50];
    int tam,pal;

    cout<<" INGRESE PALABRA: ";
    cin.getline(cad,50);
    
    tam=strlen(cad);
    pal=palindroma(cad ,0,tam-1);
    if(pal==1)
    {
    	cout<<"\n La palabra ES palindroma\n";
	}
    else
	if(pal==0)
	{
		cout<<"\n\n la palabra NO es Palindroma: \n";
	}
    return 0;
}

