
# ASSIGNMENT 2 

## Richieste
Le richieste per tale assignment sono esplicitate nel README generale.


## Schematico
Vi sono presenti i seguenti componenti:
- CY8CKIT-059 KIT: impostato con "visibile" solo sullo switch interno alla port P2[2] pin 64;
- PWM_Red: PWM per gestire il colore rosso del LED RGB, con clock a 128HZ per avere periodo massimo di 2 secondi;
- PWM_Green: PWM per gestire il colore verde del LED RGB, con clock a 128HZ per avere periodo massimo di 2 secondi;
- X2 Resistenze da 330 Ohm;
- X1 Resistenza interna al CY8CKIT-059 KIT legata allo switch/pulsante;
- Led_Red: Pin relativo al canale del rosso;
- Led_Green: Pin relativo al canale del verde;
- Debouncer_1: Debouncer per gestire l'antirimbalzo dello switch/pulsante;
- Button_Pin: Pin relativo allo switch/pulsante presente in CY8CKIT-059 KIT;
- Red: rappresentazione del canale rosso del led RGB;
- Green: rappresentazione del canale verde del led RGB.


## Port/Pin
Si hanno le seguenti porte con i corrispettivi pin:
- P2[2]: porta relativa la switch/pulsante e corrisponente al pin 64
- P2[6]: porta relativa al canale del colore verde e corrispondente al pin 1
- P2[7]: porta relativa al canale del colore rosso e corrispondente al pin 2


## Firmware
Nei file di "Header" e di "Source" vi sono esplicitati già i dettagli reativi alle righe di codice presenti


## Nota sulla programmazione dell'elaborato
Il led RGB assegantoci per l'assignment è un led ad anodo comune. Le onde quadre date dall'assignment sono state interpretate
come i pattern da fornire ai canali del rosso e del verde. Pertanto, in presenza di un fronte d'onda in salita nello schematico,
il colore sarà espresso e rimarrà tale fino a quando non si presenterà un fronte d'onda opposto. 
Esempio: nello stato 1 assegnato dal assignment per entrambi i colori (rosso e verde), l'onda quadra dello schematico è tutta 
in "Time_on", e quindi il led sarà acceso e di colore giallo. Se avessimo interepreato le onde quadre fornite dal assignemtent
come onde da creare e non come pattern, il led nello stato 1 del assignment sarebbe stato completamente spento.

