#ifndef _wmidevs_h_
#define _wmidevs_h_

// CLEVO_EVENT - CLEVO_EVENT
// CLEVO event generated ULong data
#define CLEVO_EVENTGuid \
    { 0xabbc0f6b,0x8ea1,0x11d1, { 0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(CLEVO_EVENT_GUID, \
            0xabbc0f6b,0x8ea1,0x11d1,0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00);
#endif


typedef struct _CLEVO_EVENT
{
    // ULong Data
    ULONG ULong;
    #define CLEVO_EVENT_ULong_SIZE sizeof(ULONG)
    #define CLEVO_EVENT_ULong_ID 1

} CLEVO_EVENT, *PCLEVO_EVENT;

#define CLEVO_EVENT_SIZE (FIELD_OFFSET(CLEVO_EVENT, ULong) + CLEVO_EVENT_ULong_SIZE)

// CLEVO_EMAIL - CLEVO_EMAIL
// CLEVO event generated ULong data for email
#define CLEVO_EMAILGuid \
    { 0xabbc0f6c,0x8ea1,0x11d1, { 0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(CLEVO_EMAIL_GUID, \
            0xabbc0f6c,0x8ea1,0x11d1,0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00);
#endif


typedef struct _CLEVO_EMAIL
{
    // ULong Data
    ULONG ULong;
    #define CLEVO_EMAIL_ULong_SIZE sizeof(ULONG)
    #define CLEVO_EMAIL_ULong_ID 1

} CLEVO_EMAIL, *PCLEVO_EMAIL;

#define CLEVO_EMAIL_SIZE (FIELD_OFFSET(CLEVO_EMAIL, ULong) + CLEVO_EMAIL_ULong_SIZE)

// AcpiTest_EventULong - AcpiTest_EventULong
// CLEVO event generated ULong data
#define AcpiTest_EventULongGuid \
    { 0xabbc0f6c,0x8ea1,0x11d1, { 0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(AcpiTest_EventULong_GUID, \
            0xabbc0f6c,0x8ea1,0x11d1,0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00);
#endif


typedef struct _AcpiTest_EventULong
{
    // ULong Data
    ULONG ULong;
    #define AcpiTest_EventULong_ULong_SIZE sizeof(ULONG)
    #define AcpiTest_EventULong_ULong_ID 1

} AcpiTest_EventULong, *PAcpiTest_EventULong;

#define AcpiTest_EventULong_SIZE (FIELD_OFFSET(AcpiTest_EventULong, ULong) + AcpiTest_EventULong_ULong_SIZE)

// CLEVO_GET - CLEVO_GET
// Class used to operate methods on a ULong
#define CLEVO_GETGuid \
    { 0xabbc0f6d,0x8ea1,0x11d1, { 0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(CLEVO_GET_GUID, \
            0xabbc0f6d,0x8ea1,0x11d1,0x00,0xa0,0xc9,0x06,0x29,0x10,0x00,0x00);
#endif

//
// Method id definitions for CLEVO_GET
#define GetEvent     1
typedef struct _GetEvent_OUT
{
    // EVENT BYTE
    ULONG Data;
    #define GetEvent_OUT_Data_SIZE sizeof(ULONG)
    #define GetEvent_OUT_Data_ID 1

} GetEvent_OUT, *PGetEvent_OUT;

#define GetEvent_OUT_SIZE (FIELD_OFFSET(GetEvent_OUT, Data) + GetEvent_OUT_Data_SIZE)

#define GetCPUtemp     2
typedef struct _GetCPUtemp_OUT
{
    // Get CPU die temperature
    USHORT Data;
    #define GetCPUtemp_OUT_Data_SIZE sizeof(USHORT)
    #define GetCPUtemp_OUT_Data_ID 1

} GetCPUtemp_OUT, *PGetCPUtemp_OUT;

#define GetCPUtemp_OUT_SIZE (FIELD_OFFSET(GetCPUtemp_OUT, Data) + GetCPUtemp_OUT_Data_SIZE)

#define GetCPUtempThermalIC     3
typedef struct _GetCPUtempThermalIC_OUT
{
    // Get CPU die temperature Thermal IC
    USHORT Data;
    #define GetCPUtempThermalIC_OUT_Data_SIZE sizeof(USHORT)
    #define GetCPUtempThermalIC_OUT_Data_ID 1

} GetCPUtempThermalIC_OUT, *PGetCPUtempThermalIC_OUT;

#define GetCPUtempThermalIC_OUT_SIZE (FIELD_OFFSET(GetCPUtempThermalIC_OUT, Data) + GetCPUtempThermalIC_OUT_Data_SIZE)

#define GetCPUFANState     4
typedef struct _GetCPUFANState_OUT
{
    // Get CPU die temperature Thermal IC
    USHORT Data;
    #define GetCPUFANState_OUT_Data_SIZE sizeof(USHORT)
    #define GetCPUFANState_OUT_Data_ID 1

} GetCPUFANState_OUT, *PGetCPUFANState_OUT;

#define GetCPUFANState_OUT_SIZE (FIELD_OFFSET(GetCPUFANState_OUT, Data) + GetCPUFANState_OUT_Data_SIZE)

#define GetRadioStateForWirless     5
typedef struct _GetRadioStateForWirless_OUT
{
    // Get Radio staue for wirless
    USHORT Data;
    #define GetRadioStateForWirless_OUT_Data_SIZE sizeof(USHORT)
    #define GetRadioStateForWirless_OUT_Data_ID 1

} GetRadioStateForWirless_OUT, *PGetRadioStateForWirless_OUT;

#define GetRadioStateForWirless_OUT_SIZE (FIELD_OFFSET(GetRadioStateForWirless_OUT, Data) + GetRadioStateForWirless_OUT_Data_SIZE)

#define GetPowerStateForCamera     6
typedef struct _GetPowerStateForCamera_OUT
{
    // Get Power staue for camera
    USHORT Data;
    #define GetPowerStateForCamera_OUT_Data_SIZE sizeof(USHORT)
    #define GetPowerStateForCamera_OUT_Data_ID 1

} GetPowerStateForCamera_OUT, *PGetPowerStateForCamera_OUT;

#define GetPowerStateForCamera_OUT_SIZE (FIELD_OFFSET(GetPowerStateForCamera_OUT, Data) + GetPowerStateForCamera_OUT_Data_SIZE)

#define GetPowerStateForBluetooth     7
typedef struct _GetPowerStateForBluetooth_OUT
{
    // Get Power staue for bluetooth
    USHORT Data;
    #define GetPowerStateForBluetooth_OUT_Data_SIZE sizeof(USHORT)
    #define GetPowerStateForBluetooth_OUT_Data_ID 1

} GetPowerStateForBluetooth_OUT, *PGetPowerStateForBluetooth_OUT;

#define GetPowerStateForBluetooth_OUT_SIZE (FIELD_OFFSET(GetPowerStateForBluetooth_OUT, Data) + GetPowerStateForBluetooth_OUT_Data_SIZE)

#define GetSRSState     8
typedef struct _GetSRSState_OUT
{
    // Get SRS state
    USHORT Data;
    #define GetSRSState_OUT_Data_SIZE sizeof(USHORT)
    #define GetSRSState_OUT_Data_ID 1

} GetSRSState_OUT, *PGetSRSState_OUT;

#define GetSRSState_OUT_SIZE (FIELD_OFFSET(GetSRSState_OUT, Data) + GetSRSState_OUT_Data_SIZE)

#define GetTouchPadState     9
typedef struct _GetTouchPadState_OUT
{
    // Get TouchPad state
    USHORT Data;
    #define GetTouchPadState_OUT_Data_SIZE sizeof(USHORT)
    #define GetTouchPadState_OUT_Data_ID 1

} GetTouchPadState_OUT, *PGetTouchPadState_OUT;

#define GetTouchPadState_OUT_SIZE (FIELD_OFFSET(GetTouchPadState_OUT, Data) + GetTouchPadState_OUT_Data_SIZE)

#define GetPowerStateFor3G     10
typedef struct _GetPowerStateFor3G_OUT
{
    // Get Power staue for 3G
    USHORT Data;
    #define GetPowerStateFor3G_OUT_Data_SIZE sizeof(USHORT)
    #define GetPowerStateFor3G_OUT_Data_ID 1

} GetPowerStateFor3G_OUT, *PGetPowerStateFor3G_OUT;

#define GetPowerStateFor3G_OUT_SIZE (FIELD_OFFSET(GetPowerStateFor3G_OUT, Data) + GetPowerStateFor3G_OUT_Data_SIZE)

#define GetPowerStateForODD     11
typedef struct _GetPowerStateForODD_OUT
{
    // Get Power staue for ODD
    USHORT Data;
    #define GetPowerStateForODD_OUT_Data_SIZE sizeof(USHORT)
    #define GetPowerStateForODD_OUT_Data_ID 1

} GetPowerStateForODD_OUT, *PGetPowerStateForODD_OUT;

#define GetPowerStateForODD_OUT_SIZE (FIELD_OFFSET(GetPowerStateForODD_OUT, Data) + GetPowerStateForODD_OUT_Data_SIZE)

#define GetVGA1temp     12
typedef struct _GetVGA1temp_OUT
{
    // Get VGA1 die temperature 
    USHORT Data;
    #define GetVGA1temp_OUT_Data_SIZE sizeof(USHORT)
    #define GetVGA1temp_OUT_Data_ID 1

} GetVGA1temp_OUT, *PGetVGA1temp_OUT;

#define GetVGA1temp_OUT_SIZE (FIELD_OFFSET(GetVGA1temp_OUT, Data) + GetVGA1temp_OUT_Data_SIZE)

#define GetVGA1tempThermalIC     13
typedef struct _GetVGA1tempThermalIC_OUT
{
    // Get VGA1 die temperature Thermal IC
    USHORT Data;
    #define GetVGA1tempThermalIC_OUT_Data_SIZE sizeof(USHORT)
    #define GetVGA1tempThermalIC_OUT_Data_ID 1

} GetVGA1tempThermalIC_OUT, *PGetVGA1tempThermalIC_OUT;

#define GetVGA1tempThermalIC_OUT_SIZE (FIELD_OFFSET(GetVGA1tempThermalIC_OUT, Data) + GetVGA1tempThermalIC_OUT_Data_SIZE)

#define GetVGA2temp     14
typedef struct _GetVGA2temp_OUT
{
    // Get VGA2 die temperature 
    USHORT Data;
    #define GetVGA2temp_OUT_Data_SIZE sizeof(USHORT)
    #define GetVGA2temp_OUT_Data_ID 1

} GetVGA2temp_OUT, *PGetVGA2temp_OUT;

#define GetVGA2temp_OUT_SIZE (FIELD_OFFSET(GetVGA2temp_OUT, Data) + GetVGA2temp_OUT_Data_SIZE)

#define GetVGA2tempThermalIC     15
typedef struct _GetVGA2tempThermalIC_OUT
{
    //  Get VGA2 die temperature Thermal IC
    USHORT Data;
    #define GetVGA2tempThermalIC_OUT_Data_SIZE sizeof(USHORT)
    #define GetVGA2tempThermalIC_OUT_Data_ID 1

} GetVGA2tempThermalIC_OUT, *PGetVGA2tempThermalIC_OUT;

#define GetVGA2tempThermalIC_OUT_SIZE (FIELD_OFFSET(GetVGA2tempThermalIC_OUT, Data) + GetVGA2tempThermalIC_OUT_Data_SIZE)

#define GetCPUPerformance     16
typedef struct _GetCPUPerformance_OUT
{
    // Get CPU performance
    ULONG Data;
    #define GetCPUPerformance_OUT_Data_SIZE sizeof(ULONG)
    #define GetCPUPerformance_OUT_Data_ID 1

} GetCPUPerformance_OUT, *PGetCPUPerformance_OUT;

#define GetCPUPerformance_OUT_SIZE (FIELD_OFFSET(GetCPUPerformance_OUT, Data) + GetCPUPerformance_OUT_Data_SIZE)

#define GetCPUFANControl     17
typedef struct _GetCPUFANControl_OUT
{
    // Get CPU FAN control scheme
    USHORT Data;
    #define GetCPUFANControl_OUT_Data_SIZE sizeof(USHORT)
    #define GetCPUFANControl_OUT_Data_ID 1

} GetCPUFANControl_OUT, *PGetCPUFANControl_OUT;

#define GetCPUFANControl_OUT_SIZE (FIELD_OFFSET(GetCPUFANControl_OUT, Data) + GetCPUFANControl_OUT_Data_SIZE)

#define GetLCDAutoDimmer     18
typedef struct _GetLCDAutoDimmer_OUT
{
    // Get LCD AutoDimmer
    USHORT Data;
    #define GetLCDAutoDimmer_OUT_Data_SIZE sizeof(USHORT)
    #define GetLCDAutoDimmer_OUT_Data_ID 1

} GetLCDAutoDimmer_OUT, *PGetLCDAutoDimmer_OUT;

#define GetLCDAutoDimmer_OUT_SIZE (FIELD_OFFSET(GetLCDAutoDimmer_OUT, Data) + GetLCDAutoDimmer_OUT_Data_SIZE)

#define GetBatteryFCC     19
typedef struct _GetBatteryFCC_OUT
{
    // Get Battery FCC
    USHORT Data;
    #define GetBatteryFCC_OUT_Data_SIZE sizeof(USHORT)
    #define GetBatteryFCC_OUT_Data_ID 1

} GetBatteryFCC_OUT, *PGetBatteryFCC_OUT;

#define GetBatteryFCC_OUT_SIZE (FIELD_OFFSET(GetBatteryFCC_OUT, Data) + GetBatteryFCC_OUT_Data_SIZE)

#define SetEmailLEDOFF     27
typedef struct _SetEmailLEDOFF_IN
{
    // Setup E-mail LED off
    USHORT Data;
    #define SetEmailLEDOFF_IN_Data_SIZE sizeof(USHORT)
    #define SetEmailLEDOFF_IN_Data_ID 1

} SetEmailLEDOFF_IN, *PSetEmailLEDOFF_IN;

#define SetEmailLEDOFF_IN_SIZE (FIELD_OFFSET(SetEmailLEDOFF_IN, Data) + SetEmailLEDOFF_IN_Data_SIZE)

#define SetEmailLEDON     28
typedef struct _SetEmailLEDON_IN
{
    // Setup E-mail LED on
    USHORT Data;
    #define SetEmailLEDON_IN_Data_SIZE sizeof(USHORT)
    #define SetEmailLEDON_IN_Data_ID 1

} SetEmailLEDON_IN, *PSetEmailLEDON_IN;

#define SetEmailLEDON_IN_SIZE (FIELD_OFFSET(SetEmailLEDON_IN, Data) + SetEmailLEDON_IN_Data_SIZE)

#define SetCPUPerformance     29
typedef struct _SetCPUPerformance_IN
{
    // Setup CPU performance
    USHORT Data;
    #define SetCPUPerformance_IN_Data_SIZE sizeof(USHORT)
    #define SetCPUPerformance_IN_Data_ID 1

} SetCPUPerformance_IN, *PSetCPUPerformance_IN;

#define SetCPUPerformance_IN_SIZE (FIELD_OFFSET(SetCPUPerformance_IN, Data) + SetCPUPerformance_IN_Data_SIZE)

#define SetCPUFANControl     30
typedef struct _SetCPUFANControl_IN
{
    // Setup CPU FAN control scheme
    USHORT Data;
    #define SetCPUFANControl_IN_Data_SIZE sizeof(USHORT)
    #define SetCPUFANControl_IN_Data_ID 1

} SetCPUFANControl_IN, *PSetCPUFANControl_IN;

#define SetCPUFANControl_IN_SIZE (FIELD_OFFSET(SetCPUFANControl_IN, Data) + SetCPUFANControl_IN_Data_SIZE)

#define SetLCDAutoDimmer     31
typedef struct _SetLCDAutoDimmer_IN
{
    // Setup LCD AutoDimmer
    USHORT Data;
    #define SetLCDAutoDimmer_IN_Data_SIZE sizeof(USHORT)
    #define SetLCDAutoDimmer_IN_Data_ID 1

} SetLCDAutoDimmer_IN, *PSetLCDAutoDimmer_IN;

#define SetLCDAutoDimmer_IN_SIZE (FIELD_OFFSET(SetLCDAutoDimmer_IN, Data) + SetLCDAutoDimmer_IN_Data_SIZE)

#define SetWLan     32
typedef struct _SetWLan_IN
{
    // Set WLan
    USHORT Data;
    #define SetWLan_IN_Data_SIZE sizeof(USHORT)
    #define SetWLan_IN_Data_ID 1

} SetWLan_IN, *PSetWLan_IN;

#define SetWLan_IN_SIZE (FIELD_OFFSET(SetWLan_IN, Data) + SetWLan_IN_Data_SIZE)

#define SetBT     33
typedef struct _SetBT_IN
{
    // Set BT
    USHORT Data;
    #define SetBT_IN_Data_SIZE sizeof(USHORT)
    #define SetBT_IN_Data_ID 1

} SetBT_IN, *PSetBT_IN;

#define SetBT_IN_SIZE (FIELD_OFFSET(SetBT_IN, Data) + SetBT_IN_Data_SIZE)

#define SetCamera     34
typedef struct _SetCamera_IN
{
    // Set Camera
    USHORT Data;
    #define SetCamera_IN_Data_SIZE sizeof(USHORT)
    #define SetCamera_IN_Data_ID 1

} SetCamera_IN, *PSetCamera_IN;

#define SetCamera_IN_SIZE (FIELD_OFFSET(SetCamera_IN, Data) + SetCamera_IN_Data_SIZE)

#define SetGPIO12     38
typedef struct _SetGPIO12_IN
{
    // Setup GPIO12
    USHORT Data;
    #define SetGPIO12_IN_Data_SIZE sizeof(USHORT)
    #define SetGPIO12_IN_Data_ID 1

} SetGPIO12_IN, *PSetGPIO12_IN;

#define SetGPIO12_IN_SIZE (FIELD_OFFSET(SetGPIO12_IN, Data) + SetGPIO12_IN_Data_SIZE)

#define SetYearMonth     40
typedef struct _SetYearMonth_IN
{
    // Setup YearMonth
    USHORT Data;
    #define SetYearMonth_IN_Data_SIZE sizeof(USHORT)
    #define SetYearMonth_IN_Data_ID 1

} SetYearMonth_IN, *PSetYearMonth_IN;

#define SetYearMonth_IN_SIZE (FIELD_OFFSET(SetYearMonth_IN, Data) + SetYearMonth_IN_Data_SIZE)

#define SetDayHour     41
typedef struct _SetDayHour_IN
{
    // Setup DayHour
    USHORT Data;
    #define SetDayHour_IN_Data_SIZE sizeof(USHORT)
    #define SetDayHour_IN_Data_ID 1

} SetDayHour_IN, *PSetDayHour_IN;

#define SetDayHour_IN_SIZE (FIELD_OFFSET(SetDayHour_IN, Data) + SetDayHour_IN_Data_SIZE)

#define SetTP     42
typedef struct _SetTP_IN
{
    // Setup Touchpad
    USHORT Data;
    #define SetTP_IN_Data_SIZE sizeof(USHORT)
    #define SetTP_IN_Data_ID 1

} SetTP_IN, *PSetTP_IN;

#define SetTP_IN_SIZE (FIELD_OFFSET(SetTP_IN, Data) + SetTP_IN_Data_SIZE)

#define SetupRotationdegree     43
typedef struct _SetupRotationdegree_IN
{
    // Setup Rotation degree
    USHORT Data;
    #define SetupRotationdegree_IN_Data_SIZE sizeof(USHORT)
    #define SetupRotationdegree_IN_Data_ID 1

} SetupRotationdegree_IN, *PSetupRotationdegree_IN;

#define SetupRotationdegree_IN_SIZE (FIELD_OFFSET(SetupRotationdegree_IN, Data) + SetupRotationdegree_IN_Data_SIZE)

#define ReturnHDTemp     44
typedef struct _ReturnHDTemp_IN
{
    // Return HD Temp
    USHORT Data;
    #define ReturnHDTemp_IN_Data_SIZE sizeof(USHORT)
    #define ReturnHDTemp_IN_Data_ID 1

} ReturnHDTemp_IN, *PReturnHDTemp_IN;

#define ReturnHDTemp_IN_SIZE (FIELD_OFFSET(ReturnHDTemp_IN, Data) + ReturnHDTemp_IN_Data_SIZE)

#define ReturnPopupMode     45
typedef struct _ReturnPopupMode_IN
{
    // Return Popup Mode
    USHORT Data;
    #define ReturnPopupMode_IN_Data_SIZE sizeof(USHORT)
    #define ReturnPopupMode_IN_Data_ID 1

} ReturnPopupMode_IN, *PReturnPopupMode_IN;

#define ReturnPopupMode_IN_SIZE (FIELD_OFFSET(ReturnPopupMode_IN, Data) + ReturnPopupMode_IN_Data_SIZE)

#define SetRFID     46
typedef struct _SetRFID_IN
{
    // Set RFID
    USHORT Data;
    #define SetRFID_IN_Data_SIZE sizeof(USHORT)
    #define SetRFID_IN_Data_ID 1

} SetRFID_IN, *PSetRFID_IN;

#define SetRFID_IN_SIZE (FIELD_OFFSET(SetRFID_IN, Data) + SetRFID_IN_Data_SIZE)

#define SetGPS     47
typedef struct _SetGPS_IN
{
    // Set GPS
    USHORT Data;
    #define SetGPS_IN_Data_SIZE sizeof(USHORT)
    #define SetGPS_IN_Data_ID 1

} SetGPS_IN, *PSetGPS_IN;

#define SetGPS_IN_SIZE (FIELD_OFFSET(SetGPS_IN, Data) + SetGPS_IN_Data_SIZE)

#define SetBarCode     48
typedef struct _SetBarCode_IN
{
    // Set BarCode
    USHORT Data;
    #define SetBarCode_IN_Data_SIZE sizeof(USHORT)
    #define SetBarCode_IN_Data_ID 1

} SetBarCode_IN, *PSetBarCode_IN;

#define SetBarCode_IN_SIZE (FIELD_OFFSET(SetBarCode_IN, Data) + SetBarCode_IN_Data_SIZE)

#define SetVolumeLED     49
typedef struct _SetVolumeLED_IN
{
    // Set VolumeLED
    USHORT Data;
    #define SetVolumeLED_IN_Data_SIZE sizeof(USHORT)
    #define SetVolumeLED_IN_Data_ID 1

} SetVolumeLED_IN, *PSetVolumeLED_IN;

#define SetVolumeLED_IN_SIZE (FIELD_OFFSET(SetVolumeLED_IN, Data) + SetVolumeLED_IN_Data_SIZE)

#define SetXPBrightness     75
typedef struct _SetXPBrightness_IN
{
    // Set XPBrightness
    USHORT Data;
    #define SetXPBrightness_IN_Data_SIZE sizeof(USHORT)
    #define SetXPBrightness_IN_Data_ID 1

} SetXPBrightness_IN, *PSetXPBrightness_IN;

#define SetXPBrightness_IN_SIZE (FIELD_OFFSET(SetXPBrightness_IN, Data) + SetXPBrightness_IN_Data_SIZE)

#define Set3G     76
typedef struct _Set3G_IN
{
    // Get 3G
    USHORT Data;
    #define Set3G_IN_Data_SIZE sizeof(USHORT)
    #define Set3G_IN_Data_ID 1

} Set3G_IN, *PSet3G_IN;

#define Set3G_IN_SIZE (FIELD_OFFSET(Set3G_IN, Data) + Set3G_IN_Data_SIZE)

#define SetColorKey     77
typedef struct _SetColorKey_IN
{
    // Set ColorKey
    USHORT Data;
    #define SetColorKey_IN_Data_SIZE sizeof(USHORT)
    #define SetColorKey_IN_Data_ID 1

} SetColorKey_IN, *PSetColorKey_IN;

#define SetColorKey_IN_SIZE (FIELD_OFFSET(SetColorKey_IN, Data) + SetColorKey_IN_Data_SIZE)

#define SetSensor     78
typedef struct _SetSensor_IN
{
    // Set Sensor
    USHORT Data;
    #define SetSensor_IN_Data_SIZE sizeof(USHORT)
    #define SetSensor_IN_Data_ID 1

} SetSensor_IN, *PSetSensor_IN;

#define SetSensor_IN_SIZE (FIELD_OFFSET(SetSensor_IN, Data) + SetSensor_IN_Data_SIZE)

#define SetEnergyStar     79
typedef struct _SetEnergyStar_IN
{
    // Set EnergyStar
    USHORT Data;
    #define SetEnergyStar_IN_Data_SIZE sizeof(USHORT)
    #define SetEnergyStar_IN_Data_ID 1

} SetEnergyStar_IN, *PSetEnergyStar_IN;

#define SetEnergyStar_IN_SIZE (FIELD_OFFSET(SetEnergyStar_IN, Data) + SetEnergyStar_IN_Data_SIZE)

#define SetOS     85
typedef struct _SetOS_IN
{
    // Set OS
    USHORT Data;
    #define SetOS_IN_Data_SIZE sizeof(USHORT)
    #define SetOS_IN_Data_ID 1

} SetOS_IN, *PSetOS_IN;

#define SetOS_IN_SIZE (FIELD_OFFSET(SetOS_IN, Data) + SetOS_IN_Data_SIZE)

#define SetNVIDIA     86
typedef struct _SetNVIDIA_IN
{
    // Set NVIDIA
    USHORT Data;
    #define SetNVIDIA_IN_Data_SIZE sizeof(USHORT)
    #define SetNVIDIA_IN_Data_ID 1

} SetNVIDIA_IN, *PSetNVIDIA_IN;

#define SetNVIDIA_IN_SIZE (FIELD_OFFSET(SetNVIDIA_IN, Data) + SetNVIDIA_IN_Data_SIZE)

#define SetMuteButton     87
typedef struct _SetMuteButton_IN
{
    // Set Mute Button
    USHORT Data;
    #define SetMuteButton_IN_Data_SIZE sizeof(USHORT)
    #define SetMuteButton_IN_Data_ID 1

} SetMuteButton_IN, *PSetMuteButton_IN;

#define SetMuteButton_IN_SIZE (FIELD_OFFSET(SetMuteButton_IN, Data) + SetMuteButton_IN_Data_SIZE)

#define SetDocking     88
typedef struct _SetDocking_IN
{
    // SetDocking
    USHORT Data;
    #define SetDocking_IN_Data_SIZE sizeof(USHORT)
    #define SetDocking_IN_Data_ID 1

} SetDocking_IN, *PSetDocking_IN;

#define SetDocking_IN_SIZE (FIELD_OFFSET(SetDocking_IN, Data) + SetDocking_IN_Data_SIZE)

#define SetMenu     89
typedef struct _SetMenu_IN
{
    // SetMenu
    USHORT Data;
    #define SetMenu_IN_Data_SIZE sizeof(USHORT)
    #define SetMenu_IN_Data_ID 1

} SetMenu_IN, *PSetMenu_IN;

#define SetMenu_IN_SIZE (FIELD_OFFSET(SetMenu_IN, Data) + SetMenu_IN_Data_SIZE)

#define EmulatedButton     90
typedef struct _EmulatedButton_IN
{
    // EmulatedButton
    USHORT Data;
    #define EmulatedButton_IN_Data_SIZE sizeof(USHORT)
    #define EmulatedButton_IN_Data_ID 1

} EmulatedButton_IN, *PEmulatedButton_IN;

#define EmulatedButton_IN_SIZE (FIELD_OFFSET(EmulatedButton_IN, Data) + EmulatedButton_IN_Data_SIZE)

#define USB     91
typedef struct _USB_IN
{
    // USB
    USHORT Data;
    #define USB_IN_Data_SIZE sizeof(USHORT)
    #define USB_IN_Data_ID 1

} USB_IN, *PUSB_IN;

#define USB_IN_SIZE (FIELD_OFFSET(USB_IN, Data) + USB_IN_Data_SIZE)

#define LightSensor     92
typedef struct _LightSensor_IN
{
    // LightSensor
    USHORT Data;
    #define LightSensor_IN_Data_SIZE sizeof(USHORT)
    #define LightSensor_IN_Data_ID 1

} LightSensor_IN, *PLightSensor_IN;

#define LightSensor_IN_SIZE (FIELD_OFFSET(LightSensor_IN, Data) + LightSensor_IN_Data_SIZE)

#define SetBrightnessLevel     93
typedef struct _SetBrightnessLevel_IN
{
    // SetBrightnessLevel
    USHORT Data;
    #define SetBrightnessLevel_IN_Data_SIZE sizeof(USHORT)
    #define SetBrightnessLevel_IN_Data_ID 1

} SetBrightnessLevel_IN, *PSetBrightnessLevel_IN;

#define SetBrightnessLevel_IN_SIZE (FIELD_OFFSET(SetBrightnessLevel_IN, Data) + SetBrightnessLevel_IN_Data_SIZE)

#define SetBacklightOff     94
typedef struct _SetBacklightOff_IN
{
    // SetBacklightOff
    USHORT Data;
    #define SetBacklightOff_IN_Data_SIZE sizeof(USHORT)
    #define SetBacklightOff_IN_Data_ID 1

} SetBacklightOff_IN, *PSetBacklightOff_IN;

#define SetBacklightOff_IN_SIZE (FIELD_OFFSET(SetBacklightOff_IN, Data) + SetBacklightOff_IN_Data_SIZE)

#define SetKBLED     103
typedef struct _SetKBLED_IN
{
    // SetKBLED
    ULONG Data;
    #define SetKBLED_IN_Data_SIZE sizeof(ULONG)
    #define SetKBLED_IN_Data_ID 1

} SetKBLED_IN, *PSetKBLED_IN;

#define SetKBLED_IN_SIZE (FIELD_OFFSET(SetKBLED_IN, Data) + SetKBLED_IN_Data_SIZE)

#define SetFanDuty     104
typedef struct _SetFanDuty_IN
{
    // SetFanDuty
    ULONG Data;
    #define SetFanDuty_IN_Data_SIZE sizeof(ULONG)
    #define SetFanDuty_IN_Data_ID 1

} SetFanDuty_IN, *PSetFanDuty_IN;

#define SetFanDuty_IN_SIZE (FIELD_OFFSET(SetFanDuty_IN, Data) + SetFanDuty_IN_Data_SIZE)

#define SetFanAutoDuty     105
typedef struct _SetFanAutoDuty_IN
{
    // SetFanAutoDuty
    ULONG Data;
    #define SetFanAutoDuty_IN_Data_SIZE sizeof(ULONG)
    #define SetFanAutoDuty_IN_Data_ID 1

} SetFanAutoDuty_IN, *PSetFanAutoDuty_IN;

#define SetFanAutoDuty_IN_SIZE (FIELD_OFFSET(SetFanAutoDuty_IN, Data) + SetFanAutoDuty_IN_Data_SIZE)

#define SetECResumerTimer     106
typedef struct _SetECResumerTimer_IN
{
    // SetECResumerTimer
    ULONG Data;
    #define SetECResumerTimer_IN_Data_SIZE sizeof(ULONG)
    #define SetECResumerTimer_IN_Data_ID 1

} SetECResumerTimer_IN, *PSetECResumerTimer_IN;

#define SetECResumerTimer_IN_SIZE (FIELD_OFFSET(SetECResumerTimer_IN, Data) + SetECResumerTimer_IN_Data_SIZE)

#define SetH2RAMIndex     107
typedef struct _SetH2RAMIndex_IN
{
    // SetH2RAMIndex
    ULONG Data;
    #define SetH2RAMIndex_IN_Data_SIZE sizeof(ULONG)
    #define SetH2RAMIndex_IN_Data_ID 1

} SetH2RAMIndex_IN, *PSetH2RAMIndex_IN;

#define SetH2RAMIndex_IN_SIZE (FIELD_OFFSET(SetH2RAMIndex_IN, Data) + SetH2RAMIndex_IN_Data_SIZE)

#define SetCCDLED     108
typedef struct _SetCCDLED_IN
{
    // SetCCDLED
    ULONG Data;
    #define SetCCDLED_IN_Data_SIZE sizeof(ULONG)
    #define SetCCDLED_IN_Data_ID 1

} SetCCDLED_IN, *PSetCCDLED_IN;

#define SetCCDLED_IN_SIZE (FIELD_OFFSET(SetCCDLED_IN, Data) + SetCCDLED_IN_Data_SIZE)

#define TalkECVolume     116
typedef struct _TalkECVolume_IN
{
    // TalkECVolume
    ULONG Data;
    #define TalkECVolume_IN_Data_SIZE sizeof(ULONG)
    #define TalkECVolume_IN_Data_ID 1

} TalkECVolume_IN, *PTalkECVolume_IN;

#define TalkECVolume_IN_SIZE (FIELD_OFFSET(TalkECVolume_IN, Data) + TalkECVolume_IN_Data_SIZE)

#define GetBatteryDesignCpacity     50
typedef struct _GetBatteryDesignCpacity_OUT
{
    // Get Battery Design Capacity
    USHORT Data;
    #define GetBatteryDesignCpacity_OUT_Data_SIZE sizeof(USHORT)
    #define GetBatteryDesignCpacity_OUT_Data_ID 1

} GetBatteryDesignCpacity_OUT, *PGetBatteryDesignCpacity_OUT;

#define GetBatteryDesignCpacity_OUT_SIZE (FIELD_OFFSET(GetBatteryDesignCpacity_OUT, Data) + GetBatteryDesignCpacity_OUT_Data_SIZE)

#define GetBatteryAverageTimeToFullCharge     51
typedef struct _GetBatteryAverageTimeToFullCharge_OUT
{
    // Get Battery Average time to full charge
    USHORT Data;
    #define GetBatteryAverageTimeToFullCharge_OUT_Data_SIZE sizeof(USHORT)
    #define GetBatteryAverageTimeToFullCharge_OUT_Data_ID 1

} GetBatteryAverageTimeToFullCharge_OUT, *PGetBatteryAverageTimeToFullCharge_OUT;

#define GetBatteryAverageTimeToFullCharge_OUT_SIZE (FIELD_OFFSET(GetBatteryAverageTimeToFullCharge_OUT, Data) + GetBatteryAverageTimeToFullCharge_OUT_Data_SIZE)

#define GetBatteryAverageTimeToEmpty     52
typedef struct _GetBatteryAverageTimeToEmpty_OUT
{
    // Get Battery Average time to empty
    USHORT Data;
    #define GetBatteryAverageTimeToEmpty_OUT_Data_SIZE sizeof(USHORT)
    #define GetBatteryAverageTimeToEmpty_OUT_Data_ID 1

} GetBatteryAverageTimeToEmpty_OUT, *PGetBatteryAverageTimeToEmpty_OUT;

#define GetBatteryAverageTimeToEmpty_OUT_SIZE (FIELD_OFFSET(GetBatteryAverageTimeToEmpty_OUT, Data) + GetBatteryAverageTimeToEmpty_OUT_Data_SIZE)

#define GetCPUFANDuty     53
typedef struct _GetCPUFANDuty_OUT
{
    // Get CPU FAN Duty
    USHORT Data;
    #define GetCPUFANDuty_OUT_Data_SIZE sizeof(USHORT)
    #define GetCPUFANDuty_OUT_Data_ID 1

} GetCPUFANDuty_OUT, *PGetCPUFANDuty_OUT;

#define GetCPUFANDuty_OUT_SIZE (FIELD_OFFSET(GetCPUFANDuty_OUT, Data) + GetCPUFANDuty_OUT_Data_SIZE)

#define GetVGA1FANDuty     54
typedef struct _GetVGA1FANDuty_OUT
{
    // Get VGA1 FAN Duty
    USHORT Data;
    #define GetVGA1FANDuty_OUT_Data_SIZE sizeof(USHORT)
    #define GetVGA1FANDuty_OUT_Data_ID 1

} GetVGA1FANDuty_OUT, *PGetVGA1FANDuty_OUT;

#define GetVGA1FANDuty_OUT_SIZE (FIELD_OFFSET(GetVGA1FANDuty_OUT, Data) + GetVGA1FANDuty_OUT_Data_SIZE)

#define GetVGA2FANDuty     55
typedef struct _GetVGA2FANDuty_OUT
{
    // Get VGA2 FAN Duty
    USHORT Data;
    #define GetVGA2FANDuty_OUT_Data_SIZE sizeof(USHORT)
    #define GetVGA2FANDuty_OUT_Data_ID 1

} GetVGA2FANDuty_OUT, *PGetVGA2FANDuty_OUT;

#define GetVGA2FANDuty_OUT_SIZE (FIELD_OFFSET(GetVGA2FANDuty_OUT, Data) + GetVGA2FANDuty_OUT_Data_SIZE)

#define GetFANCount     56
typedef struct _GetFANCount_OUT
{
    // Get Battery Average time to empty
    USHORT Data;
    #define GetFANCount_OUT_Data_SIZE sizeof(USHORT)
    #define GetFANCount_OUT_Data_ID 1

} GetFANCount_OUT, *PGetFANCount_OUT;

#define GetFANCount_OUT_SIZE (FIELD_OFFSET(GetFANCount_OUT, Data) + GetFANCount_OUT_Data_SIZE)

#define GetLCDResolution     59
typedef struct _GetLCDResolution_OUT
{
    // Get LCD resolution
    USHORT Data;
    #define GetLCDResolution_OUT_Data_SIZE sizeof(USHORT)
    #define GetLCDResolution_OUT_Data_ID 1

} GetLCDResolution_OUT, *PGetLCDResolution_OUT;

#define GetLCDResolution_OUT_SIZE (FIELD_OFFSET(GetLCDResolution_OUT, Data) + GetLCDResolution_OUT_Data_SIZE)

#define GetHDMIport     60
typedef struct _GetHDMIport_OUT
{
    // Get HDMI port
    USHORT Data;
    #define GetHDMIport_OUT_Data_SIZE sizeof(USHORT)
    #define GetHDMIport_OUT_Data_ID 1

} GetHDMIport_OUT, *PGetHDMIport_OUT;

#define GetHDMIport_OUT_SIZE (FIELD_OFFSET(GetHDMIport_OUT, Data) + GetHDMIport_OUT_Data_SIZE)

#define GetGSensorXYZ     61
typedef struct _GetGSensorXYZ_OUT
{
    // Get GSensor XYZ
    ULONG Data;
    #define GetGSensorXYZ_OUT_Data_SIZE sizeof(ULONG)
    #define GetGSensorXYZ_OUT_Data_ID 1

} GetGSensorXYZ_OUT, *PGetGSensorXYZ_OUT;

#define GetGSensorXYZ_OUT_SIZE (FIELD_OFFSET(GetGSensorXYZ_OUT, Data) + GetGSensorXYZ_OUT_Data_SIZE)

#define GetGSensorMode     62
typedef struct _GetGSensorMode_OUT
{
    // Get GSensor Mode
    USHORT Data;
    #define GetGSensorMode_OUT_Data_SIZE sizeof(USHORT)
    #define GetGSensorMode_OUT_Data_ID 1

} GetGSensorMode_OUT, *PGetGSensorMode_OUT;

#define GetGSensorMode_OUT_SIZE (FIELD_OFFSET(GetGSensorMode_OUT, Data) + GetGSensorMode_OUT_Data_SIZE)

#define GetHDPollingTime     63
typedef struct _GetHDPollingTime_OUT
{
    // Get HD Polling Time
    USHORT Data;
    #define GetHDPollingTime_OUT_Data_SIZE sizeof(USHORT)
    #define GetHDPollingTime_OUT_Data_ID 1

} GetHDPollingTime_OUT, *PGetHDPollingTime_OUT;

#define GetHDPollingTime_OUT_SIZE (FIELD_OFFSET(GetHDPollingTime_OUT, Data) + GetHDPollingTime_OUT_Data_SIZE)

#define GetRFID     64
typedef struct _GetRFID_OUT
{
    // Get RFID
    USHORT Data;
    #define GetRFID_OUT_Data_SIZE sizeof(USHORT)
    #define GetRFID_OUT_Data_ID 1

} GetRFID_OUT, *PGetRFID_OUT;

#define GetRFID_OUT_SIZE (FIELD_OFFSET(GetRFID_OUT, Data) + GetRFID_OUT_Data_SIZE)

#define GetGPS     65
typedef struct _GetGPS_OUT
{
    // Get GPS
    USHORT Data;
    #define GetGPS_OUT_Data_SIZE sizeof(USHORT)
    #define GetGPS_OUT_Data_ID 1

} GetGPS_OUT, *PGetGPS_OUT;

#define GetGPS_OUT_SIZE (FIELD_OFFSET(GetGPS_OUT, Data) + GetGPS_OUT_Data_SIZE)

#define GetBarCode     66
typedef struct _GetBarCode_OUT
{
    // Get BarCode
    USHORT Data;
    #define GetBarCode_OUT_Data_SIZE sizeof(USHORT)
    #define GetBarCode_OUT_Data_ID 1

} GetBarCode_OUT, *PGetBarCode_OUT;

#define GetBarCode_OUT_SIZE (FIELD_OFFSET(GetBarCode_OUT, Data) + GetBarCode_OUT_Data_SIZE)

#define GetBIOS_SF     67
typedef struct _GetBIOS_SF_OUT
{
    // GetBIOS_SF
    ULONG Data;
    #define GetBIOS_SF_OUT_Data_SIZE sizeof(ULONG)
    #define GetBIOS_SF_OUT_Data_ID 1

} GetBIOS_SF_OUT, *PGetBIOS_SF_OUT;

#define GetBIOS_SF_OUT_SIZE (FIELD_OFFSET(GetBIOS_SF_OUT, Data) + GetBIOS_SF_OUT_Data_SIZE)

#define GetVolumeLED     68
typedef struct _GetVolumeLED_OUT
{
    // Get Volume LED
    USHORT Data;
    #define GetVolumeLED_OUT_Data_SIZE sizeof(USHORT)
    #define GetVolumeLED_OUT_Data_ID 1

} GetVolumeLED_OUT, *PGetVolumeLED_OUT;

#define GetVolumeLED_OUT_SIZE (FIELD_OFFSET(GetVolumeLED_OUT, Data) + GetVolumeLED_OUT_Data_SIZE)

#define GetCurrentBrightness     69
typedef struct _GetCurrentBrightness_OUT
{
    // Get Current Brightness
    USHORT Data;
    #define GetCurrentBrightness_OUT_Data_SIZE sizeof(USHORT)
    #define GetCurrentBrightness_OUT_Data_ID 1

} GetCurrentBrightness_OUT, *PGetCurrentBrightness_OUT;

#define GetCurrentBrightness_OUT_SIZE (FIELD_OFFSET(GetCurrentBrightness_OUT, Data) + GetCurrentBrightness_OUT_Data_SIZE)

#define GetAP     70
typedef struct _GetAP_OUT
{
    // Setup AP
    ULONG Data;
    #define GetAP_OUT_Data_SIZE sizeof(ULONG)
    #define GetAP_OUT_Data_ID 1

} GetAP_OUT, *PGetAP_OUT;

#define GetAP_OUT_SIZE (FIELD_OFFSET(GetAP_OUT, Data) + GetAP_OUT_Data_SIZE)

#define SetFactoryMode     71
typedef struct _SetFactoryMode_OUT
{
    // Set FactoryMode
    USHORT Data;
    #define SetFactoryMode_OUT_Data_SIZE sizeof(USHORT)
    #define SetFactoryMode_OUT_Data_ID 1

} SetFactoryMode_OUT, *PSetFactoryMode_OUT;

#define SetFactoryMode_OUT_SIZE (FIELD_OFFSET(SetFactoryMode_OUT, Data) + SetFactoryMode_OUT_Data_SIZE)

#define OS_S3_S4     72
typedef struct _OS_S3_S4_OUT
{
    // OS_S3_S4
    USHORT Data;
    #define OS_S3_S4_OUT_Data_SIZE sizeof(USHORT)
    #define OS_S3_S4_OUT_Data_ID 1

} OS_S3_S4_OUT, *POS_S3_S4_OUT;

#define OS_S3_S4_OUT_SIZE (FIELD_OFFSET(OS_S3_S4_OUT, Data) + OS_S3_S4_OUT_Data_SIZE)

#define RapidStarMode     74
typedef struct _RapidStarMode_OUT
{
    // RapidStarMode
    USHORT Data;
    #define RapidStarMode_OUT_Data_SIZE sizeof(USHORT)
    #define RapidStarMode_OUT_Data_ID 1

} RapidStarMode_OUT, *PRapidStarMode_OUT;

#define RapidStarMode_OUT_SIZE (FIELD_OFFSET(RapidStarMode_OUT, Data) + RapidStarMode_OUT_Data_SIZE)

#define GetBridgeBatteryStatus     80
typedef struct _GetBridgeBatteryStatus_OUT
{
    // Get Bridge Battery Status
    USHORT Data;
    #define GetBridgeBatteryStatus_OUT_Data_SIZE sizeof(USHORT)
    #define GetBridgeBatteryStatus_OUT_Data_ID 1

} GetBridgeBatteryStatus_OUT, *PGetBridgeBatteryStatus_OUT;

#define GetBridgeBatteryStatus_OUT_SIZE (FIELD_OFFSET(GetBridgeBatteryStatus_OUT, Data) + GetBridgeBatteryStatus_OUT_Data_SIZE)

#define AddSystemSecond     81
typedef struct _AddSystemSecond_OUT
{
    // Add System Second
    USHORT Data;
    #define AddSystemSecond_OUT_Data_SIZE sizeof(USHORT)
    #define AddSystemSecond_OUT_Data_ID 1

} AddSystemSecond_OUT, *PAddSystemSecond_OUT;

#define AddSystemSecond_OUT_SIZE (FIELD_OFFSET(AddSystemSecond_OUT, Data) + AddSystemSecond_OUT_Data_SIZE)

#define BIOS_special_feature_list     82
typedef struct _BIOS_special_feature_list_OUT
{
    // BIOS special feature list
    ULONG Data;
    #define BIOS_special_feature_list_OUT_Data_SIZE sizeof(ULONG)
    #define BIOS_special_feature_list_OUT_Data_ID 1

} BIOS_special_feature_list_OUT, *PBIOS_special_feature_list_OUT;

#define BIOS_special_feature_list_OUT_SIZE (FIELD_OFFSET(BIOS_special_feature_list_OUT, Data) + BIOS_special_feature_list_OUT_Data_SIZE)

#define GetLux     83
typedef struct _GetLux_OUT
{
    // GetLux
    ULONG Data;
    #define GetLux_OUT_Data_SIZE sizeof(ULONG)
    #define GetLux_OUT_Data_ID 1

} GetLux_OUT, *PGetLux_OUT;

#define GetLux_OUT_SIZE (FIELD_OFFSET(GetLux_OUT, Data) + GetLux_OUT_Data_SIZE)

#define Aero     84
typedef struct _Aero_OUT
{
    // Aero
    ULONG Data;
    #define Aero_OUT_Data_SIZE sizeof(ULONG)
    #define Aero_OUT_Data_ID 1

} Aero_OUT, *PAero_OUT;

#define Aero_OUT_SIZE (FIELD_OFFSET(Aero_OUT, Data) + Aero_OUT_Data_SIZE)

#define RapidStar     98
typedef struct _RapidStar_OUT
{
    // RapidStar
    ULONG Data;
    #define RapidStar_OUT_Data_SIZE sizeof(ULONG)
    #define RapidStar_OUT_Data_ID 1

} RapidStar_OUT, *PRapidStar_OUT;

#define RapidStar_OUT_SIZE (FIELD_OFFSET(RapidStar_OUT, Data) + RapidStar_OUT_Data_SIZE)

#define Fan1Info     99
typedef struct _Fan1Info_OUT
{
    // Fan1Info
    ULONG Data;
    #define Fan1Info_OUT_Data_SIZE sizeof(ULONG)
    #define Fan1Info_OUT_Data_ID 1

} Fan1Info_OUT, *PFan1Info_OUT;

#define Fan1Info_OUT_SIZE (FIELD_OFFSET(Fan1Info_OUT, Data) + Fan1Info_OUT_Data_SIZE)

#define Fan2Info     100
typedef struct _Fan2Info_OUT
{
    // Fan2Info
    ULONG Data;
    #define Fan2Info_OUT_Data_SIZE sizeof(ULONG)
    #define Fan2Info_OUT_Data_ID 1

} Fan2Info_OUT, *PFan2Info_OUT;

#define Fan2Info_OUT_SIZE (FIELD_OFFSET(Fan2Info_OUT, Data) + Fan2Info_OUT_Data_SIZE)

#define Fan3Info     110
typedef struct _Fan3Info_OUT
{
    // Fan3Info
    ULONG Data;
    #define Fan3Info_OUT_Data_SIZE sizeof(ULONG)
    #define Fan3Info_OUT_Data_ID 1

} Fan3Info_OUT, *PFan3Info_OUT;

#define Fan3Info_OUT_SIZE (FIELD_OFFSET(Fan3Info_OUT, Data) + Fan3Info_OUT_Data_SIZE)

#define Fan4Info     111
typedef struct _Fan4Info_OUT
{
    // Fan4Info
    ULONG Data;
    #define Fan4Info_OUT_Data_SIZE sizeof(ULONG)
    #define Fan4Info_OUT_Data_ID 1

} Fan4Info_OUT, *PFan4Info_OUT;

#define Fan4Info_OUT_SIZE (FIELD_OFFSET(Fan4Info_OUT, Data) + Fan4Info_OUT_Data_SIZE)

#define GetFan12RPM     112
typedef struct _GetFan12RPM_OUT
{
    // GetFan12RPM
    ULONG Data;
    #define GetFan12RPM_OUT_Data_SIZE sizeof(ULONG)
    #define GetFan12RPM_OUT_Data_ID 1

} GetFan12RPM_OUT, *PGetFan12RPM_OUT;

#define GetFan12RPM_OUT_SIZE (FIELD_OFFSET(GetFan12RPM_OUT, Data) + GetFan12RPM_OUT_Data_SIZE)

#define GetFan34RPM     113
typedef struct _GetFan34RPM_OUT
{
    // GetFan34RPM
    ULONG Data;
    #define GetFan34RPM_OUT_Data_SIZE sizeof(ULONG)
    #define GetFan34RPM_OUT_Data_ID 1

} GetFan34RPM_OUT, *PGetFan34RPM_OUT;

#define GetFan34RPM_OUT_SIZE (FIELD_OFFSET(GetFan34RPM_OUT, Data) + GetFan34RPM_OUT_Data_SIZE)

#define GetH2RAMData     115
typedef struct _GetH2RAMData_OUT
{
    // GetH2RAMData
    ULONG Data;
    #define GetH2RAMData_OUT_Data_SIZE sizeof(ULONG)
    #define GetH2RAMData_OUT_Data_ID 1

} GetH2RAMData_OUT, *PGetH2RAMData_OUT;

#define GetH2RAMData_OUT_SIZE (FIELD_OFFSET(GetH2RAMData_OUT, Data) + GetH2RAMData_OUT_Data_SIZE)

#define AirplaneButton     109
typedef struct _AirplaneButton_OUT
{
    // AirplaneButton
    ULONG Data;
    #define AirplaneButton_OUT_Data_SIZE sizeof(ULONG)
    #define AirplaneButton_OUT_Data_ID 1

} AirplaneButton_OUT, *PAirplaneButton_OUT;

#define AirplaneButton_OUT_SIZE (FIELD_OFFSET(AirplaneButton_OUT, Data) + AirplaneButton_OUT_Data_SIZE)


#endif
