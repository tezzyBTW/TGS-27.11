#include "framework.h"

DWORD WINAPI Main(LPVOID)
{
	AllocConsole();
	FILE* File;
	freopen_s(&File, "CONOUT$", "w", stdout);
	SetConsoleTitleA("TGS - 27.11 || Hooking...");

	MH_Initialize();

	Sleep(2500);

	UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
	UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Asteria_Terrain", nullptr);

	MH_EnableHook(MH_ALL_HOOKS);

	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ReasonForCall, LPVOID lpReserved)
{
	switch (ReasonForCall)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(0, 0, Main, 0, 0, 0);
		break;
	default:
		break;
	}
	return TRUE;
}