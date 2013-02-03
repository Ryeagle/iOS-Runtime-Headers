/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;

@interface GMMDataProperties : PBCodable {
    NSString *_copyright;
    BOOL _disabled;
    BOOL _hasDisabled;
    BOOL _hasImageSource;
    BOOL _hasInfoLevel;
    BOOL _hasInfoValue;
    BOOL _hasNumZoomLevels;
    BOOL _hasTileHeight;
    BOOL _hasTileWidth;
    NSInteger _imageHeight;
    NSInteger _imageSource;
    NSInteger _imageWidth;
    NSInteger _infoLevel;
    NSInteger _infoValue;
    GMMMapPoint *_latLon;
    NSInteger _maxZoomLevel;
    NSInteger _numZoomLevels;
    NSString *_panoId;
    NSInteger _radius;
    NSString *_streetRange;
    NSString *_text;
    NSInteger _tileHeight;
    NSInteger _tileWidth;
}

@property(retain) NSString *copyright;
@property(retain) GMMMapPoint *latLon;
@property(retain) NSString *panoId;
@property(retain) NSString *streetRange;
@property(retain) NSString *text;
@property BOOL disabled;
@property(readonly) BOOL hasCopyright;
@property(readonly) BOOL hasDisabled;
@property(readonly) BOOL hasImageSource;
@property(readonly) BOOL hasInfoLevel;
@property(readonly) BOOL hasInfoValue;
@property(readonly) BOOL hasNumZoomLevels;
@property(readonly) BOOL hasStreetRange;
@property(readonly) BOOL hasText;
@property(readonly) BOOL hasTileHeight;
@property(readonly) BOOL hasTileWidth;
@property NSInteger imageHeight;
@property NSInteger imageSource;
@property NSInteger imageWidth;
@property NSInteger infoLevel;
@property NSInteger infoValue;
@property NSInteger maxZoomLevel;
@property NSInteger numZoomLevels;
@property NSInteger radius;
@property NSInteger tileHeight;
@property NSInteger tileWidth;

- (id)copyright;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)disabled;
- (BOOL)hasCopyright;
- (BOOL)hasDisabled;
- (BOOL)hasImageSource;
- (BOOL)hasInfoLevel;
- (BOOL)hasInfoValue;
- (BOOL)hasNumZoomLevels;
- (BOOL)hasStreetRange;
- (BOOL)hasText;
- (BOOL)hasTileHeight;
- (BOOL)hasTileWidth;
- (NSInteger)imageHeight;
- (NSInteger)imageSource;
- (NSInteger)imageWidth;
- (NSInteger)infoLevel;
- (NSInteger)infoValue;
- (id)init;
- (id)latLon;
- (NSInteger)maxZoomLevel;
- (NSInteger)numZoomLevels;
- (id)panoId;
- (NSInteger)radius;
- (BOOL)readFrom:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setImageHeight:(NSInteger)arg1;
- (void)setImageSource:(NSInteger)arg1;
- (void)setImageWidth:(NSInteger)arg1;
- (void)setInfoLevel:(NSInteger)arg1;
- (void)setInfoValue:(NSInteger)arg1;
- (void)setLatLon:(id)arg1;
- (void)setMaxZoomLevel:(NSInteger)arg1;
- (void)setNumZoomLevels:(NSInteger)arg1;
- (void)setPanoId:(id)arg1;
- (void)setRadius:(NSInteger)arg1;
- (void)setStreetRange:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTileHeight:(NSInteger)arg1;
- (void)setTileWidth:(NSInteger)arg1;
- (id)streetRange;
- (id)text;
- (NSInteger)tileHeight;
- (NSInteger)tileWidth;
- (void)writeTo:(id)arg1;

@end