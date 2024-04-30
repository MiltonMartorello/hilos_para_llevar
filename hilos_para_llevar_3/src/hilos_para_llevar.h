#ifndef HILOS_PARA_LLEVAR_H_
#define HILOS_PARA_LLEVAR_H_

#include <pthread.h>
#include <commons/log.h>
#include <commons/string.h>
#include "structs.h"
#include "comedor.h"
#include "recepcion.h"

t_log* logger;
pthread_t hilo_recepcion;
pthread_t hilo_comedor;

#endif /* HILOS_PARA_LLEVAR_H_ */
