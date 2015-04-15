
@interface UITabBarButtonLabel : UILabel {

    double _boundsWidth;
    _UITabBarItemAppearanceStorage* _appearanceStorage;
    BOOL _isSelected;
    BOOL _isHighlighted;
    Class _appearanceGuideClass;
    UIColor* _unselectedTintColor;
}
 + (double) _fontPointSizeForIdiom:(long long)a;

 - (void) dealloc;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a ;
 - (Class) _appearanceGuideClass;
 - (void) tintColorDidChange;
 - (void) _didChangeFromIdiom:(long long)a onScreen:(id)b traverseHierarchy:(BOOL)c ;
 - (void) setHighlighted:(BOOL)a ;
 - (void) _UIAppearance_setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (id) _titleTextAttributesForState:(unsigned long long)a ;
 - (void) _setAppearanceGuideClass:(Class)a ;
 - (void) setSelected:(BOOL)a ;
 - (BOOL) _shouldCeilSizeToViewScale;
 - (id) _fontForIdiom:(long long)a ;
 - (void) updateTextColorsForState;
 - (id) _containingTabBarButton;
 - (void) _updateForFontChangeWithIdiom:(long long)a ;
 - (void) sizeToFitBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _setUnselectedTintColor:(id)a ;
 - (void) _UIAppearance_setTitlePositionAdjustment:({UIOffset=dd})a ;
 - (void) _setTitlePositionAdjustment:({UIOffset=dd})a ;
 - (void) _applyTabBarButtonAppearanceStorage:(id)a withTaggedSelectors:(id)b ;
 - (id) _unselectedTintColor;


@end
