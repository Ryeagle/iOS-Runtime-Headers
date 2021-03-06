/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCountedGraphicFeature : NSObject {
    id mFeature;
    unsigned int mUsageCount;
}

@property (nonatomic) unsigned int usageCount;

- (int)compareUsageCount:(id)arg1;
- (void)dealloc;
- (id)feature;
- (void)incrementUsageCount;
- (id)initWithFeature:(id)arg1;
- (void)setUsageCount:(unsigned int)arg1;
- (unsigned int)usageCount;

@end
