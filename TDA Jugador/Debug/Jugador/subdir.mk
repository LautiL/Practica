################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Jugador/Jugador.cpp \
../Jugador/main.cpp 

CPP_DEPS += \
./Jugador/Jugador.d \
./Jugador/main.d 

OBJS += \
./Jugador/Jugador.o \
./Jugador/main.o 


# Each subdirectory must supply rules for building sources it contributes
Jugador/%.o: ../Jugador/%.cpp Jugador/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Jugador

clean-Jugador:
	-$(RM) ./Jugador/Jugador.d ./Jugador/Jugador.o ./Jugador/main.d ./Jugador/main.o

.PHONY: clean-Jugador

