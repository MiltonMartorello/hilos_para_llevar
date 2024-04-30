################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := hilos_para_llevar
BUILD_ARTIFACT_EXTENSION :=
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: hilos_para_llevar

# Tool invocations
hilos_para_llevar: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	gcc  -o "hilos_para_llevar" $(OBJS) $(USER_OBJS) $(LIBS) -lcommons
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) hilos_para_llevar
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
