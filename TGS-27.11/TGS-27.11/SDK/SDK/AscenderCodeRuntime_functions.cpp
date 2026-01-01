#pragma once

#include "Basic.hpp"
#include "AscenderCodeRuntime_classes.hpp"
#include "AscenderCodeRuntime_parameters.hpp"


namespace SDK
{

void UFortCheatManager_AscenderZipline::RemoveAscenders(const bool bRemoveAscendersOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_AscenderZipline", "RemoveAscenders");

	Params::FortCheatManager_AscenderZipline_RemoveAscenders Parms{};

	Parms.bRemoveAscendersOn = bRemoveAscendersOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandlePlayerStartedUsingHandle");

	Params::FortAscenderZipline_BP_HandlePlayerStartedUsingHandle Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAscenderZipline::BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandlePlayerStoppedUsingHandle");

	Params::FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAscenderZipline::BP_HandleStartedLoweringCable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStartedLoweringCable");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAscenderZipline::BP_HandleStartedLoweringHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStartedLoweringHandle");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAscenderZipline::BP_HandleStoppedLoweringCable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStoppedLoweringCable");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAscenderZipline::BP_HandleStoppedLoweringHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStoppedLoweringHandle");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAscenderZipline::BP_HandleUpdatedLoweringCable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleUpdatedLoweringCable");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAscenderZipline::BP_HandleUpdatedLoweringHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleUpdatedLoweringHandle");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAscenderZipline::HandleFloorActorDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "HandleFloorActorDestroyed");

	Params::FortAscenderZipline_HandleFloorActorDestroyed Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::HandleFloorActorHealthChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "HandleFloorActorHealthChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::HandlePawnUsingHandleDied(class AFortPawn* DeadPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "HandlePawnUsingHandleDied");

	Params::FortAscenderZipline_HandlePawnUsingHandleDied Parms{};

	Parms.DeadPawn = DeadPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::OnRep_InitialSplineEndLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "OnRep_InitialSplineEndLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::OnRep_PawnUsingHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "OnRep_PawnUsingHandle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::OnRep_TargetSplineEndLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "OnRep_TargetSplineEndLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::SetupAscender(const bool bFromConstruction, const bool bFromReplication)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "SetupAscender");

	Params::FortAscenderZipline_SetupAscender Parms{};

	Parms.bFromConstruction = bFromConstruction;
	Parms.bFromReplication = bFromReplication;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAscenderZipline::ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "ApplyStructureDamage");

	Params::FortAscenderZipline_ApplyStructureDamage Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.DamageSource = DamageSource;

	UObject::ProcessEvent(Func, &Parms);
}

class UPrimitiveComponent* AFortAscenderZipline::GetHandleComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "GetHandleComponent");

	Params::FortAscenderZipline_GetHandleComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UPrimitiveComponent* AFortAscenderZipline::GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "GetInteractComponentOverride");

	Params::FortAscenderZipline_GetInteractComponentOverride Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortPlayerPawn* AFortAscenderZipline::GetPawnUsingHandle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "GetPawnUsingHandle");

	Params::FortAscenderZipline_GetPawnUsingHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPrimitiveComponent* AFortAscenderZipline::GetTopComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAscenderZipline", "GetTopComponent");

	Params::FortAscenderZipline_GetTopComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}