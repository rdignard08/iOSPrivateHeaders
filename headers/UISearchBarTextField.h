
@interface UISearchBarTextField : UITextField {

    @"NSMutableDictionary" _customClearButtons;
    @"NSMutableDictionary" _iconOffsets;
    @"NSValue" _searchTextOffsetValue;
    @"_UISearchBarSearchFieldBackgroundView" _effectBackgroundTop;
    @"_UISearchBarSearchFieldBackgroundView" _effectBackgroundBottom;
    BOOL _deferringFirstResponder;
    BOOL _animatePlaceholderOnResignFirstResponder;
    BOOL __preventSelectionViewActivation;
}

 - (void) dealloc;
 - (BOOL) _becomeFirstResponderWhenPossible;
 - (BOOL) canBecomeFirstResponder;
 - (void) tintColorDidChange;
 - (BOOL) _hasActionForEventMask:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _becomeFirstResponder;
 - (BOOL) canResignFirstResponder;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _placeholderColor;
 - (BOOL) _shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
 - (void) _setClearButtonImage:(id)aforState:(Q)b;
 - (void) _setSearchTextOffetValue:(id)a;
 - (id) _searchTextOffsetValue;
 - (void) _setOffsetValue:(id)aforIcon:(q)b;
 - (id) _offsetValueForIcon:(q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) leftViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) updateForBackdropStyle:(Q)a;
 - (void) _removeEffectsBackgroundViews;
 - (void) _setPreventSelectionViewActivation:(BOOL)a;
 - (void) _activateSelectionView;
 - (void) _setEnabled:(BOOL)aanimated:(BOOL)b;
 - (void) _setBottomEffectBackgroundVisible:(BOOL)a;
 - (id) _clearButtonImageForState:(Q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustedTextOrEditingRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforBounds:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _adjustmentsForLeftViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _shouldCenterPlaceholder;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) placeholderRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) _clearButtonSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) clearButtonRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _availableTextRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})aforEditing:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _suffixFrame;
 - (void) _updateBackgroundView:(id)awithStyle:(Q)bfilter:(id)c;
 - (id) _createEffectsBackgroundViewWithStyle:(Q)aapplyFilter:(id)b;
 - (void) _updateBackgroundViewsAnimated:(BOOL)a;
 - (void) _clearBackgroundViews;
 - (BOOL) _preventSelectionViewActivation;
 - (q) _suffixLabelTextAlignment;
 - (Class) _placeholderLabelClass;
 - (Class) _systemBackgroundViewClass;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) textInputTraits;
 - (BOOL) resignFirstResponder;


@end
