#pragma once

struct LogText
{
	// Match logs
	static FString LT_StartMatch()
	{
		return FString("Start Match");
	}

	static FString LT_InterruptMatch()
	{
		return FString("Interrupt Match");
	}
	
	static FString LT_EndMatch()
	{
		return FString("End Match");
	}


	// User logs
	static FString LT_Shift(const FString UserName, const FVector PointFrom, const FVector PointTo)
	{
		const FString Point1 = PointFrom.ToString();
		const FString Point2 = PointTo.ToString();


		FString Message = FString::Printf(
			TEXT("User \"%s\" moved from point (%s) to point (%s)"), *UserName, *Point1, *Point2);

		return Message;
	}

	static FString LT_Attack(const FString UserAttacker, const FString UserVictim, const float Damage)
	{
		FString Message = FString::Printf(
			TEXT("User \"%s\" attack user \"%s\" and deal (%f) damage"), *UserAttacker, *UserVictim, Damage);

		return Message;
	}

	static FString LT_GetDamage(const FString UserAttacker, const FString UserVictim, const float Damage)
	{
		FString Message = FString::Printf(
			TEXT("User \"%s\" get (%f) damage from user \"%s\""), *UserVictim, Damage, *UserAttacker);

		return Message;
	}

	static FString LT_Die(const FString UserAttacker, const FString UserVictim)
	{
		FString Message = FString::Printf(
			TEXT("User \"%s\" died from \"%s\""), *UserVictim, *UserAttacker);

		return Message;
	}
};
