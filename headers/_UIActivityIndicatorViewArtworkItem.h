
@protocol NSDiscardableContent;
@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {

    @"NSString" _artKey;
    @"NSArray" _images;
    {?="isDiscarded"b1"useCount"I} _flags;
}
@property (nonatomic, assign, readonly) NSString* artKey;
@property (nonatomic, retain, readwrite) NSArray* images;

 - (BOOL) beginContentAccess;
 - (void) endContentAccess;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (void) discardContentIfPossible;
 - (BOOL) isContentDiscarded;
 - (id) images;
 - (void) setImages:(id)a;
 - (id) initWithArtKey:(id)a;
 - (id) artKey;


@end
