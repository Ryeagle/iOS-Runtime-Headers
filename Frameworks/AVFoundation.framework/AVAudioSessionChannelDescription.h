/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {
    void *_impl;
}

@property(readonly) NSString * channelName;
@property(readonly) unsigned int channelNumber;
@property(readonly) NSString * owningPortUID;

+ (id)privateCreateChannelDescriptionsArrayWithCFArray:(struct __CFArray { }*)arg1 portUID:(struct __CFString { }*)arg2;
+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary { }*)arg1 portUID:(struct __CFString { }*)arg2 channelNumber:(unsigned long)arg3;

- (id)channelName;
- (unsigned int)channelNumber;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)owningPortUID;
- (struct ChannelDescriptionImpl { id x1; id x2; unsigned int x3; unsigned int x4; }*)privateGetImplementation;

@end