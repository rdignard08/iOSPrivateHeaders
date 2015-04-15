
@interface UIMorphingLabel : UIView {

    UIMorphingLabelGlyphSet* _srcGlyphSet;
    UIMorphingLabelGlyphSet* _dstGlyphSet;
    NSMutableArray* _hiddenGlyphViews;
    UIView* _colorView;
    [51[51{?="len"Q"dir"Q}]] _memo;
    [100{?="src"{_NSRange="location"Q"length"Q}"dst"{_NSRange="location"Q"length"Q}"isEqual"B}] _alignment;
    unsigned long long _alignmentSize;
    [100d] _alignmentDelays;
    _UIViewAnimationAttributes* _textAnimationAttributes;
    _UIViewAnimationAttributes* _textColorAnimationAttributes;
    double _lastUpdateTime;
    double _slowdown;
    double _rippleFactor;
    double _scaleFactor;
    BOOL _isDoingFastAnimation;
    BOOL _textDidChange;
    BOOL _textColorDidChange;
    BOOL _suppressLayoutSubviews;
    NSString* _text;
    UIFont* _font;
    UIColor* _textColor;
    long long _textAlignment;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _visibleRect;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setTextAlignment:(long long)a ;
 - (void) setTextColor:(id)a ;
 - (void) setFont:(id)a ;
 - (void) setText:(id)a ;
 - (id) textColor;
 - (long long) textAlignment;
 - (void) setVisibleRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setSuppressLayoutSubviews:(BOOL)a ;
 - (id) glyphViewWithImage:(id)a isColorGlyph:(BOOL)b ;
 - (double) flushAmount;
 - (void) hideGlyph:(id)a ;
 - (void) baseInit;
 - (double) alphaForFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (unsigned long long) calculateHardAlignment:(^{?={_NSRange=QQ}{_NSRange=QQ}B})a size:(unsigned long long)b fromGlyphs:(r^S)c count:(unsigned long long)d toGlyphs:(r^S)e count:(unsigned long long)f ;
 - (double) currentMediaTime;
 - (id) uniqueStringWithPrefix:(id)a ;
 - (void) animateShowGlyph:(id)a alpha:(double)b alphaDuration:(double)c delay:(double)d ;
 - (void) animateGlyph:(id)a toScale:(double)b delay:(double)c ;
 - (void) animateGlyph:(id)a toAlpha:(double)b duration:(double)c delay:(double)d ;
 - (double) totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)a ;
 - (double) totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateGlyph:(id)a toPosition:({CGPoint=dd})b delay:(double)c ;
 - (double) changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateGlyphsInRange:({_NSRange=QQ})a ofGlyphSet:(id)b byOffset:(double)c delay:(double)d ;
 - (void) animateHideGlyph:(id)a alphaDuration:(double)b delay:(double)c ;
 - (void) copyStateFromGlyph:(id)a toGlyph:(id)b ;
 - (void) initInsertionAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) initDeletionAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) initSubstitutionAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) initMovementAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateInsertionAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateDeletionAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateMovementAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) calculateGlyphAlignment;
 - (void) initAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)a ;
 - (void) animateAlignmentHunkAtIndex:(unsigned long long)a ;
 - (id) attributedStringForText:(id)a ;
 - (BOOL) suppressLayoutSubviews;
 - (void) animateGlyphs;
 - (void) animateTextColor;
 - (double) requiredWidthForText:(id)a ;
 - (void) animateShowGlyph:(id)a alphaDuration:(double)b delay:(double)c ;
 - (BOOL) canFitText:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) attributedString;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) font;
 - (id) text;


@end
