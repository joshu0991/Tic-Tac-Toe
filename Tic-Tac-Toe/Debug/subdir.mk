################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Computer.cpp \
../Game.cpp \
../Tic_Tac_Toe.cpp 

OBJS += \
./Computer.o \
./Game.o \
./Tic_Tac_Toe.o 

CPP_DEPS += \
./Computer.d \
./Game.d \
./Tic_Tac_Toe.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


