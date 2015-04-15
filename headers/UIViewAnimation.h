
@interface UIViewAnimation : NSObject {

    UIView _view;
    NSIndexPath _indexPath;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endRect;
    double _endAlpha;
    double _startFraction;
    double _endFraction;
    int _curve;
    BOOL _animateFromCurrentPosition;
    BOOL _shouldDeleteAfterAnimation;
    BOOL _editing;
    BOOL _shouldAnimateShadow;
    BOOL _shouldResetGroupOpacityAfterAnimation;
    BOOL _shouldAllowGroupOpacityAfterAnimation;
    BOOL _shouldClipToBoundsAfterAnimation;
}
@property (nonatomic, assign, readonly) UIView* view;
@property (nonatomic, assign, readonly) NSIndexPath* indexPath;
@property (nonatomic, assign, readonly) NSNumber* endRect;
@property (nonatomic, assign, readonly) NSNumber* endAlpha;
@property (nonatomic, assign, readonly) NSNumber* startFraction;
@property (nonatomic, assign, readonly) NSNumber* endFraction;
@property (nonatomic, assign, readonly) NSNumber* curve;
@property (nonatomic, assign, readonly) NSNumber* animateFromCurrentPosition;
@property (nonatomic, assign, readonly) NSNumber* shouldDeleteAfterAnimation;
@property (nonatomic, assign, readonly) NSNumber* editing;
@property (nonatomic, assign, readwrite) NSNumber* shouldAnimateShadow;
@property (nonatomic, assign, readwrite) NSNumber* shouldResetGroupOpacityAfterAnimation;
@property (nonatomic, assign, readwrite) NSNumber* shouldAllowGroupOpacityAfterAnimation;
@property (nonatomic, assign, readwrite) NSNumber* shouldClipToBoundsAfterAnimation;

 - (id) description;
 - (void) dealloc;
 - (id) indexPath;
 - (int) curve;
 - (double) startFraction;
 - (double) endFraction;
 - (BOOL) animateFromCurrentPosition;
 - (double) endAlpha;
 - (void) setShouldAllowGroupOpacityAfterAnimation:(BOOL)a;
 - (void) setShouldResetGroupOpacityAfterAnimation:(BOOL)a;
 - (void) setShouldClipToBoundsAfterAnimation:(BOOL)a;
 - (BOOL) shouldAnimateShadow;
 - (BOOL) shouldDeleteAfterAnimation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endRect;
 - (BOOL) editing;
 - (BOOL) shouldResetGroupOpacityAfterAnimation;
 - (BOOL) shouldAllowGroupOpacityAfterAnimation;
 - (BOOL) shouldClipToBoundsAfterAnimation;
 - (id) initWithView:(id)aindexPath:(id)bendRect:({CGRect={CGPoint=dd}{CGSize=dd}})cendAlpha:(double)dstartFraction:(double)eendFraction:(double)fcurve:(int)ganimateFromCurrentPosition:(BOOL)hshouldDeleteAfterAnimation:(BOOL)iediting:(BOOL)j;
 - (void) setShouldAnimateShadow:(BOOL)a;
 - (id) view;


@end
