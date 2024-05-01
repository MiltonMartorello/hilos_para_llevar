#ifndef STRUCTS_H_
#define STRUCTS_H_

#include <commons/collections/queue.h>

typedef struct{
	int cid;
	char* nombre;
}t_cliente;

extern t_queue* cola_en_recepcion;
extern t_queue* cola_en_comedor;
extern t_queue* cola_comiendo;

t_cliente* cliente_create(char* );
void cliente_destroy(t_cliente*);

#endif /* STRUCTS_H_ */
