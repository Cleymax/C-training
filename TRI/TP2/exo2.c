#include <stdio.h>
#include <stdlib.h>

int testSynchroDebut(unsigned char * trame);
void afficherAddrMAC(unsigned char * trame);
void afficherTrame(unsigned char *  trame);

int main(void)
{
	
	unsigned char trame1[] = { 170, 170, 170, 170, 170, 170, 170, 171,255, 255, 255, 255, 255, 255, 0, 12, 110, 244, 185, 217, 8, 6 };
	unsigned char trame2[] = { 170, 170, 170, 172, 170, 170, 170, 171,0, 12, 26, 33, 234, 87, 0, 12, 110, 244, 185, 217, 8, 0 };
	

	afficherTrame(trame1);
	afficherTrame(trame2);
	return 0;
}


int testSynchroDebut(unsigned char * trame)
{
	int result = 1;

	for(int i = 0; i < 7; i++){
		if(trame[i] != 170){
			result = 0;
		}
	}

	if(trame[7] != 171){
		result = 0;
	}

	return result;
}


 void afficherAddrMAC(unsigned char * trame) 
 {
 	printf("\tAddresse mac destination: ");
 	for(int i = 8 ; i < 14; i ++){
 		printf("%0.2x", trame[i]);

 		if( i != 13){
 			printf(":");
 		}
 	}
 	printf("\n");

 	printf("\tAddresse mac source: ");
 	for(int i = 14 ; i < 20; i ++){
 		printf("%0.2x", trame[i]);

 		if( i != 19){
 			printf(":");
 		}
 	}
 	printf("\n");
 }

 void afficherProtocole(unsigned char * trame) 
 {
 	printf("\tle protocol est : %0.2x:%0.2x\n", trame[20], trame[21]);
 }

 void afficherTrame(unsigned char *  trame)
 {
	if(testSynchroDebut(trame)){
		printf("la trame est valide:\n");
		afficherAddrMAC(trame);
		afficherProtocole(trame);
	}else {
		printf("la etrame n'est pas synchronisée !\n");	
	}
 }