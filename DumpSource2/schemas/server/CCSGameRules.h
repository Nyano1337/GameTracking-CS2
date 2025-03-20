class CCSGameRules : public CTeamplayRules
{
	bool m_bFreezePeriod;
	bool m_bWarmupPeriod;
	GameTime_t m_fWarmupPeriodEnd;
	GameTime_t m_fWarmupPeriodStart;
	bool m_bServerPaused;
	bool m_bTerroristTimeOutActive;
	bool m_bCTTimeOutActive;
	float32 m_flTerroristTimeOutRemaining;
	float32 m_flCTTimeOutRemaining;
	int32 m_nTerroristTimeOuts;
	int32 m_nCTTimeOuts;
	bool m_bTechnicalTimeOut;
	bool m_bMatchWaitingForResume;
	int32 m_iRoundTime;
	float32 m_fMatchStartTime;
	GameTime_t m_fRoundStartTime;
	GameTime_t m_flRestartRoundTime;
	bool m_bGameRestart;
	float32 m_flGameStartTime;
	float32 m_timeUntilNextPhaseStarts;
	int32 m_gamePhase;
	int32 m_totalRoundsPlayed;
	int32 m_nRoundsPlayedThisPhase;
	int32 m_nOvertimePlaying;
	int32 m_iHostagesRemaining;
	bool m_bAnyHostageReached;
	bool m_bMapHasBombTarget;
	bool m_bMapHasRescueZone;
	bool m_bMapHasBuyZone;
	bool m_bIsQueuedMatchmaking;
	int32 m_nQueuedMatchmakingMode;
	bool m_bIsValveDS;
	bool m_bLogoMap;
	bool m_bPlayAllStepSoundsOnServer;
	int32 m_iSpectatorSlotCount;
	int32 m_MatchDevice;
	bool m_bHasMatchStarted;
	int32 m_nNextMapInMapgroup;
	char[512] m_szTournamentEventName;
	char[512] m_szTournamentEventStage;
	char[512] m_szMatchStatTxt;
	char[512] m_szTournamentPredictionsTxt;
	int32 m_nTournamentPredictionsPct;
	GameTime_t m_flCMMItemDropRevealStartTime;
	GameTime_t m_flCMMItemDropRevealEndTime;
	bool m_bIsDroppingItems;
	bool m_bIsQuestEligible;
	bool m_bIsHltvActive;
	uint16[100] m_arrProhibitedItemIndices;
	uint32[4] m_arrTournamentActiveCasterAccounts;
	int32 m_numBestOfMaps;
	int32 m_nHalloweenMaskListSeed;
	bool m_bBombDropped;
	bool m_bBombPlanted;
	int32 m_iRoundWinStatus;
	int32 m_eRoundWinReason;
	bool m_bTCantBuy;
	bool m_bCTCantBuy;
	int32[30] m_iMatchStats_RoundResults;
	int32[30] m_iMatchStats_PlayersAlive_CT;
	int32[30] m_iMatchStats_PlayersAlive_T;
	float32[32] m_TeamRespawnWaveTimes;
	GameTime_t[32] m_flNextRespawnWave;
	int32 m_nServerQuestID;
	Vector m_vMinimapMins;
	Vector m_vMinimapMaxs;
	float32[8] m_MinimapVerticalSectionHeights;
	bool m_bSpawnedTerrorHuntHeavy;
	uint64 m_ullLocalMatchID;
	int32[10] m_nEndMatchMapGroupVoteTypes;
	int32[10] m_nEndMatchMapGroupVoteOptions;
	int32 m_nEndMatchMapVoteWinner;
	int32 m_iNumConsecutiveCTLoses;
	int32 m_iNumConsecutiveTerroristLoses;
	bool m_bHasHostageBeenTouched;
	GameTime_t m_flIntermissionStartTime;
	GameTime_t m_flIntermissionEndTime;
	bool m_bLevelInitialized;
	int32 m_iTotalRoundsPlayed;
	int32 m_iUnBalancedRounds;
	bool m_endMatchOnRoundReset;
	bool m_endMatchOnThink;
	int32 m_iFreezeTime;
	int32 m_iNumTerrorist;
	int32 m_iNumCT;
	int32 m_iNumSpawnableTerrorist;
	int32 m_iNumSpawnableCT;
	CUtlVector< int32 > m_arrSelectedHostageSpawnIndices;
	int32 m_nSpawnPointsRandomSeed;
	bool m_bFirstConnected;
	bool m_bCompleteReset;
	bool m_bPickNewTeamsOnReset;
	bool m_bScrambleTeamsOnRestart;
	bool m_bSwapTeamsOnRestart;
	CUtlVector< int32 > m_nEndMatchTiedVotes;
	bool m_bNeedToAskPlayersForContinueVote;
	uint32 m_numQueuedMatchmakingAccounts;
	float32 m_fAvgPlayerRank;
	char* m_pQueuedMatchmakingReservationString;
	uint32 m_numTotalTournamentDrops;
	uint32 m_numSpectatorsCountMax;
	uint32 m_numSpectatorsCountMaxTV;
	uint32 m_numSpectatorsCountMaxLnk;
	bool m_bForceTeamChangeSilent;
	bool m_bLoadingRoundBackupData;
	int32 m_nMatchInfoShowType;
	float32 m_flMatchInfoDecidedTime;
	int32 mTeamDMLastWinningTeamNumber;
	float32 mTeamDMLastThinkTime;
	float32 m_flTeamDMLastAnnouncementTime;
	int32 m_iAccountTerrorist;
	int32 m_iAccountCT;
	int32 m_iSpawnPointCount_Terrorist;
	int32 m_iSpawnPointCount_CT;
	int32 m_iMaxNumTerrorists;
	int32 m_iMaxNumCTs;
	int32 m_iLoserBonusMostRecentTeam;
	float32 m_tmNextPeriodicThink;
	bool m_bVoiceWonMatchBragFired;
	float32 m_fWarmupNextChatNoticeTime;
	int32 m_iHostagesRescued;
	int32 m_iHostagesTouched;
	float32 m_flNextHostageAnnouncement;
	bool m_bNoTerroristsKilled;
	bool m_bNoCTsKilled;
	bool m_bNoEnemiesKilled;
	bool m_bCanDonateWeapons;
	float32 m_firstKillTime;
	float32 m_firstBloodTime;
	bool m_hostageWasInjured;
	bool m_hostageWasKilled;
	bool m_bVoteCalled;
	bool m_bServerVoteOnReset;
	float32 m_flVoteCheckThrottle;
	bool m_bBuyTimeEnded;
	int32 m_nLastFreezeEndBeep;
	bool m_bTargetBombed;
	bool m_bBombDefused;
	bool m_bMapHasBombZone;
	Vector m_vecMainCTSpawnPos;
	CUtlVector< SpawnPoint* > m_CTSpawnPointsMasterList;
	CUtlVector< SpawnPoint* > m_TerroristSpawnPointsMasterList;
	bool m_bRespawningAllRespawnablePlayers;
	int32 m_iNextCTSpawnPoint;
	float32 m_flCTSpawnPointUsedTime;
	int32 m_iNextTerroristSpawnPoint;
	float32 m_flTerroristSpawnPointUsedTime;
	CUtlVector< SpawnPoint* > m_CTSpawnPoints;
	CUtlVector< SpawnPoint* > m_TerroristSpawnPoints;
	bool m_bIsUnreservedGameServer;
	float32 m_fAutobalanceDisplayTime;
	bool m_bAllowWeaponSwitch;
	bool m_bRoundTimeWarningTriggered;
	GameTime_t m_phaseChangeAnnouncementTime;
	float32 m_fNextUpdateTeamClanNamesTime;
	GameTime_t m_flLastThinkTime;
	float32 m_fAccumulatedRoundOffDamage;
	int32 m_nShorthandedBonusLastEvalRound;
	int32 m_nMatchAbortedEarlyReason;
	bool m_bHasTriggeredRoundStartMusic;
	bool m_bSwitchingTeamsAtRoundReset;
	CCSGameModeRules* m_pGameModeRules;
	KeyValues3 m_BtGlobalBlackboard;
	CHandle< CBaseEntity > m_hPlayerResource;
	CRetakeGameRules m_RetakeRules;
	CUtlVector< int32 >[4] m_arrTeamUniqueKillWeaponsMatch;
	bool[4] m_bTeamLastKillUsedUniqueWeaponMatch;
	uint8 m_nMatchEndCount;
	int32 m_nTTeamIntroVariant;
	int32 m_nCTTeamIntroVariant;
	bool m_bTeamIntroPeriod;
	GameTime_t m_fTeamIntroPeriodEnd;
	bool m_bPlayedTeamIntroVO;
	int32 m_iRoundEndWinnerTeam;
	int32 m_eRoundEndReason;
	bool m_bRoundEndShowTimerDefend;
	int32 m_iRoundEndTimerTime;
	CUtlString m_sRoundEndFunFactToken;
	CPlayerSlot m_iRoundEndFunFactPlayerSlot;
	int32 m_iRoundEndFunFactData1;
	int32 m_iRoundEndFunFactData2;
	int32 m_iRoundEndFunFactData3;
	CUtlString m_sRoundEndMessage;
	int32 m_iRoundEndPlayerCount;
	bool m_bRoundEndNoMusic;
	int32 m_iRoundEndLegacy;
	uint8 m_nRoundEndCount;
	int32 m_iRoundStartRoundNumber;
	uint8 m_nRoundStartCount;
	float64 m_flLastPerfSampleTime;
};
