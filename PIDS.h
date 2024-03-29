﻿#ifndef PIDS_h
#define PIDS_h

//Service 1: sensor data

#define SUPPORTED_PIDS_01_20 0x0 //4 bytes
#define MIL_STATUS 0x1 //4 bytes
#define FREEZE_DTC 0x2 //2 bytes
#define FUEL_SYS_STATUS 0x3 //2 bytes
#define CALCULATED_ENGINE_LOAD 0x4 //1 byte
#define ECT_1 0x5 //1 byte
#define STFT_BANK_1 0x6 //1 byte
#define LTFT_BANK_1 0x7 //1 byte
#define STFT_BANK_2 0x8 //1 byte
#define LTFT_BANK_2 0x9 //1 byte
#define FUEL_PRESSURE 0x0A //1 byte
#define MAP 0x0B //1 byte
#define RPM 0x0C //2 bytes
#define VSS 0x0D //1 byte
#define TIMING 0x0E //1 byte
#define IAT_1 0x0F //1 byte
#define MAF_1 0x10 //2 bytes
#define TPS 0x11 //1 byte
#define COMMANDED_SECONDARY_AIR_STATUS 0x12 //1 byte
#define O2_SENSORS_PRESENT_2_BANKS 0x13 //1 byte
#define O2_SENSOR_TRIM_1 0x14 //2 bytes
#define O2_SENSOR_TRIM_2 0x15 //2 bytes
#define O2_SENSOR_TRIM_3 0x16 //2 bytes
#define O2_SENSOR_TRIM_4 0x17 //2 bytes
#define O2_SENSOR_TRIM_5 0x18 //2 bytes
#define O2_SENSOR_TRIM_6 0x19 //2 bytes
#define O2_SENSOR_TRIM_7 0x1A //2 bytes
#define O2_SENSOR_TRIM_8 0x1B //2 bytes
#define OBD_STANDARD 0x1C //1 byte
#define O2_SENSORS_PRESENT_4_BANKS 0x1D //1 byte
#define AUX_INPUT_STATUS 0x1E //1 byte
#define ENGINE_UPTIME 0x1F //2 bytes
#define SUPPORTED_PIDS_21_40 0x20 //4 bytes
#define DISTANCE_WITH_MIL_ON 0x21 //2 bytes
#define FUEL_RAIL_RELATIVE_PRESSURE 0x22 //2 bytes
#define FUEL_RAIL_PRESSURE_DI 0x23 //2 bytes
#define O2_SENSOR_LAMBDA_1_1 0x24 //4 bytes
#define O2_SENSOR_LAMBDA_2_1 0x25 //4 bytes
#define O2_SENSOR_LAMBDA_3_1 0x26 //4 bytes
#define O2_SENSOR_LAMBDA_4_1 0x27 //4 bytes
#define O2_SENSOR_LAMBDA_5_1 0x28 //4 bytes
#define O2_SENSOR_LAMBDA_6_1 0x29 //4 bytes
#define O2_SENSOR_LAMBDA_7_1 0x2A //4 bytes
#define O2_SENSOR_LAMBDA_8_1 0x2B //4 bytes
#define COMMANDED_EGR 0x2C //1 byte
#define EGR_ERROR 0x2D //1 byte
#define COMMANDED_EVAP_PURGE 0x2E //1 byte
#define FUEL_TANK_LEVEL 0x2F //1 byte
#define WARMUPS_SINCE_CODES_CLEARED 0x30 //1 byte
#define DISTANCE_WITH_CODES_CLEARED 0x31 //2 bytes
#define EVAP_PRESSURE_1 0x32 //2 bytes
#define BAROMETER 0x33 //1 byte
#define O2_SENSOR_LAMBDA_1_2 0x34 //4 bytes
#define O2_SENSOR_LAMBDA_2_2 0x35 //4 bytes
#define O2_SENSOR_LAMBDA_3_2 0x36 //4 bytes
#define O2_SENSOR_LAMBDA_4_2 0x37 //4 bytes
#define O2_SENSOR_LAMBDA_5_2 0x38 //4 bytes
#define O2_SENSOR_LAMBDA_6_2 0x39 //4 bytes
#define O2_SENSOR_LAMBDA_7_2 0x3A //4 bytes
#define O2_SENSOR_LAMBDA_8_2 0x3B //4 bytes
#define CAT_TEMP_BANK_1_SENSOR_1 0x3C //2 bytes
#define CAT_TEMP_BANK_2_SENSOR_1 0x3D //2 bytes
#define CAT_TEMP_BANK_1_SENSOR_2 0x3E //2 bytes
#define CAT_TEMP_BANK_2_SENSOR_2 0x3F //2 bytes
#define SUPPORTED_PIDS_41_60 0x40 //4 bytes
#define MONITOR_STATUS_THIS_DRIVE_CYCLE 0x41 //4 bytes
#define ECU_VOLTAGE 0x42 //2 bytes
#define ABSOLUTE_ENGINE_LOAD 0x43 //2 bytes
#define COMMANDED_LAMBDA 0x44 //2 bytes
#define RELATIVE_THROTTLE_POSITION 0x45 //1 byte
#define AMBIENT_TEMP 0x46 //1 byte
#define ABSOLUTE_THROTTLE_POSITION_B 0x47 //1 byte
#define ABSOLUTE_THROTTLE_POSITION_C 0x48 //1 byte
#define ACCELERATOR_PEDAL_POSITION_D 0x49 //1 byte
#define ACCELERATOR_PEDAL_POSITION_E 0x4A //1 byte
#define ACCELERATOR_PEDAL_POSITION_F 0x4B //1 byte
#define COMMANDED_THROTTLE 0x4C //1 byte
#define UPTIME_WITH_MIL_ON 0x4D //2 bytes
#define TIME_SINCE_DTCS_CLEARED 0x4E //2 bytes
#define AIR_FUEL_MAXIMUMS 0x4F //4 bytes
#define AIR_FUEL_MINIMUMS 0x50 //4 bytes
#define FUEL_TYPE 0x51 //1 byte
#define ETHANOL_LEVEL 0x52 //1 byte
#define ABSOLUTE_EVAP_PRESSURE 0x53 //2 bytes
#define EVAP_PRESSURE_2 0x54 //2 bytes
#define SHORTTERMSECONDARYO2_SENSORTRIMABANK1BBANK3 0x55 //2 bytes
#define LONGTERMSECONDARYO2_SENSORTRIMABANK1BBANK3 0x56 //2 bytes
#define SHORTTERMSECONDARYO2_SENSORTRIMABANK2BBANK4 0x57 //2 bytes
#define LONGTERMSECONDARYO2_SENSORTRIMABANK2BBANK4 0x58 //2 bytes
#define FUEL_RAIL_ABSOLUTE_PRESSURE 0x59 //2 bytes
#define RELATIVE_TPS 0x5A //1 byte
#define HYBRID_BATTERY_REMAINING_LIFE 0x5B //1 byte
#define ENGINE_OIL_TEMP 0x5C //1 byte
#define FUEL_INJECTOR_TIMING 0x5D //2 bytes
#define FUEL_RATE_HOURS 0x5E //2 bytes
#define DESIGNED_EMISSION_REQUIREMENTS 0x5F //1 byte
#define SUPPORTED_PIDS_61_80 0x60 //4 bytes
#define DEMANDED_TORQUE 0x61 //1 byte
#define ACTUAL_TORQUE 0x62 //1 byte
#define REFERENCE_TORQUE 0x63 //2 bytes
#define TORQUE_DATA 0x64 //5 bytes
#define AUX_IO_SUPPORTED 0x65 //2 bytes
#define MAF_2 0x66 //5 bytes
#define ECT_2 0x67 //3 bytes
#define IAT_2 0x68 //3 bytes
#define EGR_DATA 0x69 //7 bytes
#define DIESEL_AIR_FUEL_DATA 0x6A //5 bytes
#define EGR_GAS_TEMP 0x6B //5 bytes
#define THROTTLE_DATA 0x6C //5 bytes
#define FUEL_DATA 0x6D //11 bytes
#define INJECTOR_DATA 0x6E //9 bytes
#define TURBO_INLET_PRESSURE 0x6F //3 bytes
#define BOOST_PRESSURE_CONTROL_DATA 0x70 //10 bytes
#define VGT_CONTROL_DATA 0x71 //6 bytes
#define WASTEGATE_CONTROL 0x72 //5 bytes
#define EXHAUST_PRESSURE 0x73 //5 bytes
#define TURBO_RPM 0x74 //5 bytes
#define TURBO_TEMP_1 0x75 //7 bytes
#define TURBO_TEMP_2 0x76 //7 bytes
#define INTERCOOLER_TEMP 0x77 //5 bytes
#define EGT_BANK_1 0x78 //9 bytes
#define EGT_BANK_2 0x79 //9 bytes
#define DPF_DIFFERENTIAL_PRESSURE 0x7A //7 bytes
#define DPF_DATA 0x7B //7 bytes
#define DPF_TEMP 0x7C //9 bytes
#define NOX_NTE_STATUS 0x7D //1 byte
#define PM_NTE_STATUS 0x7E //1 byte
#define ENGINE_UPTIME_TOTAL 0x7F //13 bytes
#define SUPPORTED_PIDS_81_A0 0x80 //4 bytes
#define AECD_RUNTIME_1 0x81 //41 byte
#define AECD_RUNTIME_2 0x82 //41 byte
#define NOX_SENSOR_DATA 0x83 //9 bytes
#define MANIFOLD_SURFACE_TEMP 0x84 //1 byte
#define NOX_REAGENT_SYSTEM 0x85 //10 bytes
#define PM_SENSOR 0x86 //5 bytes
#define INTAKE_ABSOLUTE_PRESSURE 0x87 //5 bytes
#define SCR_INDUCE_SYSTEM 0x88 //13 bytes
#define AECD_RUNTIME_11_15 0x89 //41 byte
#define AECD_RUNTIME_16_20 0x8A //41 byte
#define DIESEL_AFTERTREATMENT 0x8B //7 bytes
#define O2_SENSOR_WB 0x8C //17 bytes
#define THROTTLE_POSITION_G 0x8D //1 byte
#define ENGINE_FRICTION_TORQUE 0x8E //1 byte
#define PM_SENSOR_BANK_1_2 0x8F //7 bytes
#define WWH_OBD_INFO_1 0x90 //3 bytes
#define WWH_OBD_INFO_2 0x91 //5 bytes
#define FUEL_SYSTEM_CONTROL 0x92 //2 bytes
#define WWH_OBD_COUNTER_SUPPORT 0x93 //3 bytes
#define NOX_WARNING_AND_INDUCEMENT_SYSTEM 0x94 //12 bytes
#define EGT_SENSOR_1 0x98 //9 bytes
#define EGT_SENSOR_2 0x99 //9 bytes
#define HYBRID_BATTERY_VOLTAGE 0x9A //6 bytes
#define DEF_SENSOR_DATA 0x9B //4 bytes
#define O2_SENSOR_DATA 0x9C //17 bytes
#define FUEL_RATE_SECONDS 0x9D //4 bytes
#define EXHAUST_FLOW_RATE 0x9E //2 bytes
#define FUEL_SYSTEM_PERCENTAGE_USED 0x9F //9 bytes
#define SUPPORTED_PIDS_A1_C0 0xA0 //4 bytes
#define NOX_CORRECTED_DATA 0xA1 //9 bytes
#define CYLINDER_FUEL_RATE 0xA2 //2 bytes
#define EVAP_PRESSURE_3 0xA3 //9 bytes
#define TRANSMISSION_ACTUAL_GEAR 0xA4 //4 bytes
#define COMMANDED_DEF_DOSING 0xA5 //4 bytes
#define ODOMETER 0xA6 //4 bytes
#define NOX_CONCENTRATION_SENSORS_3_4 0xA7 //4 bytes
#define NOX_CONCENTRATION_CORRECTED_SENSORS_3_4 0xA8 //4 bytes
#define ABS_DISABLED 0xA9 //4 bytes
#define SUPPORTED_PIDS_C1_E0 0xC0 //4 bytes

//Service 2: freeze frame data
//same as service 1

//Service 3: DTCs
//no PID

//Service 4: clear DTCs
//no PID

//Service 9: Vehicle Info

#define SUPPORTED_INFO_PIDS 0x00 //4 bytes
#define VIN_MESSAGE_COUNT 0x01 //1 byte
#define VIN 0x02 //17 bytes
#define CALIBRATION_ID_MESSAGE_COUNT 0X03 //1 byte
#define CALIBRATION_ID 0x04 //16 bytes
#define CVN_MESSAGE_COUNT 0x05 //1 byte
#define CVN 0x06 //4 bytes
#define PERFORMANCE_MESSAGE_COUNT 0x07 //1 byte
#define GAS_PERFORMANCE 0x08 //4 bytes
#define ECU_NAME_MESSAGE_COUNT 0x09 //1 byte
#define ECU_NAME 0x0A  //20 bytes
#define DIESEL_PERFORMANCE 0x0B //4 bytes

#endif