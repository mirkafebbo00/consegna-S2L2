#include <stdio.h>
// impostiamo la libreria 


int main(){

int number1; //ora con il comando int decidiamo i numeri, scrivendoli in generale
int number2;
int somma; //qui abbiamo cosa vogliamo che i numeri eseguano

printf("Buongiorno mondo,pronto a sommare?");//usiamo printf per stampare sul terminale le scritte che vogliamo

printf("scrivimi un numero");
scanf("%d",number1);//infine diciamo che uno dei due numeri li deve cercare nel primo int che abbiamo scritto
printf("perfetto, ora scrivi il secondo");
scanf("%D",number2);
somma = number1 + number2; //qui diciamo che la somma da fare è tra i due int dati in precedenza

printf("bene, il risultato è: ");



    
}