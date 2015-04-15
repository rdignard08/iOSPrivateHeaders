
@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView {

    BOOL _animationsAreValid;
    @"UIImageView" _imageView;
    @"UILabel" _textLabel;
    @"UIImageView" _arrow;
    @"UIActivityIndicatorView" _spinner;
    @"NSMutableDictionary" _snappingTextFromValues;
    @"NSMutableDictionary" _snappingImageFromValues;
    @"NSMutableDictionary" _snappingArrowFromValues;
    BOOL _areAnimationsValid;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setAttributedTitle:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setTintColor:(id)a;
 - (id) textLabel;
 - (id) imageView;
 - (id) attributedTitle;
 - (void) refreshControlInvalidatedSnappingHeight;
 - (d) _heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
 - (d) maximumSnappingHeight;
 - (d) minimumSnappingHeight;
 - (void) willTransitionFromState:(i)atoState:(i)b;
 - (void) didTransitionFromState:(i)atoState:(i)b;
 - (void) setAreAnimationsValid:(BOOL)a;
 - (void) _fadeInMagic;
 - (void) _revealingMagic;
 - (void) _snappingMagic;
 - (void) _refreshingMagic;
 - (void) _spinOutMagic;
 - (d) _currentTimeOffset;
 - (d) _snappingTimeOffset;
 - (BOOL) areAnimationsValid;
 - (id) _revealingImageAnimations;
 - (id) _revealingArrowAnimations;
 - (id) _revealingTextAnimations;
 - (void) _updateTimeOffsetOfRelevantLayers;
 - (id) _regenerateCircle;
 - (id) _regenerateArrow;
 - (id) arrow;
 - (id) spinner;
 - (q) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
