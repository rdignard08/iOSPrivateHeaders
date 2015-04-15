
@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {

    @"CALayer" _container;
    @"CALayer" _frontFace;
    @"CALayer" _backFace;
    @"CALayer" _frontDarkening;
    @"CALayer" _backDarkening;
    @"CALayer" _backDarkeningLeft;
    @"CALayer" _backDarkeningRight;
    BOOL _showingFrontFace;
    @"UIKBCacheToken" _startKeyplaneToken;
    @"UIKBCacheToken" _endKeyplaneToken;
    @"NSMutableDictionary" _controlKeys;
    {?="shiftKeys"b1"returnKeys"b1"moreIntlKeys"b1} _rebuildFlags;
}

 - (void) dealloc;
 - (void) rebuildTransitionForSplitStyleChange:(id)a;
 - (BOOL) transitionIsVisible;
 - (^{CGImage=}) defaultKeyboardImage;
 - (^{CGImage=}) splitKeyboardImage;
 - (void) rebuildFromKeyplane:(id)atoKeyplane:(id)bkeyboardType:(long long)corientation:(long long)d;
 - (void) rebuildControlKeys:(unsigned long long)a;
 - (void) _flipToFront:(BOOL)aanimated:(BOOL)b;
 - (void) rebuildControlSlicesForKeyName:(id)a;
 - (void) updateMoreIntlKey:(id)aasStart:(BOOL)bwithRect:({CGRect={CGPoint=dd}{CGSize=dd}})cshowIntl:(BOOL)dshowDictKey:(BOOL)e;
 - (void) rebuildTransition;
 - (void) rebuildMoreIntlKeys;
 - (void) rebuildShiftSlices;
 - (void) rebuildReturnSlices;
 - (void) updateTransition;
 - (void) setShowingFrontFace:(BOOL)a;
 - (void) rebuildBackgroundTransition;
 - (void) _delayedUpdateTransition;
 - (BOOL) isShowingFrontFace;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
