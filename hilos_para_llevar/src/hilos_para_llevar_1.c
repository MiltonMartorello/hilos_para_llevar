#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <commons/log.h>

t_log* logger;

int una_funcion();

int main(void) {

	logger = log_create("log.log", "LOG", 1, LOG_LEVEL_INFO);

	log_info(logger, "Hola soy un logger");

	//pthread_t hilito;

	//pthread_create(&hilito, NULL, una_funcion, NULL);

	// falta algo
	return EXIT_SUCCESS;
}

int una_funcion() {
	log_info(logger, "Hola desde adentro del hilo");
	return 1;
}
