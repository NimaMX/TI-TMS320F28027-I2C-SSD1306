################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1011/ccs/tools/compiler/ti-cgt-c2000_20.2.1.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./src/bsp/fonts.obj" \
"./src/bsp/ssd1306.obj" \
"./src/drv/drv_base.obj" \
"./src/drv/drv_i2c.obj" \
"./src/drv/drv_led.obj" \
"./src/main.obj" \
"../F2802x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \
-l"C:/ti/c2000/C2000Ware_3_03_00_00/device_support/f2802x/common/ccs/Debug/driverlib.lib" \
-l"C:/ti/c2000/C2000Ware_3_03_00_00/device_support/f2802x/common/cmd/F2802x_generic_flash.cmd" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include src/bsp/subdir_vars.mk
-include src/drv/subdir_vars.mk
-include src/subdir_vars.mk
-include subdir_rules.mk
-include src/bsp/subdir_rules.mk
-include src/drv/subdir_rules.mk
-include src/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
TI-TMS320F28027-I2C-SSD1306.out \

EXE_OUTPUTS__QUOTED += \
"TI-TMS320F28027-I2C-SSD1306.out" \

BIN_OUTPUTS += \
TI-TMS320F28027-I2C-SSD1306.hex \

BIN_OUTPUTS__QUOTED += \
"TI-TMS320F28027-I2C-SSD1306.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "TI-TMS320F28027-I2C-SSD1306.out"

# Tool invocations
TI-TMS320F28027-I2C-SSD1306.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccs1011/ccs/tools/compiler/ti-cgt-c2000_20.2.1.LTS/bin/cl2000" -v28 -ml -mt --advice:performance=all --define=_DEBUG --define=_FLASH --define=LARGE_MODEL -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi -z -m"TI-TMS320F28027-I2C-SSD1306.map" --stack_size=0x300 --warn_sections -i"C:/ti/ccs1011/ccs/tools/compiler/ti-cgt-c2000_20.2.1.LTS/lib" -i"C:/ti/ccs1011/ccs/tools/compiler/ti-cgt-c2000_20.2.1.LTS/include" -i"C:/ti/c2000/C2000Ware_3_03_00_00/device_support/f2802x/headers/cmd" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="TI-TMS320F28027-I2C-SSD1306_linkInfo.xml" --rom_model -o "TI-TMS320F28027-I2C-SSD1306.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

TI-TMS320F28027-I2C-SSD1306.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccs1011/ccs/tools/compiler/ti-cgt-c2000_20.2.1.LTS/bin/hex2000"  -o "TI-TMS320F28027-I2C-SSD1306.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "src\bsp\fonts.obj" "src\bsp\ssd1306.obj" "src\drv\drv_base.obj" "src\drv\drv_i2c.obj" "src\drv\drv_led.obj" "src\main.obj" 
	-$(RM) "src\bsp\fonts.d" "src\bsp\ssd1306.d" "src\drv\drv_base.d" "src\drv\drv_i2c.d" "src\drv\drv_led.d" "src\main.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

