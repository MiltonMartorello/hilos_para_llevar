################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/comedor.c \
../src/hilos_para_llevar_3.c \
../src/recepcion.c 

C_DEPS += \
./src/comedor.d \
./src/hilos_para_llevar_3.d \
./src/recepcion.d 

OBJS += \
./src/comedor.o \
./src/hilos_para_llevar_3.o \
./src/recepcion.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/comedor.d ./src/comedor.o ./src/hilos_para_llevar_3.d ./src/hilos_para_llevar_3.o ./src/recepcion.d ./src/recepcion.o

.PHONY: clean-src

