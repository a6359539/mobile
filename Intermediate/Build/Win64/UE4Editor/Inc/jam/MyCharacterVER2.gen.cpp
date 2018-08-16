// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyCharacterVER2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterVER2() {}
// Cross Module References
	JAM_API UClass* Z_Construct_UClass_AMyCharacterVER2_NoRegister();
	JAM_API UClass* Z_Construct_UClass_AMyCharacterVER2();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_jam();
	JAM_API UFunction* Z_Construct_UFunction_AMyCharacterVER2_MoveForward();
	JAM_API UFunction* Z_Construct_UFunction_AMyCharacterVER2_MoveRight();
// End Cross Module References
	void AMyCharacterVER2::StaticRegisterNativesAMyCharacterVER2()
	{
		UClass* Class = AMyCharacterVER2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AMyCharacterVER2::execMoveForward },
			{ "MoveRight", &AMyCharacterVER2::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMyCharacterVER2_MoveForward()
	{
		struct MyCharacterVER2_eventMoveForward_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacterVER2_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacterVER2.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterVER2, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(MyCharacterVER2_eventMoveForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyCharacterVER2_MoveRight()
	{
		struct MyCharacterVER2_eventMoveRight_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacterVER2_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacterVER2.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacterVER2, "MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(MyCharacterVER2_eventMoveRight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacterVER2_NoRegister()
	{
		return AMyCharacterVER2::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCharacterVER2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_jam,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyCharacterVER2_MoveForward, "MoveForward" }, // 3794347115
				{ &Z_Construct_UFunction_AMyCharacterVER2_MoveRight, "MoveRight" }, // 3861506405
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyCharacterVER2.h" },
				{ "ModuleRelativePath", "MyCharacterVER2.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_possessing_MetaData[] = {
				{ "Category", "MyCharacterVER2" },
				{ "ModuleRelativePath", "MyCharacterVER2.h" },
			};
#endif
			auto NewProp_possessing_SetBit = [](void* Obj){ ((AMyCharacterVER2*)Obj)->possessing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_possessing = { UE4CodeGen_Private::EPropertyClass::Bool, "possessing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacterVER2), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_possessing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_possessing_MetaData, ARRAY_COUNT(NewProp_possessing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LR_MetaData[] = {
				{ "Category", "MyCharacterVER2" },
				{ "ModuleRelativePath", "MyCharacterVER2.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LR = { UE4CodeGen_Private::EPropertyClass::Float, "LR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AMyCharacterVER2, LR), METADATA_PARAMS(NewProp_LR_MetaData, ARRAY_COUNT(NewProp_LR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FB_MetaData[] = {
				{ "Category", "MyCharacterVER2" },
				{ "ModuleRelativePath", "MyCharacterVER2.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FB = { UE4CodeGen_Private::EPropertyClass::Float, "FB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AMyCharacterVER2, FB), METADATA_PARAMS(NewProp_FB_MetaData, ARRAY_COUNT(NewProp_FB_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_possessing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FB,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyCharacterVER2>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyCharacterVER2::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacterVER2, 4131565161);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacterVER2(Z_Construct_UClass_AMyCharacterVER2, &AMyCharacterVER2::StaticClass, TEXT("/Script/jam"), TEXT("AMyCharacterVER2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterVER2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
