#ifndef HILOS_PARA_LLEVAR_H_
#define HILOS_PARA_LLEVAR_H_

#include <commons/log.h>
#include <commons/string.h>
#include "structs.h"

t_log* logger;
pthread_t hilo_recepcion;

int cid = 0;

int recepcion_main();
t_cliente* cliente_create();
void cliente_destroy(t_cliente*);

#endif /* HILOS_PARA_LLEVAR_H_ */
