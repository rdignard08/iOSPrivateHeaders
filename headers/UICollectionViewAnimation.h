
@interface UICollectionViewAnimation : NSObject {

    @"UICollectionReusableView" _view;
    @"UICollectionViewLayoutAttributes" _finalLayoutAttributes;
    double _startFraction;
    double _endFraction;
    int _viewType;
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
 - (double) startFraction;
 - (double) endFraction;
 - (BOOL) animateFromCurrentPosition;
 - (id) initWithView:(id)aviewType:(int)bfinalLayoutAttributes:(id)cstartFraction:(double)dendFraction:(double)eanimateFromCurrentPostion:(BOOL)fdeleteAfterAnimation:(BOOL)gcustomAnimations:(@?)h;
 - (BOOL) deleteAfterAnimation;
 - (void) setRasterizeAfterAnimation:(BOOL)a;
 - (BOOL) rasterizeAfterAnimation;
 - (void) setResetRasterizationAfterAnimation:(BOOL)a;
 - (BOOL) resetRasterizationAfterAnimation;
 - (void) addCompletionHandler:(@?)a;
 - (void) addStartupHandler:(@?)a;
 - (int) viewType;
 - (id) finalLayoutAttributes;
 - (void) start;
 - (id) view;


@end
