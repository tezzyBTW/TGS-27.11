#pragma once

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "CoreUObject_parameters.hpp"

namespace SDK
{

class UObject* UObject::FindObjectFastImpl(const std::string& Name, EClassCastFlags RequiredType)
{
	for (int i = 0; i < GObjects->Num(); ++i)
	{
		UObject* Object = GObjects->GetByIndex(i);
	
		if (!Object)
			continue;
		
		if (Object->HasTypeFlag(RequiredType) && Object->GetName() == Name)
			return Object;
	}

	return nullptr;
}

class UObject* UObject::FindObjectImpl(const std::string& FullName, EClassCastFlags RequiredType)
{
	for (int i = 0; i < GObjects->Num(); ++i)
	{
		UObject* Object = GObjects->GetByIndex(i);
	
		if (!Object)
			continue;
		
		if (Object->HasTypeFlag(RequiredType) && Object->GetFullName() == FullName)
			return Object;
	}

	return nullptr;
}

std::string UObject::GetFullName() const
{
	if (this && Class)
	{
		std::string Temp;

		for (UObject* NextOuter = Outer; NextOuter; NextOuter = NextOuter->Outer)
		{
			Temp = NextOuter->GetName() + "." + Temp;
		}

		std::string Name = Class->GetName();
		Name += " ";
		Name += Temp;
		Name += GetName();

		return Name;
	}

	return "None";
}

std::string UObject::GetName() const
{
	return this ? Name.ToString() : "None";
}

bool UObject::HasTypeFlag(EClassCastFlags TypeFlags) const
{
	return (Class->CastFlags & TypeFlags);
}

bool UObject::IsA(EClassCastFlags TypeFlags) const
{
	return (Class->CastFlags & TypeFlags);
}

bool UObject::IsA(class UClass* TypeClass) const
{
	return Class->IsSubclassOf(TypeClass);
}

bool UObject::IsDefaultObject() const
{
	return (Flags & EObjectFlags::ClassDefaultObject);
}

void UObject::ExecuteUbergraph(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Object", "ExecuteUbergraph");

	Params::Object_ExecuteUbergraph Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

bool UStruct::IsSubclassOf(const UStruct* Base) const
{
	if (!Base)
		return false;

	for (const UStruct* Struct = this; Struct; Struct = Struct->Super)
	{
		if (Struct == Base)
			return true;
	}

	return false;
}

class UFunction* UClass::GetFunction(const std::string& ClassName, const std::string& FuncName) const
{
	for(const UStruct* Clss = this; Clss; Clss = Clss->Super)
	{
		if (Clss->GetName() != ClassName)
			continue;
			
		for (UField* Field = Clss->Children; Field; Field = Field->Next)
		{
			if(Field->HasTypeFlag(EClassCastFlags::Function) && Field->GetName() == FuncName)
				return static_cast<class UFunction*>(Field);
		}
	}

	return nullptr;
}

}