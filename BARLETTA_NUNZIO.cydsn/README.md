# ASSIGNMENT 2 

## Richieste
Le richieste per tale assignment sono esplicitate del README generale


## Schematico
Vi sono presenti i seguenti componenti:
- CY8CKIT-059 KIT: impostato con "visibile" solo sullo switch interno alla port P2[2] pin 64;
- PWM_Red: PWM per gestire il colore rosso del LED RGB con clock a 128HZ per avere periodo massimo di 2 secondi;
- PWM_Green: PWM per gestire il colore verde del LED RGB con clock a 128HZ per avere periodo massimo di 2 secondi;
- X2 Resistenze da 330 Ohm;
- X1 Resistenza interna dello switch/pulsante;
- Led_Red: Pin relativo al canale del rosso;
- Led_Green: Pin relativo al canale del verde;
- Debouncer_1: Debouncer per gestire l'antirimbalzo dello switch/pulsante;
- Button_Pin: Pin relativo allo switch/pulsante interno alla port P2[2] pin 64
- Red: rappresentazione del canale rosso del led RGB;
- Green: rappresentazione del canale verde del led RGB.


## Port/Pin
Si hanno le seguenti porte con i corrispettivi pin:
- P2[2]: porta relativa la switch/pulsante e corrisponente al pin 64
- P2[6]: porta relativa al canale del colore verde e corrispondente al pin 1
- P2[7]: porta relativa al canale del colore rosso e corrispondente al pin 2


## Firmware
Nei file di "Header" e di "Source" vi sono esplicitati già i dettagli reativi alle righe di codice presenti
