//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRemoteControlCheckExt-Protocol.h"

@interface MMMusicPlayerSessionMgr : NSObject <IRemoteControlCheckExt>
{
}

+ (id)sharedMusicPlayerSessionMgr;
- (void)iRemoteControlCheckShouldPrevTrack;
- (void)iRemoteControlCheckShouldNextTrack;
- (void)iRemoteControlCheckPluginOff;
- (void)iRemoteControlCheckShouldStop;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)notifyNewPlayStateChange:(id)arg1;
- (void)endNewMusicPlayerAudioSession:(id)arg1;
- (void)beginNewMusicPlayerAudioSession:(id)arg1;
- (void)notifyPlayStateChange:(id)arg1;
- (void)endMusicPlayerAudioSession:(id)arg1;
- (void)beginMusicPlayerAudioSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end
