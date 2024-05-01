#include "structs.h"

t_queue* cola_en_recepcion;
t_queue* cola_en_comedor;
t_queue* cola_comiendo;

void iniciar_estructuras() {

	cola_en_recepcion = queue_create();
	cola_en_comedor = queue_create();
	cola_comiendo = queue_create();

}

