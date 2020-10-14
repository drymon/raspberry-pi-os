#include "mini_uart.h"

#define BAUD 115200 

void kernel_main(void)
{
	uart_init(BAUD);
	uart_send_string("Hello, world!\r\n");

	while (1) {
		uart_send(uart_recv());
	}
}
