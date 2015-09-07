#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include <cmath>
#define PI 3.14159265358979323846

float ArealSirkel(float);
void gjor_A_post_beregninger(void);
void gjor_B_post_beregninger(void);

int main() {
	
	system("PAUSE");
	return 0;
}


float ArealSirkel(float radius = 0) {
	float svar;
	svar = radius*radius*PI;
	return svar;
}



/*Program 19 Areal av en sirkel

//Main

float r, Areal;
printf("Hva er radius til sirkelen? ");
scanf("%f", &r);
Areal = ArealSirkel(r);
printf("Arealet av sirkelen med radius %.2f er: %.2f\n", r, Areal);
system("PAUSE");


*/

/*Program 20 med funksjoner
float celsiusTilFahrenheit(float);
float celsiusTilKelvin(float);

int main(){
float Celsius;
char valg;
float resultTemp;
printf("Tast inn antall grader i Celsus: ");
scanf("%f", &Celsius);
printf("Skal dette gjøres om til Farenheit(F) eller Kelivn(K), velg ved stor forbokstav: ");
getchar();
valg = getchar();


if (valg == 'F') {
printf("%.2f* Celsius tilsvarer %.2f* Fahrenheit\r\n", Celsius, celsiusTilFahrenheit(Celsius));
}
else if (valg == 'K') {
printf("%.2f* Celsius tilsvarer %.2f* Kelvin\r\n", Celsius, celsiusTilKelvin(Celsius));
}
else {
printf("Feil, ukjent parameter verdi!");
}

system("PAUSE");
}

float celsiusTilKelvin(float Celsius) {
float kelvin = 273.15 + Celsius;
return kelvin;
}

float celsiusTilFahrenheit(float Celsius) {
float fahrenheit = 32 + (Celsius*9.0 / 5.0);
return fahrenheit;
}

*/

/*Program 21

void gjor_A_post_beregninger(void);
void gjor_B_post_beregninger(void);

int main() {

char valg;
printf("Hvilken posttype oensker du a sende med brevet med (A/B?): ");
valg = getchar();
getchar();

if (valg == 'A' || valg == 'a') {
gjor_A_post_beregninger();
}
else if (valg == 'B' || valg == 'b') {
gjor_B_post_beregninger();
}
else {
printf("Feil - Vi leverer ikke denne tjenesten!\n");
}



system("PAUSE");
return 0;
}

void gjor_A_post_beregninger(void) {
printf("Dette brevet skal sendes som A-post.\n");
float vekt;
printf("Vennligst legg inn pakke-vekt(gram): ");
scanf("%f", &vekt);
if (vekt <= 20) {
printf("Du maa betale 4,20kr.\n");
}
else if (vekt <= 50 && vekt > 20) {
printf("Du maa betale 6,30kr.\n");
}
}

void gjor_B_post_beregninger(void) {
printf("Dette brevet skal sendes som B-post.\n");
float vekt;
printf("Vennligst legg inn pakke-vekt(gram): ");
scanf("%f", &vekt);
if (vekt <= 20) {
printf("Du maa betale 3,60kr.\n");
}
else if (vekt <= 50 && vekt > 20) {
printf("Du maa betale 6,30kr.\n");
}
else {
printf("Vi leverer ikke denne tjenesten");
}

*/