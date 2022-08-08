#ifndef DIO_H_INCLUDED
#define DIO_H_INCLUDED
#define IN 0
#define OUT 1
#define LOW 0
#define HIGH 1

/*
 * pinNumber: is an input argument that describes the pin number in each port, 0, 1, 2, ... etc.
 * port: is an input argument that describes port character, 'A', 'B', ... etc.
 * direction: is an input argument that describes the data direction on a specific pin, IN or OUT
 */
 void DIO_init(uint8_t pinNumber, uint8_t port, uint8_t direction);

 /*
 * pinNumber: is an input argument that describes pin number in each port, 0, 1, 2, ... etc.
 * port: is an input argument that describes port character, 'A', 'B', ... etc.
 * value: is an input argument that describes the value on a specific pin, LOW or HIGH
 */
 void DIO_write(uint8_t pinNumber, uint8_t port, uint8_t value);

 /*
 * pinNumber: is an input argument that describes pin number in each port, 0, 1, 2, ... etc.
 * port: is an input argument that describes port character, 'A', 'B', ... etc.
 */
 void DIO_toggle(uint8_t pinNumber, uint8_t port);


#endif // DIO_H_INCLUDED
