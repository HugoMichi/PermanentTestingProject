// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PERMANENTTESTING_PermanentTestingProjectile_generated_h
#error "PermanentTestingProjectile.generated.h already included, missing '#pragma once' in PermanentTestingProjectile.h"
#endif
#define PERMANENTTESTING_PermanentTestingProjectile_generated_h

#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPermanentTestingProjectile(); \
	friend PERMANENTTESTING_API class UClass* Z_Construct_UClass_APermanentTestingProjectile(); \
public: \
	DECLARE_CLASS(APermanentTestingProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PermanentTesting"), NO_API) \
	DECLARE_SERIALIZER(APermanentTestingProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPermanentTestingProjectile(); \
	friend PERMANENTTESTING_API class UClass* Z_Construct_UClass_APermanentTestingProjectile(); \
public: \
	DECLARE_CLASS(APermanentTestingProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PermanentTesting"), NO_API) \
	DECLARE_SERIALIZER(APermanentTestingProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APermanentTestingProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APermanentTestingProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APermanentTestingProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APermanentTestingProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APermanentTestingProjectile(APermanentTestingProjectile&&); \
	NO_API APermanentTestingProjectile(const APermanentTestingProjectile&); \
public:


#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APermanentTestingProjectile(APermanentTestingProjectile&&); \
	NO_API APermanentTestingProjectile(const APermanentTestingProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APermanentTestingProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APermanentTestingProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APermanentTestingProjectile)


#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APermanentTestingProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APermanentTestingProjectile, ProjectileMovement); }


#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_9_PROLOG
#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_RPC_WRAPPERS \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_INCLASS \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_INCLASS_NO_PURE_DECLS \
	PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PermanentTesting_Source_PermanentTesting_PermanentTestingProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
