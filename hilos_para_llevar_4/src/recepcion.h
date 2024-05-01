#ifndef RECEPCION_H_
#define RECEPCION_H_

#include <pthread.h>
#include <commons/log.h>
#include <commons/string.h>
#include "structs.h"

extern t_queue* cola_en_recepcion;
extern t_queue* cola_en_comedor;
extern t_queue* cola_comiendo;
extern t_log* logger;

int recepcion_main();
void ubicar_cliente();

void loguear_cola(t_queue* cola, char* nombre_cola);
void loggear_cola();

#endif /* RECEPCION_H_ */
