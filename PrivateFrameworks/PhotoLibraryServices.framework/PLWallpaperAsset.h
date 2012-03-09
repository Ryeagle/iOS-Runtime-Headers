/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL;

@interface PLWallpaperAsset : PLManagedAsset  {
}

@property(retain) NSURL * imageURL;
@property(retain) NSURL * thumbnailURL;

+ (id)insertIntoPhotoLibrary:(id)arg1 withImageURL:(id)arg2 thumbnailURL:(id)arg3;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;

- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)_image;
- (id)_thumbnailImage;
- (id)urlForKey:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (id)wallpaperFullScreenImage;
- (BOOL)allowsWallpaperEditing;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)thumbnailURL;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (void)prepareForDeletion;
- (id)objectID;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)imageWithFormat:(int)arg1;
- (id)indexSheetImage;

@end