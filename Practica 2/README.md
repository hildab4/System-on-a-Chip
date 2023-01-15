# Diseño de sistema de Memoria
El objetivo de la práctica es mostrar la matrícula de los tres integrantes del equipo en el display al acceder a las distintas localidades de la memoria. Para esto se debía incluir un oscilador (LM555) con periodo de 1 segundo, se calculó la capacitancia del capacitor 1 con dos resistencias de 10k ohms. El contador utiliza la salida del oscilador como entrada de reloj y recorre las primeras 32 localidades (0 a 31), ya que sólo se recorren 32, se utilizan 5 bits para llegar a este número. Estas 5 salidas del contador entran a la memoria en el rango de A0 a A4, con estos datos se busca la localidad y se extrae el dato guardado. Por medio de una conexión con resistencias de 270 ohms se mandan los datos al display de cátodo común para desplegar dígito por dígito de las matrículas. El archivo bin se configuró para no mostrar dígitos por dos periodos entre cada matrícula, esto para poder diferenciar cada una con mayor facilidad.

## Archivos
* matriculas.jpeg: Diagrama eléctrico del circuito.
* matriculas.xlsx: En este archivo se encuentra la representación en hexadecimal de tres matrículas diferentes, las cuales se desplegarán en el display de 7 segmentos.
* matriculas.bin: Archivo binario para programar la memoria (28C256).
* explicacion.mp4: Explicación breve sobre el proceso que se llevó a cabo para realizar la práctica para desplegar las tres matrículas.
* implementacion.mp4: Breve demostración del correcto funcionamiento del sistema, implementado físicamente con los componentes electrónicos necesarios.

# Memory System Design
The objective of the practice is to show the license plate of the three members of the team on the display when accessing the different locations of the memory. For this, an oscillator (LM555) with a period of 1 second should be included, the capacitance of capacitor 1 was calculated with two 10k ohm resistors. The counter uses the oscillator output as a clock input and iterates through the first 32 locations (0 to 31), since only 32 are traversed, 5 bits are used to arrive at this number. These 5 counter outputs enter the memory in the range from A0 to A4, with these data the location is searched and the saved data is extracted. Through a connection with 270 ohm resistors, the data is sent to the common cathode display to display the license plates digit by digit. The bin file was configured to not show digits for two periods between each license plate, this to be able to differentiate each one more easily.

## Files
* cuenta1s0s.jpeg: Electrical Circuit Diagram.
* Cuentas.xlsx: This file contains the hexadecimal representation of three different student ID's, which will be displayed on the 7-segment display.
* datos.bin: Binary file to program memory (28C256).
* explicacion.mp4: Brief explanation of the process to complete the practice to display the three student ID's.
* implementacion.mp4: Brief demonstration of the proper functioning of the system, physically implemented with the necessary electronic components.