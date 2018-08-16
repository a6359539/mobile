// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAM_MyCharacterVER2_generated_h
#error "MyCharacterVER2.generated.h already included, missing '#pragma once' in MyCharacterVER2.h"
#endif
#define JAM_MyCharacterVER2_generated_h

#define hiyo_Source_jam_MyCharacterVER2_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define hiyo_Source_jam_MyCharacterVER2_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define hiyo_Source_jam_MyCharacterVER2_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacterVER2(); \
	friend JAM_API class UClass* Z_Construct_UClass_AMyCharacterVER2(); \
public: \
	DECLARE_CLASS(AMyCharacterVER2, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/jam"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterVER2) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define hiyo_Source_jam_MyCharacterVER2_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacterVER2(); \
	friend JAM_API class UClass* Z_Construct_UClass_AMyCharacterVER2(); \
public: \
	DECLARE_CLASS(AMyCharacterVER2, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/jam"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterVER2) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define hiyo_Source_jam_MyCharacterVER2_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacterVER2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacterVER2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterVER2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterVER2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacterVER2(AMyCharacterVER2&&); \
	NO_API AMyCharacterVER2(const AMyCharacterVER2&); \
public:


#define hiyo_Source_jam_MyCharacterVER2_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacterVER2(AMyCharacterVER2&&); \
	NO_API AMyCharacterVER2(const AMyCharacterVER2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterVER2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterVER2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacterVER2)


#define hiyo_Source_jam_MyCharacterVER2_h_12_PRIVATE_PROPERTY_OFFSET
#define hiyo_Source_jam_MyCharacterVER2_h_9_PROLOG
#define hiyo_Source_jam_MyCharacterVER2_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	hiyo_Source_jam_MyCharacterVER2_h_12_PRIVATE_PROPERTY_OFFSET \
	hiyo_Source_jam_MyCharacterVER2_h_12_RPC_WRAPPERS \
	hiyo_Source_jam_MyCharacterVER2_h_12_INCLASS \
	hiyo_Source_jam_MyCharacterVER2_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define hiyo_Source_jam_MyCharacterVER2_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	hiyo_Source_jam_MyCharacterVER2_h_12_PRIVATE_PROPERTY_OFFSET \
	hiyo_Source_jam_MyCharacterVER2_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	hiyo_Source_jam_MyCharacterVER2_h_12_INCLASS_NO_PURE_DECLS \
	hiyo_Source_jam_MyCharacterVER2_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID hiyo_Source_jam_MyCharacterVER2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
