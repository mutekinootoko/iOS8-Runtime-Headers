/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSArray;

@interface AVAudioPayload : NSObject  {
    struct SoundDec_t { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; int x3; int x4; struct OpaqueAudioConverter {} *x5; char *x6; int x7; struct AudioStreamPacketDescription { long long x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; char *x9; int x10; int x11; int x12; int x13; int x14; int x15; unsigned int x16; unsigned int x17; } *encoder;
    int payload;
    unsigned long samplesPerFrame;
    unsigned long blockSize;
    unsigned long sampleRate;
    unsigned long encodedBytesPerFrame;
    unsigned long bundleHeaderBytes;
    unsigned long bitrate;
    NSArray *supportedBitrates;
    BOOL canBundle;
    BOOL canSetBitrate;
    BOOL forcingBitrate;
    BOOL useSBR;
    BOOL shouldReset;
    int format;
}

@property(readonly) int payload;
@property(readonly) unsigned long samplesPerFrame;
@property(readonly) unsigned long blockSize;
@property(readonly) unsigned long sampleRate;
@property(readonly) unsigned long encodedBytesPerFrame;
@property(readonly) unsigned long bundleHeaderBytes;
@property(readonly) unsigned long bitrate;
@property(readonly) NSArray * supportedBitrates;
@property(readonly) BOOL canBundle;
@property BOOL useSBR;

+ (BOOL)isPayloadSupported:(int)arg1;

- (void)createSupportedBitratesForAACELD;
- (unsigned long)aacBitrate;
- (void)createSupportedBitrates;
- (id)supportedBitrates;
- (void)setInternalSampleRate:(unsigned long)arg1;
- (BOOL)setupEncodeProperties;
- (BOOL)setupInputProperties;
- (unsigned long)encodedBytesPerFrame;
- (float)qualityForBitrate:(unsigned long)arg1;
- (BOOL)setBitrate:(unsigned long)arg1;
- (void)resetEncoder;
- (unsigned long)bundleHeaderBytes;
- (BOOL)createEncoderWithInternalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (BOOL)getMagicCookie:(char *)arg1 withLength:(unsigned int*)arg2;
- (void)setUseSBR:(BOOL)arg1;
- (id)initWithPayload:(int)arg1 blockSize:(unsigned long)arg2;
- (unsigned long)bitrate;
- (BOOL)useSBR;
- (unsigned long)blockSize;
- (BOOL)canBundle;
- (int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4;
- (unsigned long)samplesPerFrame;
- (unsigned long)sampleRate;
- (int)payload;
- (void)dealloc;
- (unsigned int)flags;

@end