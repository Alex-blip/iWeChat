//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FaceProHandle : NSObject
{
    struct FacePro *mFacePro;
    struct mutex mtx;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)screenshotOfVideoStream:(struct __CVBuffer *)arg1;
- (basic_string_a490aa4c)engineGetReadNumbers;
- (basic_string_a490aa4c)engineGetData:(int)arg1;
- (int)engineRelease;
- (basic_string_a490aa4c)engineVersion;
- (vector_e0f2bd7e)engineGetAllMotion;
- (int)engineGetPoseMotion;
- (int)engineGetCurrMotion;
- (basic_string_a490aa4c)engineGetCurrMotionData;
- (int)engineReleaseCurrMotion;
- (int)engineNextMotion;
- (void)engineSetVoiceData:(char *)arg1 withSize:(int)arg2;
- (void)engineGroupChange;
- (void)engineStartRecord;
- (int)engineGetFaceYaw;
- (void)engineGetFaceRect:(struct CGRect *)arg1;
- (void)engineSetFaceFrame:(struct CGRect)arg1;
- (int)engineFaceProcess:(struct opaqueCMSampleBuffer *)arg1 image:(id *)arg2 mode:(_Bool)arg3;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 bioId:(id)arg2;

@end
