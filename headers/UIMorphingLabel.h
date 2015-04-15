
@interface UIMorphingLabel : UIView {

    @"UIMorphingLabelGlyphSet" _srcGlyphSet;
    @"UIMorphingLabelGlyphSet" _dstGlyphSet;
    @"NSMutableArray" _hiddenGlyphViews;
    @"UIView" _colorView;
    [51[51{?="len"Q"dir"Q}]] _memo;
    [100{?="src"{_NSRange="location"Q"length"Q}"dst"{_NSRange="location"Q"length"Q}"isEqual"B}] _alignment;
    Q _alignmentSize;
    [100d] _alignmentDelays;
    @"_UIViewAnimationAttributes" _textAnimationAttributes;
    @"_UIViewAnimationAttributes" _textColorAnimationAttributes;
    d _lastUpdateTime;
    d _slowdown;
    d _rippleFactor;
    d _scaleFactor;
    BOOL _isDoingFastAnimation;
    BOOL _textDidChange;
    BOOL _textColorDidChange;
    BOOL _suppressLayoutSubviews;
    @"NSString" _text;
    @"UIFont" _font;
    @"UIColor" _textColor;
    q _textAlignment;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _visibleRect;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setTextAlignment:(q)a;
 - (void) setTextColor:(id)a;
 - (void) setFont:(id)a;
 - (void) setText:(id)a;
 - (id) textColor;
 - (q) textAlignment;
 - (void) setVisibleRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setSuppressLayoutSubviews:(BOOL)a;
 - (id) glyphViewWithImage:(id)aisColorGlyph:(BOOL)b;
 - (d) flushAmount;
 - (void) hideGlyph:(id)a;
 - (void) baseInit;
 - (d) alphaForFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (Q) calculateHardAlignment:(^{?={_NSRange=QQ}{_NSRange=QQ}B})asize:(Q)bfromGlyphs:(r^S)ccount:(Q)dtoGlyphs:(r^S)ecount:(Q)f;
 - (d) currentMediaTime;
 - (id) uniqueStringWithPrefix:(id)a;
 - (void) animateShowGlyph:(id)aalpha:(d)balphaDuration:(d)cdelay:(d)d;
 - (void) animateGlyph:(id)atoScale:(d)bdelay:(d)c;
 - (void) animateGlyph:(id)atoAlpha:(d)bduration:(d)cdelay:(d)d;
 - (d) totalRightOffsetForAlignmentHunkAtIndex:(Q)a;
 - (d) totalLeftOffsetForAlignmentHunkAtIndex:(Q)a;
 - (void) animateGlyph:(id)atoPosition:({CGPoint=dd})bdelay:(d)c;
 - (d) changeInWidthDueToAlignmentHunkAtIndex:(Q)a;
 - (void) animateGlyphsInRange:({_NSRange=QQ})aofGlyphSet:(id)bbyOffset:(d)cdelay:(d)d;
 - (void) animateHideGlyph:(id)aalphaDuration:(d)bdelay:(d)c;
 - (void) copyStateFromGlyph:(id)atoGlyph:(id)b;
 - (void) initInsertionAlignmentHunkAtIndex:(Q)a;
 - (void) initDeletionAlignmentHunkAtIndex:(Q)a;
 - (void) initSubstitutionAlignmentHunkAtIndex:(Q)a;
 - (void) initMovementAlignmentHunkAtIndex:(Q)a;
 - (void) animateInsertionAlignmentHunkAtIndex:(Q)a;
 - (void) animateDeletionAlignmentHunkAtIndex:(Q)a;
 - (void) animateSubstitutionAlignmentHunkAtIndex:(Q)a;
 - (void) animateMovementAlignmentHunkAtIndex:(Q)a;
 - (void) calculateGlyphAlignment;
 - (void) initAlignmentHunkAtIndex:(Q)a;
 - (void) animateChangeInWidthOutsideAlignmentHunkAtIndex:(Q)a;
 - (void) animateAlignmentHunkAtIndex:(Q)a;
 - (id) attributedStringForText:(id)a;
 - (BOOL) suppressLayoutSubviews;
 - (void) animateGlyphs;
 - (void) animateTextColor;
 - (d) requiredWidthForText:(id)a;
 - (void) animateShowGlyph:(id)aalphaDuration:(d)bdelay:(d)c;
 - (BOOL) canFitText:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) attributedString;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) font;
 - (id) text;


@end
