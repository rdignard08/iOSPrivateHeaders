
@interface UINavigationItemView : UIView {

    UINavigationItem _item;
    {CGSize="width"d"height"d} _titleSize;
    UIView _topCrossView;
    UIView _bottomCrossView;
    BOOL _isCrossFading;
    BOOL _customFontSet;
    UILabel _label;
    BOOL _isFadingInFromCustomAlpha;
}

 - (id) title;
 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) navigationItem;
 - (void) setFont:(id)a;
 - (id) _scriptingInfo;
 - (void) _resetTitleSize;
 - (void) _setLineBreakMode:(long long)a;
 - (id) initWithNavigationItem:(id)a;
 - (BOOL) titleAutoresizesToFit;
 - (void) setTitleAutoresizesToFit:(BOOL)a;
 - (void) _updateLabelColor;
 - (void) _prepareCrossViewsForNewSize:({CGSize=dd})a;
 - (void) _crossFadeHiddingButton:(BOOL)a;
 - (void) _cleanUpCrossView;
 - ({CGSize=dd}) _titleSize;
 - (BOOL) _isFadingInFromCustomAlpha;
 - (void) _setFadingInFromCustomAlpha:(BOOL)a;
 - (id) _defaultFont;
 - (void) _setFont:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _labelFrame;
 - (BOOL) _useSilverLookForBarStyle:(long long)a;
 - (id) _currentTextColorForBarStyle:(long long)a;
 - ({CGSize=dd}) _currentTextShadowOffsetForBarStyle:(long long)a;
 - (id) _currentTextShadowColorForBarStyle:(long long)a;
 - (double) _titleYAdjustmentCustomization;
 - (void) _updateLabel;
 - (void) _updateLabelContents;
 - (void) _adjustLabelTrackingIfNecessary;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) font;


@end
