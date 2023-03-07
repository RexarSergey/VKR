// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "LogStart.h"
#include "LogText.h"

#include "LogMessages.generated.h"


/**
 * 
 */
UCLASS()
class SANDBOXML_API ULogMessages : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	// Match logs
	UFUNCTION(BlueprintCallable, Category="Log Messages")
	static FString LogStartMatchWarning();

	UFUNCTION(BlueprintCallable, Category="Log Messages")
	static FString LogInterruptMatchWarning();

	UFUNCTION(BlueprintCallable, Category="Log Messages")
	static FString LogEndMatchWarning();
	
	// User logs
	UFUNCTION(BlueprintCallable, Category="Log Messages")
	static FString LogShiftAction(const FString UserName, const FVector PointFrom, const FVector PointTo);

	UFUNCTION(BlueprintCallable, Category="Log Messages")
	static FString LogAttackAction(const FString UserAttacker, const FString UserVictim, const float Damage);

	UFUNCTION(BlueprintCallable, Category="Log Messages")
	static FString LogGetDamageAction(const FString UserAttacker, const FString UserVictim, const float Damage);

	UFUNCTION(BlueprintCallable, Category="Log Messages")
	static FString LogDieAction(const FString UserAttacker, const FString UserVictim);
};
