// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT9_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	// 변수를 블루프린트에서 읽고 쓸 수 있게 설정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	int32 MyVariable;

	// 블루프린트에서 호출 가능한 함수 설정
	UFUNCTION(BlueprintCallable, Category = "MyFunctions")
	void MyFunction();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
