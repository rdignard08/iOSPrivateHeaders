
@protocol NSUITextViewCommonMethods;
@interface _UITextContainerView : UIView <NSUITextViewCommonMethods> {

    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _textContainerInset;
    {CGPoint="x"d"y"d} _textContainerOrigin;
    {CGSize="width"d"height"d} _minSize;
    {CGSize="width"d"height"d} _maxSize;
    NSTextContainer* _textContainer;
    NSDictionary* _linkTextAttributes;
    {?="textContainerOriginInvalid"b1"verticalLayout"b2"horizontallyResizable"b1"verticallyResizable"b1} _tcvFlags;
}
 + (Class) layerClass;

 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - ({CGSize=dd}) maxSize;
 - (void) tintColorDidChange;
 - (void) sizeToFit;
 - (void) _didScroll;
 - ({CGSize=dd}) minSize;
 - (BOOL) isHorizontallyResizable;
 - (id) textContainer;
 - (void) setLayoutOrientation:(long long)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a textContainer:(id)b ;
 - (void) setVerticallyResizable:(BOOL)a ;
 - (void) setUsesTiledViews:(BOOL)a ;
 - (void) setMinSize:({CGSize=dd})a ;
 - (BOOL) usesTiledViews;
 - (void) setHorizontallyResizable:(BOOL)a ;
 - (void) setTextContainerInset:({UIEdgeInsets=dddd})a ;
 - (void) setLinkTextAttributes:(id)a ;
 - (void) _ensureMinAndMaxSizesConsistentWithBounds;
 - (BOOL) _ensureLayoutCompleteForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a withExtension:(BOOL)b ;
 - ({_NSRange=QQ}) _extendedGlyphRangeForRange:({_NSRange=QQ})a maxGlyphIndex:(unsigned long long)b drawingToScreen:(BOOL)c ;
 - (BOOL) _ensureLayoutCompleteForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a withExtensionFactor:(double)b minimumExtensionDistance:(double)c repetitions:(unsigned long long)d ;
 - (BOOL) isVerticallyResizable;
 - (void) _ensureLayoutCompleteToEndOfCharacterRange:({_NSRange=QQ})a ;
 - (void) setMaxSize:({CGSize=dd})a ;
 - (id) delegate;
 - (id) textStorage;
 - (long long) layoutOrientation;
 - (id) linkTextAttributes;
 - (void) invalidateTextContainerOrigin;
 - (void) updateInsertionPointStateAndRestartTimer:(BOOL)a ;
 - (id) layoutManager;
 - ({_NSRange=QQ}) markedRange;
 - ({UIEdgeInsets=dddd}) textContainerInset;
 - (void) setConstrainedFrameSize:({CGSize=dd})a ;
 - ({CGPoint=dd}) textContainerOrigin;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a avoidAdditionalLayout:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (void) setTextContainer:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
