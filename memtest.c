#include <efi.h>
#include <efilib.h>

EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable){
	InitializeLib(ImageHandle, SystemTable);
	uefi_call_wrapper(SystemTable->ConOut->OutputString, 2, SystemTable->ConOut, L"hello buefiiiitches!\n\r");
	return EFI_SUCCESS;
}
