/*
**	$Id$
**	Generated by IDLTool 53.24
**	Do not edit
**
**	AutoInit stub for identify
**
**	Copyright (c) 2010 Hyperion Entertainment CVBA.
**	All Rights Reserved.
*/

#include <exec/types.h>
#include <libraries/identify.h>

#include <interfaces/identify.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <stdlib.h>

struct IdentifyIFace * IdentifyIFace = NULL;
static struct Library * __IdentifyBase = NULL;
static struct IdentifyIFace * __IdentifyIFace = NULL;

/****************************************************************************/

extern struct Library * IdentifyBase;

/****************************************************************************/

void identify_main_constructor(void)
{
    if (IdentifyIFace != NULL)
    {
        return; /* Someone was quicker */
    }
    if (IdentifyBase == NULL) /* Library base is NULL, we need to open it */
    {
        /* We were called before the base constructor.
         * This means we will be called _after_ the base destructor.
         * So we cant drop the interface _after_ closing the last library base,
         * we just open the library here which ensures that.
         */
        __IdentifyBase = IdentifyBase = IExec->OpenLibrary("identify.library", 0);
        if (IdentifyBase == NULL)
        {
            IDOS->PutErrStr("ERROR: Failed to open 'identify.library'.\n");
            abort();
        }
    }

    __IdentifyIFace = IdentifyIFace = (struct IdentifyIFace *)IExec->GetInterface((struct Library *)IdentifyBase, "main", 1, NULL);
    if (IdentifyIFace == NULL)
    {
        IDOS->PutErrStr("ERROR: Failed to get 'main' V1 interface for 'identify.library'.\n");
        abort();
    }
}
__attribute__((section(".ctors.zzzy"))) static void
(*identify_main_constructor_ptr)(void) USED = identify_main_constructor;

/****************************************************************************/

void identify_main_destructor(void)
{
    if (__IdentifyIFace)
    {
        IExec->DropInterface ((struct Interface *)__IdentifyIFace);
    }
    if (__IdentifyBase)
    {
        IExec->CloseLibrary(__IdentifyBase);
    }
}
__attribute__((section(".dtors.zzzy"))) static void
(*identify_main_destructor_ptr)(void) USED = identify_main_destructor;

/****************************************************************************/

