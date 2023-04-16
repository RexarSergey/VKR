#include "LogMessages.h"

FString ULogMessages::LogStartMatchWarning()
{
	return LogStart::LS_Warning() + LogText::LT_StartMatch();
}

FString ULogMessages::LogInterruptMatchWarning()
{
	return LogStart::LS_Warning() + LogText::LT_InterruptMatch();
}

FString ULogMessages::LogEndMatchWarning()
{
	return LogStart::LS_Warning() + LogText::LT_EndMatch();
}

FString ULogMessages::LogShiftAction(const FString UserName, const FVector PointFrom, const FVector PointTo)
{
	return LogStart::LS_Action() + LogText::LT_Shift(UserName, PointFrom, PointTo);
}

FString ULogMessages::LogAttackAction(const FString UserAttacker, const FString UserVictim, const float Damage)
{
	return LogStart::LS_Action() + LogText::LT_Attack(UserAttacker, UserVictim, Damage);
}

FString ULogMessages::LogGetDamageAction(const FString UserAttacker, const FString UserVictim, const float Damage)
{
	return LogStart::LS_Action() + LogText::LT_GetDamage(UserAttacker, UserVictim, Damage);
}

FString ULogMessages::LogDieAction(const FString UserAttacker, const FString UserVictim)
{
	return LogStart::LS_Action() + LogText::LT_Die(UserAttacker, UserVictim);
}
