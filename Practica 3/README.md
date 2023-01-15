# Luces del Auto Increíble
Utilizamos salidas del microcontrolador ATmega328P para activar los LEDS y los puertos de entrada para el potenciómetro y switch. En la secuencia programada. Se utilizó la tarjeta Arduino nano para acceder de forma sencilla a los puertos del micro, utilizando el reloj de 16MHz. Para el programa en C, se tomaron en cuenta los ocho LEDs como un número de ocho bits, por lo que cada configuración de encendido y apagado se pudo representar como un número hexadecimal. Se crearon dos listas de números hexadecimales, una que representara el movimiento de un lado al otro, y otra para la configuración de dos luces chocando una con la otra. Posteriormente se configuraron los seis pines más significativos del puerto D y los dos pines menos significativos del puerto B como output. Esto porque los dos pines menos significativos del puerto D están reservados para Tx y Rx.Finalmente, se configuró el puerto C0 como output en pull-up, para recibir la señal del switch. Dentro del loop principal, se hizo un if/else utilizando la entrada del switch para seleccionar entre las dos secuencias. Para cada uno de los casos, se utilizó un ciclo for para recorrer las listas creadas anteriormente y enviar señales de encendido a los LEDs correspondientes para cada etapa. Antes del reinicio del ciclo, se revisa si el switch ha cambiado de valor; en caso de ser así, se sale del ciclo for y se inicia la secuencia contraria. Por último, se hace un delay según la entrada de voltaje proveniente del potenciómetro para controlar la velocidad de la animación.

## Archivos
* luces_auto.jpeg: Diagrama eléctrico del circuito.
* luces_auto.c: Listado del programa en C.
* implementacion.mp4: Breve demostración del correcto funcionamiento del sistema, implementado físicamente con los componentes electrónicos necesarios.

# Amazing Car Lights
We use outputs from the ATmega328P microcontroller to drive the LEDS and the input ports for the potentiometer and switch. In the programmed sequence. The Arduino nano was used to easily access the ports of the micro, using the 16MHz clock. For the C program, the eight LEDs were counted as an eight-bit number, so each on and off setting could be represented as a hexadecimal number. Two lists of hexadecimal numbers were created, one representing movement from one side to the other, and one for the configuration of two lights colliding with each other. Subsequently, the six most significant pins of port D and the two least significant pins of port B were configured as output. This is because the two least significant pins of port D are reserved for Tx and Rx. Finally, port C0 was configured as a pull-up output, to receive the signal from the switch. Inside the main loop, an if/else was done using the switch input to select between the two sequences. For each of the cases, a for loop was used to go through the previously created lists and send power signals to the corresponding LEDs for each stage. Before the restart of the cycle, it is checked if the switch has changed its value; if so, the for loop is exited and the opposite sequence is started. Finally, a delay is made according to the voltage input from the potentiometer to control the speed of the animation.

## Files
* luces_auto.jpeg: Electrical Circuit Diagram.
* luces_auto.c: Program listing in C.
* implementacion.mp4: Brief demonstration of the proper functioning of the system, physically implemented with the necessary electronic components.