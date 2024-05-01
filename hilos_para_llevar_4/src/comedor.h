#ifndef COMEDOR_H_
#define COMEDOR_H_

#include <pthread.h>
#include <commons/log.h>
#include <commons/string.h>
#include "structs.h"

extern t_queue* cola_en_recepcion;
extern t_queue* cola_en_comedor;
extern t_queue* cola_comiendo;
extern t_log* logger;

int comedor_main();

#endif /* COMEDOR_H_ */
