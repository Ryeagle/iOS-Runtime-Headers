/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhoneNumberCompressor : NSObject {
    float _desiredWidth;
    UIFont *_font;
    NSString *_phoneNumber;
    NSArray *_preferredCompressions;
}

@property (nonatomic) float desiredWidth;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSArray *preferredCompressions;

- (id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1;
- (id)compress;
- (void)dealloc;
- (float)desiredWidth;
- (id)font;
- (id)phoneNumber;
- (id)preferredCompressions;
- (void)setDesiredWidth:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPreferredCompressions:(id)arg1;

@end
