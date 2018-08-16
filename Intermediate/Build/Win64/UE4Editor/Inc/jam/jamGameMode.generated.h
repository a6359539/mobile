// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAM_jamGameMode_generated_h
#error "jamGameMode.generated.h already included, missing '#pragma once' in jamGameMode.h"
#endif
#define JAM_jamGameMode_generated_h

#define hiyo_Source_jam_jamGameMode_h_12_RPC_WRAPPERS
#define hiyo_Source_jam_jamGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define hiyo_Source_jam_jamGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAjamGameMode(); \
	friend JAM_API class UClass* Z_Construct_UClass_AjamGameMode(); \
public: \
	DECLARE_CLASS(AjamGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/jam"), JAM_API) \
	DECLARE_SERIALIZER(AjamGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define hiyo_Source_jam_jamGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAjamGameMode(); \
	friend JAM_API class UClass* Z_Construct_UClass_AjamGameMode(); \
public: \
	DECLARE_CLASS(AjamGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/jam"), JAM_API) \
	DECLARE_SERIALIZER(AjamGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define hiyo_Source_jam_jamGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	JAM_API AjamGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AjamGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(JAM_API, AjamGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AjamGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	JAM_API AjamGameMode(AjamGameMode&&); \
	JAM_API AjamGameMode(const AjamGameMode&); \
public:


#define hiyo_Source_jam_jamGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	JAM_API AjamGameMode(AjamGameMode&&); \
	JAM_API AjamGameMode(const AjamGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(JAM_API, AjamGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AjamGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AjamGameMode)


#define hiyo_Source_jam_jamGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define hiyo_Source_jam_jamGameMode_h_9_PROLOG
#define hiyo_Source_jam_jamGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	hiyo_Source_jam_jamGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	hiyo_Source_jam_jamGameMode_h_12_RPC_WRAPPERS \
	hiyo_Source_jam_jamGameMode_h_12_INCLASS \
	hiyo_Source_jam_jamGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define hiyo_Source_jam_jamGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	hiyo_Source_jam_jamGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	hiyo_Source_jam_jamGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	hiyo_Source_jam_jamGameMode_h_12_INCLASS_NO_PURE_DECLS \
	hiyo_Source_jam_jamGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID hiyo_Source_jam_jamGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
