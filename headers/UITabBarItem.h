
@interface UITabBarItem : UIBarItem {

    @"NSString" _title;
    SEL _action;
    id _target;
    @"UIImage" _templateImage;
    @"UIImage" _selectedTemplateImage;
    @"UIImage" _selectedImage;
    @"UIImage" _unselectedImage;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _imageInsets;
    @"NSString" _badgeValue;
    @"UIView" _view;
    q _tag;
    id _appearanceStorage;
    {?="enabled"b1"style"b3"isSystemItem"b1"systemItem"b7"viewIsCustom"b1"animatedBadge"b1"customSelectedImage"b1"customUnselectedImage"b1} _tabBarItemFlags;
    q _barMetrics;
    q _imageStyle;
    @"UIColor" _tintColor;
}
 + (id) _appearanceBlindViewClasses;

 - (id) target;
 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) setTarget:(id)a;
 - (SEL) action;
 - (void) setView:(id)a;
 - (void) setTag:(q)a;
 - (void) _updateView;
 - (BOOL) isSystemItem;
 - (q) systemItem;
 - (void) setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _setTintColor:(id)a;
 - (id) _tintColor;
 - (void) setAction:(SEL)a;
 - (id) initWithTitle:(id)aimage:(id)btag:(q)c;
 - (id) selectedImage;
 - (id) unselectedImage;
 - (void) setBadgeValue:(id)a;
 - (id) initWithTabBarSystemItem:(q)atag:(q)b;
 - (id) _internalTitle;
 - (id) badgeValue;
 - (id) _internalTemplateImage;
 - (id) titleTextAttributesForState:(Q)a;
 - (void) setSelectedImage:(id)a;
 - (void) _setSelected:(BOOL)a;
 - (void) _updateToMatchCurrentState;
 - (q) _barMetrics;
 - (id) _createViewForTabBar:(id)ashowingBadge:(BOOL)bwithTint:(BOOL)c;
 - (void) _setTitleTextAttributeValue:(id)aforAttributeKey:(id)bstate:(Q)c;
 - (void) _setBarMetrics:(q)a;
 - (void) _setImageStyle:(q)a;
 - (q) _imageStyle;
 - (id) _createViewForTabBar:(id)ashowingBadge:(BOOL)b;
 - (void) _updateViewAndPositionItems:(BOOL)a;
 - (void) _updateButtonForTintColor:(id)aselected:(BOOL)b;
 - (BOOL) viewIsCustom;
 - (void) setTitlePositionAdjustment:({UIOffset=dd})a;
 - ({UIOffset=dd}) titlePositionAdjustment;
 - (void) _setInternalTitle:(id)a;
 - (void) _setInternalTemplateImage:(id)a;
 - (id) _internalTemplateImages;
 - (id) initWithTitle:(id)aimage:(id)bselectedImage:(id)c;
 - (void) setImageInsets:({UIEdgeInsets=dddd})a;
 - ({UIEdgeInsets=dddd}) imageInsets;
 - (void) setFinishedSelectedImage:(id)awithFinishedUnselectedImage:(id)b;
 - (id) finishedSelectedImage;
 - (id) finishedUnselectedImage;
 - (void) setViewIsCustom:(BOOL)a;
 - (void) setAnimatedBadge:(BOOL)a;
 - (BOOL) animatedBadge;
 - (void) setUnselectedImage:(id)a;
 - (id) _updateImageWithTintColor:(id)aisSelected:(BOOL)bgetImageOffset:(^{UIOffset=dd})c;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setImage:(id)a;
 - (q) tag;
 - (id) image;
 - (BOOL) _isSelected;
 - (id) view;
 - (id) nextResponder;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end