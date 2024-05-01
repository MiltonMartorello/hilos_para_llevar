#ifndef HILOS_PARA_LLEVAR_H_
#define HILOS_PARA_LLEVAR_H_

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <commons/log.h>
#include <commons/string.h>
#include "comedor.h"
#include "recepcion.h"

t_log* logger;
pthread_t hilo_recepcion;
pthread_t hilo_comedor;
extern t_queue* cola_en_recepcion;
extern t_queue* cola_en_comedor;
extern t_queue* cola_comiendo;

#endif /* HILOS_PARA_LLEVAR_H_ */
