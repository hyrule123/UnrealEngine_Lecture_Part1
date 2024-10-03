// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.generated.h"

/**
 * 
 */
UCLASS()
class LECTURE_API UPerson : public UObject
{
	GENERATED_BODY()
public:
	UPerson();

	//인터페이스 클래스로 올렸음
	//UFUNCTION()
	//virtual void DoLesson();
	
	const FString& GetPersonName() const;
	void SetPersonName(const FString& InName);
protected:
	UPROPERTY()
	FString PersonName;

	UPROPERTY()
	int32 Year;
	
};
