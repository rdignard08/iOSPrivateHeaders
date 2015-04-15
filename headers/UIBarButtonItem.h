
@protocol NSCoding;
@interface UIBarButtonItem : UIBarItem <NSCoding> {

    NSString* _title;
    NSSet* _possibleTitles;
    SEL _action;
    id _target;
    UIImage* _image;
    UIImage* _landscapeImagePhone;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _imageInsets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _landscapeImagePhoneInsets;
    double _width;
    UIView* _view;
    long long _tag;
    id _appearanceStorage;
    {?="enabled"b1"style"b3"isSystemItem"b1"systemItem"b7"viewIsCustom"b1"isMinibarView"b1"disableAutosizing"b1"selected"b1"imageHasEffects"b1} _barButtonItemFlags;
    BOOL _flexible;
    BOOL __showsBackButtonIndicator;
    BOOL __hidden;
    BOOL __viewWantsLetterpressImage;
    BOOL __needsViewUpdateForLetterpressImage;
    double _toolbarCharge;
    double _minimumWidth;
    double _maximumWidth;
    NSSet* _possibleSystemItems;
    NSDictionary* _stylesForSizingTitles;
    UIBarButtonItem* __itemVariation;
    UINavigationItem* __owningNavigationItem;
}
 + (void) _getSystemItemStyle:(^q)atitle:(^@)bimage:(^@)cselectedImage:(^@)daction:(^:)eforBarStyle:(long long)flandscape:(BOOL)galwaysBordered:(BOOL)husingSystemItem:(long long)iusingItemStyle:(long long)j;
 + (id) _appearanceBlindViewClasses;
 + (Class) classForNavigationButton;
 + (Class) classForToolbarButton;

 - (id) target;
 - (id) title;
 - (void) setTitle:(id)a ;
 - (void) dealloc;
 - (void) setTarget:(id)a ;
 - (SEL) action;
 - (void) setView:(id)a ;
 - (id) tintColor;
 - (void) setTintColor:(id)a ;
 - (void) setTag:(long long)a ;
 - (BOOL) isCustomViewItem;
 - (id) _appearanceStorage;
 - (BOOL) _needsViewUpdateForLetterpressImage;
 - (void) _updateView;
 - (BOOL) _hidden;
 - (BOOL) _showsBackButtonIndicator;
 - (void) _setOwningNavigationItem:(id)a ;
 - (BOOL) isSystemItem;
 - (long long) systemItem;
 - (id) createViewForNavigationItem:(id)a ;
 - (id) landscapeImagePhone;
 - (BOOL) isMinibarView;
 - (void) setIsMinibarView:(BOOL)a ;
 - (void) setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (BOOL) _shouldBezelSystemButtonImage;
 - (id) backgroundImageForState:(unsigned long long)a style:(long long)b barMetrics:(long long)c ;
 - (BOOL) _isImageBarButtonItem;
 - (double) _leftImagePaddingForEdgeMarginInNavBar;
 - (double) _rightImagePaddingForEdgeMarginInNavBar;
 - (id) scriptingID;
 - (void) setBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (id) _stylesForSizingTitles;
 - (void) _setStylesForSizingTitles:(id)a ;
 - (id) _possibleSystemItems;
 - (double) _minimumWidth;
 - (double) _maximumWidth;
 - (void) setBackButtonBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (void) setAction:(SEL)a ;
 - (void) setSelected:(BOOL)a ;
 - (id) initWithTitle:(id)a style:(long long)b target:(id)c action:(SEL)d ;
 - (void) _setPossibleItemVariations:(id)a ;
 - (void) _setItemVariation:(id)a ;
 - (double) _width;
 - (id) backgroundImageForState:(unsigned long long)a barMetrics:(long long)b ;
 - (id) titleTextAttributesForState:(unsigned long long)a ;
 - (id) createViewForToolbar:(id)a ;
 - (BOOL) _imageHasEffects;
 - (id) customView;
 - (void) _sendAction:(id)a withEvent:(id)b ;
 - (BOOL) _flexible;
 - (void) _setHidden:(BOOL)a ;
 - (void) _connectInterfaceBuilderEventConnection:(id)a ;
 - (void) setImageInsets:({UIEdgeInsets=dddd})a ;
 - ({UIEdgeInsets=dddd}) imageInsets;
 - (id) initWithCustomView:(id)a ;
 - (void) _setToolbarCharge:(double)a ;
 - (void) setLandscapeImagePhone:(id)a ;
 - (void) setCustomView:(id)a ;
 - (void) setPossibleTitles:(id)a ;
 - (void) _getSystemItemStyle:(^q)a title:(^@)b image:(^@)c selectedImage:(^@)d action:(^:)e forBarStyle:(long long)f landscape:(BOOL)g alwaysBordered:(BOOL)h ;
 - (void) _getNavBarEdgeSizeAdjust:(^{CGSize=dd})a imageInsets:(^{UIEdgeInsets=dddd})b landscape:(BOOL)c ;
 - (void) _getToolbarEdgeInsets:(^{UIEdgeInsets=dddd})a imageInsets:(^{UIEdgeInsets=dddd})b glowInsets:(^{UIEdgeInsets=dddd})c forBarStyle:(long long)d landscape:(BOOL)e alwaysBordered:(BOOL)f ;
 - (id) _owningNavigationItem;
 - (void) setBackgroundImage:(id)a forState:(unsigned long long)b style:(long long)c barMetrics:(long long)d ;
 - (void) _applyPositionAdjustmentToSegmentedControl:(id)a ;
 - (id) initWithImage:(id)a style:(long long)b target:(id)c action:(SEL)d ;
 - (id) initWithImage:(id)a landscapeImagePhone:(id)b style:(long long)c target:(id)d action:(SEL)e ;
 - (id) initWithBarButtonSystemItem:(long long)a target:(id)b action:(SEL)c ;
 - (void) setLandscapeImagePhoneInsets:({UIEdgeInsets=dddd})a ;
 - ({UIEdgeInsets=dddd}) landscapeImagePhoneInsets;
 - (id) _possibleItemVariations;
 - (id) itemVariation;
 - (id) possibleTitles;
 - (void) _setSystemItem:(long long)a ;
 - (void) _setPossibleSystemItems:(id)a ;
 - (BOOL) selected;
 - (id) backButtonBackgroundImageForState:(unsigned long long)a barMetrics:(long long)b ;
 - (void) setBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (double) backgroundVerticalPositionAdjustmentForBarMetrics:(long long)a ;
 - (void) setTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - ({UIOffset=dd}) titlePositionAdjustmentForBarMetrics:(long long)a ;
 - (void) setBackButtonBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (double) backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)a ;
 - (void) setBackButtonTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - ({UIOffset=dd}) backButtonTitlePositionAdjustmentForBarMetrics:(long long)a ;
 - (double) _toolbarCharge;
 - (void) _setMinimumWidth:(double)a ;
 - (void) _setMaximumWidth:(double)a ;
 - (void) _setFlexible:(BOOL)a ;
 - (id) _itemVariation;
 - (void) _setShowsBackButtonIndicator:(BOOL)a ;
 - (BOOL) _viewWantsLetterpressImage;
 - (id) _miniImage;
 - (void) _setMiniImage:(id)a ;
 - ({UIEdgeInsets=dddd}) _miniImageInsets;
 - (void) _setMiniImageInsets:({UIEdgeInsets=dddd})a ;
 - (id) _toolbarButton;
 - (void) _setImageHasEffects:(BOOL)a ;
 - (id) _foregroundColorForLetterpressWithView:(id)a ;
 - (void) _setWidth:(double)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) window;
 - (void) setImage:(id)a ;
 - (long long) style;
 - (long long) tag;
 - (id) image;
 - (void) setStyle:(long long)a ;
 - (id) view;
 - (id) nextResponder;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a ;
 - (double) width;
 - (void) setWidth:(double)a ;


@end
