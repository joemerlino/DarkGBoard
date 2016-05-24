//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MatchDetails_Time, NSString, ResultData, VideoInformation;

@interface MatchDetails_Round_PlayByPlay : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ResultData *awayParticipantResult; // @dynamic awayParticipantResult;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasAwayParticipantResult; // @dynamic hasAwayParticipantResult;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasHomeParticipantResult; // @dynamic hasHomeParticipantResult;
@property(nonatomic) _Bool hasPlayedBy; // @dynamic hasPlayedBy;
@property(nonatomic) _Bool hasTime; // @dynamic hasTime;
@property(nonatomic) _Bool hasVideoInfo; // @dynamic hasVideoInfo;
@property(retain, nonatomic) ResultData *homeParticipantResult; // @dynamic homeParticipantResult;
@property(nonatomic) int playedBy; // @dynamic playedBy;
@property(retain, nonatomic) MatchDetails_Time *time; // @dynamic time;
@property(retain, nonatomic) VideoInformation *videoInfo; // @dynamic videoInfo;

@end

