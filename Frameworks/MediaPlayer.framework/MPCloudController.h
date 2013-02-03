/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class HSSagaClient;

@interface MPCloudController : NSObject {
    BOOL _isCloudEnabled;
    BOOL _isUpdateInProgress;
    HSSagaClient *_sagaClient;
}

@property(readonly) BOOL hasCloudLockerAccount;
@property(readonly) BOOL isCloudEnabled;
@property(readonly) BOOL isGeniusEnabled;
@property(readonly) BOOL isUpdateInProgress;

+ (id)sharedCloudController;

- (void)_initializeUpdateInProgressState;
- (void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (void)becomeActive;
- (void)dealloc;
- (BOOL)hasCloudLockerAccount;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (id)init;
- (BOOL)isCloudEnabled;
- (BOOL)isGeniusEnabled;
- (BOOL)isUpdateInProgress;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)resignActive;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 completionHandler:(id)arg3;

@end