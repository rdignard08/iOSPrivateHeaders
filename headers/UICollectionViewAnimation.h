
@interface UICollectionViewAnimation : NSObject {

    @"UICollectionReusableView" _view;
    @"UICollectionViewLayoutAttributes" _finalLayoutAttributes;
    d _startFraction;
    d _endFraction;
    i _viewType;
    @"NSMutableArray" _completionHandlers;
    @"NSMutableArray" _startupHandlers;
    @? _animationBlock;
    {?="animateFromCurrentPosition"b1"deleteAterAnimation"b1"rasterizeAfterAnimation"b1"resetRasterizationAfterAnimation"b1} _collectionViewAnimationFlags;
}
@property (nonatomic, assign, readonly) UICollectionReusableView* view;
@property (nonatomic, assign, readonly) NSNumber* viewType;
@property (nonatomic, assign, readonly) UICollectionViewLayoutAttributes* finalLayoutAttributes;
@property (nonatomic, assign, readonly) NSNumber* startFraction;
@property (nonatomic, assign, readonly) NSNumber* endFraction;
@property (nonatomic, assign, readonly) NSNumber* animateFromCurrentPosition;
@property (nonatomic, assign, readonly) NSNumber* deleteAfterAnimation;
@property (nonatomic, assign, readwrite) NSNumber* rasterizeAfterAnimation;
@property (nonatomic, assign, readwrite) NSNumber* resetRasterizationAfterAnimation;

 - (id) description;
 - (void) dealloc;
 - (d) startFraction;
 - (d) endFraction;
 - (BOOL) animateFromCurrentPosition;
 - (id) initWithView:(id)aviewType:(i)bfinalLayoutAttributes:(id)cstartFraction:(d)dendFraction:(d)eanimateFromCurrentPostion:(BOOL)fdeleteAfterAnimation:(BOOL)gcustomAnimations:(@?)h;
 - (BOOL) deleteAfterAnimation;
 - (void) setRasterizeAfterAnimation:(BOOL)a;
 - (BOOL) rasterizeAfterAnimation;
 - (void) setResetRasterizationAfterAnimation:(BOOL)a;
 - (BOOL) resetRasterizationAfterAnimation;
 - (void) addCompletionHandler:(@?)a;
 - (void) addStartupHandler:(@?)a;
 - (i) viewType;
 - (id) finalLayoutAttributes;
 - (void) start;
 - (id) view;


@end
