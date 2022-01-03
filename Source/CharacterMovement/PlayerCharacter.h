// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class CHARACTERMOVEMENT_API APlayerCharacter : public ACharacter
{

	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter() 
	{
		// Instantiating your class Components

		SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));

		CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));

		//Set the location and rotation of the Character Mesh Transform

		GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -90.0f), FQuat(FRotator(0.0f, -90.0f, 0.0f)));

		// Attaching your class Components to the default character's Skeletal Mesh Component.

		SpringArmComp->SetupAttachment(GetMesh());

		CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

		//Setting class variables of the spring arm

		SpringArmComp->bUsePawnControlRotation = true;

		//Setting class variables of the Character movement component

		GetCharacterMovement()->bOrientRotationToMovement = true;

		GetCharacterMovement()->bUseControllerDesiredRotation = true;

		GetCharacterMovement()->bIgnoreBaseRotation = true;
	};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Spring Arm Component to follow the camera behind the player
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class USpringArmComponent* SpringArmComp;

	// Player follow camera
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UCameraComponent* CameraComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
