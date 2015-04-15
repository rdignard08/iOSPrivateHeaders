
@interface _UISiriTrackingItem : NSObject {

    BOOL _deleted;
    BOOL _isABigReplacement;
    BOOL _isASmallReplacement;
    BOOL _isAnIntroduction;
    UIImageView _animatedView;
    UIColor _textColor;
    double _offscreenXLocation;
    @? _animationCompletionHandler;
    UIImage _capturedGlyphImage;
    {_NSRange="location"Q"length"Q} _textRange;
    {_NSRange="location"Q"length"Q} _glyphRange;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _targetFrame;
}
@property (nonatomic, retain, readwrite) UIImageView* animatedView;
@property (nonatomic, retain, readwrite) UIColor* textColor;
@property (nonatomic, assign, readwrite) NSNumber* textRange;
@property (nonatomic, assign, readwrite) NSNumber* glyphRange;
@property (nonatomic, assign, readwrite) NSNumber* offscreenXLocation;
@property (nonatomic, assign, readwrite) NSNumber* targetFrame;
@property (nonatomic, copy, readwrite) NSNumber* animationCompletionHandler;
@property (nonatomic, assign, readwrite) NSNumber* isABigReplacement;
@property (nonatomic, assign, readwrite) NSNumber* isASmallReplacement;
@property (nonatomic, assign, readwrite) NSNumber* isAnIntroduction;
@property (nonatomic, retain, readwrite) UIImage* capturedGlyphImage;

 - (id) description;
 - (void) dealloc;
 - (void) setTextColor:(id)a;
 - (id) textColor;
 - (void) setCapturedGlyphImage:(id)a;
 - (void) setTargetFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) animateOut;
 - (void) captureGlyphsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})acontainerOrigin:({CGPoint=dd})bfromLayoutManager:(id)c;
 - (id) animatedView;
 - (void) setAnimatedView:(id)a;
 - ({_NSRange=QQ}) textRange;
 - (void) setTextRange:({_NSRange=QQ})a;
 - (void) setGlyphRange:({_NSRange=QQ})a;
 - (double) offscreenXLocation;
 - (void) setOffscreenXLocation:(double)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) targetFrame;
 - (@?) animationCompletionHandler;
 - (void) setAnimationCompletionHandler:(@?)a;
 - (BOOL) isABigReplacement;
 - (void) setIsABigReplacement:(BOOL)a;
 - (BOOL) isASmallReplacement;
 - (void) setIsASmallReplacement:(BOOL)a;
 - (BOOL) isAnIntroduction;
 - (void) setIsAnIntroduction:(BOOL)a;
 - (id) capturedGlyphImage;
 - (id) init;
 - ({_NSRange=QQ}) glyphRange;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
