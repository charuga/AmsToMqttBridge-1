#ifndef _AIDON_h
#define _AIDON_h

enum class Aidon : byte {
	List1 = 0x01,
	List2 = 0x0D,
	List3 = 0x12
};

enum class Aidon_List1 {
	ListSize,
	ActivePowerImported
};

enum class Aidon_List2 {
	ListSize,
	ListVersionIdentifier,
	MeterID,
	MeterType,
	ActiveImportPower,
	ActiveExportPower,
	ReactiveImportPower,
	ReactiveExportPower,
	CurrentL1,
	CurrentL2,
	CurrentL3,
	VoltageL1,
	VoltageL2,
	VoltageL3
};

enum class Aidon_List3 {
	ListSize,
	ListVersionIdentifier,
	MeterID,
	MeterType,
	ActiveImportPower,
	ActiveExportPower,
	ReactiveImportPower,
	ReactiveExportPower,
	CurrentL1,
	CurrentL2,
	CurrentL3,
	VoltageL1,
	VoltageL2,
	VoltageL3,
	MeterClock,
	CumulativeActiveImportEnergy,
	CumulativeActiveExportEnergy,
	CumulativeReactiveImportEnergy,
	CumulativeReactiveExportEnergy
};

#endif
