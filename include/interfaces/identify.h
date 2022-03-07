#ifndef IDENTIFY_INTERFACE_DEF_H
#define IDENTIFY_INTERFACE_DEF_H

/*
** This file was machine generated by idltool 53.24.
** Do not edit
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef LIBRARIES_IDENTIFY_H
#include <libraries/identify.h>
#endif

#ifdef __cplusplus
#ifdef __USE_AMIGAOS_NAMESPACE__
namespace AmigaOS {
#endif
extern "C" {
#endif

struct IdentifyIFace
{
	struct InterfaceData Data;

	ULONG APICALL (*Obtain)(struct IdentifyIFace *Self);
	ULONG APICALL (*Release)(struct IdentifyIFace *Self);
	APTR Expunge_UNIMPLEMENTED;
	APTR Clone_UNIMPLEMENTED;
	LONG APICALL (*IdExpansion)(struct IdentifyIFace *Self, struct TagItem * Tags);
	STRPTR APICALL (*IdHardware)(struct IdentifyIFace *Self, ULONG value, struct TagItem * Tags);
	LONG APICALL (*IdAlert)(struct IdentifyIFace *Self, ULONG value, struct TagItem * Tags);
	void APICALL (*IdFunction)(struct IdentifyIFace *Self, STRPTR str, LONG value, struct TagItem * Tags);
	ULONG APICALL (*IdHardwareNum)(struct IdentifyIFace *Self, ULONG value, struct TagItem * Tags);
	void APICALL (*IdHardwareUpdate)(struct IdentifyIFace *Self);
	void APICALL (*IdFormatString)(struct IdentifyIFace *Self, STRPTR String, STRPTR Buffer, ULONG BufferLength, struct TagItem * Tags);
	ULONG APICALL (*IdEstimateFormatSize)(struct IdentifyIFace *Self, STRPTR str, struct TagItem * Tags);
};

#ifdef __cplusplus
}
#ifdef __USE_AMIGAOS_NAMESPACE__
}
#endif
#endif

#endif /* IDENTIFY_INTERFACE_DEF_H */
