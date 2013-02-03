/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class UIActionSheet, UIBarButtonItem, UIModalView, NSTimer, MKStreetView;

@interface MSStreetViewController : UIViewController <UIActionSheetDelegate> {
    BOOL _actionSheetWasVisible;
    BOOL _disableHideStatusBar;
    UIBarButtonItem *_doneButtonItem;
    UIModalView *_errorAlertSheet;
    UIActionSheet *_reportActionSheet;
    UIBarButtonItem *_reportButtonItem;
    float _rotationBias;
    NSTimer *_statusBarTimer;
    MKStreetView *_streetView;
}

@property(retain) UIBarButtonItem *doneButtonItem;
@property(retain) UIModalView *errorAlertSheet;
@property(retain) UIActionSheet *reportActionSheet;
@property(retain) UIBarButtonItem *reportButtonItem;
@property(readonly) MKStreetView *streetView;

- (void)_removeReportActionSheet;
- (void)_restoreReportActionSheet;
- (void)_scheduleHideStatusBar;
- (void)_setStatusBarTimer:(id)arg1;
- (void)_updateNavigationBarTitle;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)close;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)doneButtonItem;
- (id)errorAlertSheet;
- (void)hideStatusBar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)presentErrorAlertSheet:(id)arg1;
- (void)presentTakeDownAlertSheet;
- (id)reportActionSheet;
- (id)reportButtonItem;
- (void)setDoneButtonItem:(id)arg1;
- (void)setErrorAlertSheet:(id)arg1;
- (void)setReportActionSheet:(id)arg1;
- (void)setReportButtonItem:(id)arg1;
- (void)setRotationBiasForTargetOrientation:(NSInteger)arg1;
- (void)streetView:(id)arg1 didFailWithError:(id)arg2;
- (void)streetView:(id)arg1 didUpdatePanoramaMetadata:(id)arg2;
- (void)streetView:(id)arg1 panoramaDidChange:(id)arg2;
- (void)streetView:(id)arg1 userDidTap:(struct CGPoint { float x1; float x2; })arg2;
- (id)streetView;
- (id)streetViewDelegate;
- (void)streetViewDidChangeOrientation:(id)arg1;
- (void)streetViewDidClose:(id)arg1;
- (id)streetViewNavigationController;
- (void)streetViewWillChangeOrientation:(id)arg1;
- (void)streetViewWillClose:(id)arg1;
- (void)transformCoordinates:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end