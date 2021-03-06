/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaInfo : TSDStyledInfo {
    struct { 
        unsigned int isPlaceholder : 1; 
        unsigned int wasMediaReplaced : 1; 
    } mFlags;
    struct CGSize { 
        float width; 
        float height; 
    } mOriginalSize;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } defaultOriginalSize;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic, readonly) NSString *mediaDisplayName;
@property (nonatomic, readonly) NSString *mediaFileType;
@property (nonatomic) struct CGSize { float x1; float x2; } originalSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } rawDataSize;
@property (nonatomic) BOOL wasMediaReplaced;

- (struct CGPoint { float x1; float x2; })centerForReplacingWithNewMedia;
- (id)copyWithContext:(id)arg1;
- (struct CGSize { float x1; float x2; })defaultOriginalSize;
- (unsigned int)flags;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (BOOL)isPlaceholder;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (struct CGSize { float x1; float x2; })originalSize;
- (id)propertyNameForFlagsCommand;
- (id)propertyNameForOriginalSizeCommand;
- (struct CGSize { float x1; float x2; })rawDataSize;
- (void)setFlags:(unsigned int)arg1;
- (void)setGeometry:(id)arg1;
- (void)setIsPlaceholder:(BOOL)arg1;
- (void)setOriginalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setWasMediaReplaced:(BOOL)arg1;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (BOOL)wasMediaReplaced;

@end
