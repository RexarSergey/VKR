#pragma once

struct LogStart
{
	static FString LS_Warning()
	{
		return FString("[Warning]: ");
	}

	static FString LS_Error()
	{
		return FString("[Error]: ");
	}

	static FString LS_Action()
	{
		const FString CurrentTIme = FDateTime::Now().ToString();

		FString Message = FString::Printf(TEXT("[%s]: "), *CurrentTIme);
		
		return Message;
	}
	
};
