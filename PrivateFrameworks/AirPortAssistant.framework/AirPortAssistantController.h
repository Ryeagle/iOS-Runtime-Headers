/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <AirPortAssistantControllerDelegate>;

@interface AirPortAssistantController : NSObject  {
    id _delegate;
    id _viewController;
}

@property <AirPortAssistantControllerDelegate> * delegate;
@property(retain) id viewController;

+ (id)sharedInstance;
+ (BOOL)launchAUForDevice:(id)arg1 getAUFromAppStore:(BOOL)arg2;
+ (id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2;
+ (id)unconfiguredBaseStationName:(unsigned char)arg1;
+ (BOOL)isUnconfiguredBaseStation:(id)arg1 productID:(char *)arg2 productFamily:(unsigned int*)arg3;
+ (void)cancelAirPortAssistantController;
+ (id)assistantUIViewControllerWithParameters:(id)arg1;
+ (BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3;

- (void)dealloc;
- (void)assistantComplete;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end