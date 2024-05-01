#include "recepcion.h"
#include <readline/readline.h>

int cid = 0;

int recepcion_main() {
	log_info(logger, "iniciado hilo recepción...");
	int choice;
	scanf("%d", &choice);
	while (0 < choice) {
		switch (choice) {
			case 1:
				log_info(logger, "Creando nuevo Cliente");
				char* leido;
				leido = readline("Nombre del cliente > ");
				t_cliente* cliente = cliente_create(leido);
				ubicar_cliente(cliente);
				break;
			case 2:
				log_info(logger, "Eliminando Cliente");
				break;
			case 3:
				log_info(logger, "Loggeando cola");
				loggear_cola();
			default:
				break;
		}
		scanf("%d", &choice);
	}

	return 1;
}

void ubicar_cliente(t_cliente* cliente) {
	queue_push(cola_en_recepcion, cliente);
}

t_cliente* cliente_create(char * nombre) {

	t_cliente* cliente = malloc (sizeof(t_cliente));
	cliente->nombre = nombre;
	cliente->cid = cid++;
	log_info(logger, "Se creo el cliente %d con nombre %s", cliente->cid, cliente->nombre);
	return cliente;
}

void cliente_destroy(t_cliente* cliente) {
	log_debug(logger, "Eliminando cliente %d", cliente->cid);
	free(cliente->nombre);
	free(cliente);
	log_debug(logger, "Cliente Cliente");
}

void loggear_cola() {
    printf("A qué número se corresponde cada cola?\n");
	printf("1. Cola en recepción\n");
	printf("2. Cola en comedor\n");
	printf("3. Cola comiendo\n");
	printf("Ingrese un número del 1 al 3: ");
	int choice;
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			// Loguear los elementos de la cola en recepción
			loguear_cola(cola_en_recepcion, "cola_en_recepcion");
			break;
		case 2:
			// Loguear los elementos de la cola en comedor
			loguear_cola(cola_en_comedor, "cola_en_comedor");
			break;
		case 3:
			// Loguear los elementos de la cola comiendo
			loguear_cola(cola_comiendo, "cola_comiendo");
			break;
		default:
			log_error(logger, "Opción no válida. Por favor, ingrese un número del 1 al 3.");
			break;
	}
}

void loguear_cola(t_queue* cola, char* nombre_cola) {
    t_cliente* cliente;
    t_list_iterator* iterator;

    // Loguear el nombre de la cola
    log_info(logger, "Elementos en la cola %s:", nombre_cola);

    // Crear un iterador para la lista
    iterator = list_iterator_create(cola->elements);

    // Iterar sobre la lista y loguear cada elemento
    while (list_iterator_has_next(iterator)) {
        cliente = list_iterator_next(iterator);
        log_info(logger, "ID: %d, Nombre: %s", cliente->cid, cliente->nombre);
    }

    // Destruir el iterador
    list_iterator_destroy(iterator);
}

