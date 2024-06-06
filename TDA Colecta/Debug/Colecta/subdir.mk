################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Colecta/Colecta.cpp \
../Colecta/main.cpp 

CPP_DEPS += \
./Colecta/Colecta.d \
./Colecta/main.d 

OBJS += \
./Colecta/Colecta.o \
./Colecta/main.o 


# Each subdirectory must supply rules for building sources it contributes
Colecta/%.o: ../Colecta/%.cpp Colecta/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Colecta

clean-Colecta:
	-$(RM) ./Colecta/Colecta.d ./Colecta/Colecta.o ./Colecta/main.d ./Colecta/main.o

.PHONY: clean-Colecta

