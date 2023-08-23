#ifndef GUARD_BATTLE_AI_SWITCH_ITEMS_H
#define GUARD_BATTLE_AI_SWITCH_ITEMS_H

void GetAIPartyIndexes(u32 battlerId, s32 *firstId, s32 *lastId);
void AI_TrySwitchOrUseItem(void);
u8 GetMostSuitableMonToSwitchInto(void);
u8 GetMostSuitableMonToSwitchIntoAfterKO(void);
bool32 ShouldSwitch(u8 mostSuitableMonId);

#endif // GUARD_BATTLE_AI_SWITCH_ITEMS_H
