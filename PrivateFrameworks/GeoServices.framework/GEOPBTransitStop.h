/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying> {
    unsigned int _hallIndex;
    struct { 
        unsigned int muid : 1; 
        unsigned int hallIndex : 1; 
        unsigned int stopIndex : 1; 
    } _has;
    GEOLatLng *_latLng;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    unsigned int _stopIndex;
    GEOStyleAttributes *_styleAttributes;
    NSString *_timezone;
    NSMutableArray *_zoomNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hallIndex;
@property (nonatomic) BOOL hasHallIndex;
@property (nonatomic, readonly) BOOL hasLatLng;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasNameDisplayString;
@property (nonatomic) BOOL hasStopIndex;
@property (nonatomic, readonly) BOOL hasStyleAttributes;
@property (nonatomic, readonly) BOOL hasTimezone;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *timezone;
@property (nonatomic, retain) NSMutableArray *zoomNames;

- (void)addZoomName:(id)arg1;
- (id)bestName;
- (id)bestNameWithLocale:(out id*)arg1;
- (void)clearZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hallIndex;
- (BOOL)hasHallIndex;
- (BOOL)hasLatLng;
- (BOOL)hasMuid;
- (BOOL)hasNameDisplayString;
- (BOOL)hasStopIndex;
- (BOOL)hasStyleAttributes;
- (BOOL)hasTimezone;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)latLng;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (BOOL)readFrom:(id)arg1;
- (void)setHallIndex:(unsigned int)arg1;
- (void)setHasHallIndex:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasStopIndex:(BOOL)arg1;
- (void)setLatLng:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStopIndex:(unsigned int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setTimezone:(id)arg1;
- (void)setZoomNames:(id)arg1;
- (unsigned int)stopIndex;
- (id)styleAttributes;
- (id)timezone;
- (void)writeTo:(id)arg1;
- (id)zoomNameAtIndex:(unsigned int)arg1;
- (id)zoomNames;
- (unsigned int)zoomNamesCount;

@end
