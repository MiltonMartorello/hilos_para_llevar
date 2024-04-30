#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "hilos_para_llevar.h"

int main(void) {

	logger = log_create("log.log", "LOG", 1, LOG_LEVEL_INFO);

	log_info(logger, "Hola soy un logger");

	pthread_create(&hilo_recepcion, NULL, recepcion_main, NULL);

	pthread_join(hilo_recepcion, NULL);
	return EXIT_SUCCESS;
}


int recepcion_main() {
	log_info(logger, "Hola desde adentro del hilo");

	t_cliente* cliente = cliente_create();
	log_info(logger, "Se creo el cliente %d", cliente->cid);
	t_cliente* cliente2 = cliente_create();
	log_info(logger, "Se creo el cliente %d", cliente2->cid);

	cliente_destroy(cliente);
	cliente_destroy(cliente2);
	return 1;
}

t_cliente* cliente_create() {

	t_cliente* cliente = malloc (sizeof(t_cliente));
	cliente->nombre = string_new();
	cliente->cid = cid++;
	return cliente;
}

void cliente_destroy(t_cliente* cliente) {
	log_debug(logger, "Eliminando cliente %d", cliente->cid);
	free(cliente->nombre);
	free(cliente);
	log_debug(logger, "Cliente Cliente");
}

