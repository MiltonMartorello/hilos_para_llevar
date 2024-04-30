#include "recepcion.h"

int cid = 0;

int recepcion_main() {
	log_info(logger, "iniciado hilo recepción...");

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
