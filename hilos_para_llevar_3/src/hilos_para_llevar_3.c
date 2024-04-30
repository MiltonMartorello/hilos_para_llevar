#include <stdio.h>
#include <stdlib.h>
#include "hilos_para_llevar.h"

int main(void) {

	logger = log_create("log.log", "LOG", 1, LOG_LEVEL_INFO);

	log_info(logger, "Hola soy un logger");

	pthread_create(&hilo_recepcion, NULL, recepcion_main, NULL);
	pthread_create(&hilo_comedor, NULL, comedor_main, NULL);

	pthread_join(hilo_recepcion, NULL);
	pthread_join(hilo_comedor, NULL);
	return EXIT_SUCCESS;
}
