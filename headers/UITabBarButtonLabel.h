
@interface UITabBarButtonLabel : UILabel {

    d _boundsWidth;
    @"_UITabBarItemAppearanceStorage" _appearanceStorage;
    BOOL _isSelected;
    BOOL _isHighlighted;
    Class _appearanceGuideClass;
    @"UIColor" _unselectedTintColor;
}
 + (d) _fontPointSizeForIdiom:(q)a;

 - (void) dealloc;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (Class) _appearanceGuideClass;
 - (void) tintColorDidChange;
 - (void) _didChangeFromIdiom:(q)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (void) setHighlighted:(BOOL)a;
 - (void) _UIAppearance_setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _setTitleTextAttributes:(id)aforState:(Q)b;
 - (id) _titleTextAttributesForState:(Q)a;
 - (void) _setAppearanceGuideClass:(Class)a;
 - (void) setSelected:(BOOL)a;
 - (BOOL) _shouldCeilSizeToViewScale;
 - (id) _fontForIdiom:(q)a;
 - (void) updateTextColorsForState;
 - (id) _containingTabBarButton;
 - (void) _updateForFontChangeWithIdiom:(q)a;
 - (void) sizeToFitBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setUnselectedTintColor:(id)a;
 - (void) _UIAppearance_setTitlePositionAdjustment:({UIOffset=dd})a;
 - (void) _setTitlePositionAdjustment:({UIOffset=dd})a;
 - (void) _applyTabBarButtonAppearanceStorage:(id)awithTaggedSelectors:(id)b;
 - (id) _unselectedTintColor;


@end
