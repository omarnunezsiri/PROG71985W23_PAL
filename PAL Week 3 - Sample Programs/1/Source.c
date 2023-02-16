// PAL Week 3 - Program 1:
//					data types and variables
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-01-21		initial

#include <stdio.h>

int main(void)
{
	int protocolNumber = 1;    // indicates the protocol to be used (TCP, UDP, etc.)
	float latency = 19.5f;     // indicates the latency between client and server connection (in milliseconds)

	printf("Booting up...\n"); // use the printf() function
	printf("Connection Established through Protocol #%d (%f ms)\n", protocolNumber, latency);
	return 0;
}